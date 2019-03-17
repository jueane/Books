///、有一个已经排好序的数组a[30]={7,10,13,16,20,24,26,46,68,69,99}。
///从键盘录入一个整数，要求按原来的排序规律将它插入数组中，并显示插入后的数组的内容。
//////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#define arrayitem 11
int intlen(int *a)
{
	int i=28;
	while(a[i]==0)
	{
		i--;
	}
	return i;
}

int iimain(int argc,char *args[])
{
	
	int a[30]={7,10,13,16,20,24,26,46,68,69,99};
	int i,j,m,len;
	
	printf("%d>>",len=intlen(a));
	

	printf("Enter a number:");
	scanf_s("%d",&m);
	for(i=len;a[i]>0;i--)
	{
		if(m<a[i])
		{
			a[i+1]=a[i];
		}
		else
		{
			a[i+1]=m;
			printf("Break at:%d",a[i]);
			break;
		}
	}
	printf("\n");
	for(j=0;a[j]>0;j++)
	{
		printf("%d.",a[j]);

	}
	printf("\n<Integer Array Count:%d>\n",j);


	return 0;
}