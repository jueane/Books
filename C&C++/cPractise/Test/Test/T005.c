///从键盘输入一个正整数，输出各位数字的和。
#include <stdio.h>
int emain(int argc,char *args[])
{
	int iInput,iOutput=0,iSingle;
	scanf("%d",&iInput);
	do
	{
		iSingle=iInput%10;
		iInput/=10;
		iOutput+=iSingle;
	}while(iInput);
	printf("%d",iOutput);
	return 0;
}