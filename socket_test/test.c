#include <winsock2.h>
#include <windows.h>
#include <stdio.h>

#pragma comment(lib, "ws2_32.lib")

DWORD WINAPI ClientHandler(LPVOID lpParam) {
    SOCKET clientSocket = (SOCKET)lpParam;
    char buffer[1024];
    int bytesReceived;

    while ((bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0)) > 0) {
        buffer[bytesReceived] = '\0';
        printf("Client says: %s\n", buffer);

        // Echo back
        send(clientSocket, buffer, bytesReceived, 0);
    }

    printf("Client disconnected.\n");
    closesocket(clientSocket);
    return 0;
}

int main() {
    WSADATA wsa;
    SOCKET serverSocket, clientSocket;
    struct sockaddr_in server, client;
    int clientSize = sizeof(client);

    // Initialize Winsock
    WSAStartup(MAKEWORD(2,2), &wsa);

    // Create socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    // Bind
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(8888);
    bind(serverSocket, (struct sockaddr*)&server, sizeof(server));

    // Listen
    listen(serverSocket, SOMAXCONN);
    printf("Server listening on port 8888...\n");

    while ((clientSocket = accept(serverSocket, (struct sockaddr*)&client, &clientSize)) != INVALID_SOCKET) {
        printf("Client connected.\n");

        // Create a new thread for each client
        HANDLE thread = CreateThread(
            NULL,                // default security
            0,                   // default stack size
            ClientHandler,       // thread function
            (LPVOID)clientSocket,// argument to thread
            0,                   // run immediately
            NULL                 // thread ID
        );

        if (thread == NULL) {
            printf("Failed to create thread.\n");
            closesocket(clientSocket);
        } else {
            CloseHandle(thread); // we don’t need to keep the handle
        }
    }

    closesocket(serverSocket);
    WSACleanup();
    return 0;
}
