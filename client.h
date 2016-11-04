//General includes
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

//Socket include
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define DT_SERVER "129.6.15.28"
#define DT_PORT "13"

#define MAX_DAYTIME_LENGTH 80
#define OTM '*'

int connect_to_serv(struct sockaddr_in addr);
void deconnect(int csocket);

char* readLine(int csocket);
