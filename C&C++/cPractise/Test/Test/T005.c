///�Ӽ�������һ���������������λ���ֵĺ͡�
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