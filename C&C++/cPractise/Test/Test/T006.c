///////////////////////////////////////////
////��ʾ��min��max���е�����������ʾ�ܸ���
///////////////////////////////////////////
#include <stdio.h>
#define min 101
#define max 200
int fmain(int argc,char *args[])
{
	int i,j,key;
	int n=0;
	for(i=min;i<=max;i++)
	{
		key=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				key++;
			}
		}		
		if(key==2)
		{
			printf("%d ",i);
			n++;
		}
	}
	printf("\nһ����%d��",n);
	return 0;
}