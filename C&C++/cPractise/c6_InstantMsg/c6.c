//   instant msg
#include <windows.h>
#include <winsock.h>
int main()
{
    WSADATA *wsa;
    SOCKET sServer;
    struct sockaddr_in addrServer;

    
    
    WSAStartup(0x0202,wsa);
    sServer=socket(AF_INET,SOCK_STREAM,0);
    
    
    
}
