//输入一个正整数，按照逆序显示输出各位数字。
//例如：输入2389，则输出为9832。
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