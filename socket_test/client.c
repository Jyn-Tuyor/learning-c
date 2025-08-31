#include <stdio.h>
#include <WinSock2.h>

#pragma comment(lib, "ws2_32.lib")
#define SERVER_PORT 7878

int main(void) {
    WSADATA wsa;
    struct sockaddr_in server;

    char *message = "Hello from client!";
    char buffer[512];
    int recv_size;

    if (WSAStartup(MAKEWORD(2,2), &wsa) != 0) {
        printf("Error initializing winsock: %d", WSAGetLastError());
        return 1;
    }

    SOCKET sock;
    // create socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
    // bind to a server
    server.sin_family = AF_INET;
    server.sin_port = htons(SERVER_PORT);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");

    connect(sock, (struct sockaddr *)&server, sizeof(server));
    send(sock, message, strlen(message), 0);


    closesocket(sock);
    WSACleanup();

    return 0;
}