//����һ��������������������ʾ�����λ���֡�
//���磺����2389�������Ϊ9832��
///////////////////////////////////////////
#include <stdio.h>
int amain(int argc,char *args[])
{
	long iInput,iOutput;
	scanf("%d",&iInput);
	while(iInput/10)
	{
		printf("%d",iInput%10);
		iInput/=10;
	}
	printf("%d",iInput);
	return 0;
}