/*
二、输入一个三位正整数，判断是否为“水仙花数”。
所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。
*/
#include <stdio.h>
int sxmain(int argc,char *args[])
{
	int a,b,c,k,t,sum;
	printf("Please Input:");
	scanf_s("%d",&k);
	t=k;
	c=k%10;
	k/=10;
	b=k%10;
	k/=10;
	a=k;
	printf("a:%d;b:%d;c:%d\n",a,b,c);
	sum=a*a*a+b*b*b+c*c*c;
	printf("Sum:%d\n",sum);
	if(t==sum)
		printf("水仙花数！");
	else
		printf("不是水仙花数！");
	return 0;

}