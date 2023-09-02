#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main() {

    // Creating socket
    int server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if(server_socket == -1) {
        printf("Error creating socket\n");
        exit(1);
    }

    // Binding socket
    struct sockaddr_in server_address;

}
