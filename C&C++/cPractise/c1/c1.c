// Usage : ./a.out 20
#include <stdio.h>
#include <windows.h>
int main( int argc , char *argv[])
{
int dep_time;
dep_time = atoi( argv[1] )*1000 ; //将参数中给出的20（分钟）转换成整型的秒数
if( fork()==0 ) //生成子进程，然后父进程中止
{
sleep( dep_time );
printf("暂停");
}
getch();
return 0;
}
