#include <stdio.h>
#include <WinSock2.h>

#pragma comment(lib, "ws2_32.lib")
#define DEFAULT_PORT 7878
int main() {
    WSADATA wsa;
    printf("Start\n");

    if (WSAStartup(MAKEWORD(2,2), &wsa) != 0) {
        printf("Failed. Error code : %d\n", WSAGetLastError());
        return 1;
    }
    printf("WSADATA initialized\n");

    // Create socket
    SOCKET server_s = socket(AF_INET, SOCK_STREAM, 0);
    if (server_s == INVALID_SOCKET) {
        printf("Socket invalid bla bla bla\n"); 
    }
    printf("Socket created\n");
    
    // bind socket to an address
    struct sockaddr_in server;

    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_family = AF_INET;
    server.sin_port = htons(DEFAULT_PORT);

    bind(server_s, (struct sockaddr *)&server, sizeof(server));
    listen(server_s, SOMAXCONN);

    printf("Server listening on port %d...\n", DEFAULT_PORT);

    SOCKET client_socket = accept(server_s, NULL, NULL);
    printf("Client connected\n");



    return 0;
}