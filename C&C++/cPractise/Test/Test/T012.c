/*
���ӡ�ܱ�3���������ܱ�5������100���ڵ�����
*/
#include <stdio.h>
int swmain(int argc,char *args[])
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%3==0&&i%5==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}