/*
一、利用循环打印出九九表。显示结果如下
1*1=1
2*1=2  2*2=4
3*1=3  3*2=6  3*3=9
…………
9*1=9  9*2=18  9*3=27  9*4=36  9*5+45  9*6=54  9*7=63  9*8=72  9*9=81
*/
#include <stdio.h>
int ssrmain(int argc,char *args[])
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}