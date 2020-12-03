/*
请打印能被3整除并且能被5整除的100以内的数。
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