// Usage : ./a.out 20
#include <stdio.h>
#include <windows.h>
int main( int argc , char *argv[])
{
int dep_time;
dep_time = atoi( argv[1] )*1000 ; //�������и�����20�����ӣ�ת�������͵�����
if( fork()==0 ) //�����ӽ��̣�Ȼ�󸸽�����ֹ
{
sleep( dep_time );
printf("��ͣ");
}
getch();
return 0;
}
