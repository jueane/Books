/*
��������һ����λ���������ж��Ƿ�Ϊ��ˮ�ɻ�������
��ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ�������
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
		printf("ˮ�ɻ�����");
	else
		printf("����ˮ�ɻ�����");
	return 0;

}