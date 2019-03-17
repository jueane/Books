// client
#include <windows.h>
#include <winsock.h>
int main(int argc,char *argv[])
{
    WORD wVer=0x0202;
    WSADATA lpWSADATA;
    SOCKET hSocket;
    struct sockaddr_in saddr;
    
    saddr.sin_family=AF_INET;
    saddr.sin_port=htons(336);
    saddr.sin_addr.s_addr=inet_addr("192.168.1.1");
    char strReceive[512];
    
    printf("This is client!\n");
    if(WSAStartup(wVer,&lpWSADATA)!=0)
    {
        printf("Winsock Dll load failed!\n");
        getch();
        return 0;
    }
    printf("Winsock dll loaded!\n");
    
    hSocket=socket(AF_INET,SOCK_STREAM,0);
    if(hSocket==INVALID_SOCKET)
    {
        printf("Socket create failed!\n");
        getch();
        return 0;
    }
    printf("hSocket created!\n");
    
    if(connect(hSocket,(SOCKADDR *)&saddr,sizeof(struct sockaddr_in))!=0)
    {
        printf("Connect failed!\n");
        getch();
        return 0;
    }
    printf("Connected!\n\n");
    
    if(recv(hSocket,strReceive,512,0)==SOCKET_ERROR)
        printf("Cannot receive!\n");
    else
        printf("Receive:\n%s\n",strReceive);

    if(recv(hSocket,strReceive,512,0)==SOCKET_ERROR)
        printf("Cannot receive!\n");
    else
        printf("Receive:\n%s\n",strReceive);    

printf("Third receive.\n");
    if(recv(hSocket,strReceive,512,0)==SOCKET_ERROR)
        printf("Cannot receive!\n");
    else
        printf("Receive:\n%s\n",strReceive);           
        
    getch();
    closesocket(hSocket);
    WSACleanup();
    return 0;
}
