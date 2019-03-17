#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int command()
{
    char *strCommand=malloc(512);
    char *fBuffer=malloc(2048);
    FILE *fTemp;
    
//    fp=fopen("/cache.txt","W+");
    
    if(fTemp==0)
    {
        printf("File open error!\n");
        return 0;
    }


    system("cls");
    printf("Enter command mode!\n\n");
    system("cd>cache.txt");

    do{
        gets(strCommand);
        printf("The comamnd you entered is %s.Then execute.\n",strCommand);
        strcat(strCommand,">cache.txt");
        
        system(strCommand);
    }while(stricmp(strCommand,"exit>cache.txt")!=0);
    
    return 0;
}
int main()
{
    char *strReceive=malloc(512);
    char *strResult=malloc(2048);
    
    printf("Enter function:\n");
    gets(strReceive);
    printf("You entered:%s\n",strReceive);
    
    
    if(stricmp(strReceive,"/command")==0)
    {
        command();
        system("cls");
        printf("Exited Command mode.\n");
    }
    
    getch();
    getch();
    return 0;
}
