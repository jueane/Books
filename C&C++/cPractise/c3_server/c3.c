
// Server
#include <windows.h>
#include <winsock.h>
int main()
{
    
    WORD wVer=0x0202;
    WSADATA lpWSADATA;
    SOCKET hSocket,hClient;
    int cAddrlen;
    struct sockaddr_in saddr;
    struct sockaddr_in caddr;
    char strReceive[512];
    
    saddr.sin_family=AF_INET;
    saddr.sin_port=htons(336);
    saddr.sin_addr.s_addr=htons(INADDR_ANY);
    
    printf("This is server!\n");
    
    if(WSAStartup(wVer,&lpWSADATA)!=0)
    {
        printf("Winsock dll load Failed!\n");
        getch();
        return 0;
    }
    printf("Winsock dll load sucessed!\n");
    
    hSocket=socket(AF_INET,SOCK_STREAM,0);
    if(hSocket==INVALID_SOCKET)
    {
        printf("Socket create Error!\n");
        getch();
        return 0;
    }
    printf("hSocket created!\n");
    
    if(bind(hSocket,(struct sockaddr *)&saddr,sizeof(struct sockaddr))!=0)
    {
        printf("Bind failed!\n");
        getch();
        return 0;
    }
    printf("Binded!\n");
    
    if(listen(hSocket,2)!=0)
    {
        printf("Liste failed!\n");                        
    }
    while(1)
    {
        printf("Listenning!\n");
        hClient=accept(hSocket,(struct sockaddr *)&caddr,&cAddrlen);
        if(hClient==INVALID_SOCKET)
        {
            printf("Error Code:%d",WSAGetLastError());
            printf("\n");
            goto End;
        
        }
        printf("Received a connection!\n");
    
        printf("Send:Welcome!\n");
        send(hClient,"hello",5,0);
        if(send(hClient,"Welcome!\n",8,0)==SOCKET_ERROR)
            printf("\nSend Error!\n");
        else
            printf("Practical send:%s\n");
    
    }
    
    End:        
    closesocket(hSocket);
    closesocket(hClient);
    WSACleanup();
    return 0;
}
