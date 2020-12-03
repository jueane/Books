////////////////////////////////////////////
////求s=1！+2！+3！+4！+5！,并输出结果。
////(输入N，算出s=1!+2!+……+n!)
////////////////////////////////////////////
#include <stdio.h>
int cmain(int argc,char *args[])
{
	int iN,iResult=0,i,j,m;
	scanf("%d",&iN);
	for(i=iN;i>0;i--)
	{
		m=1;
		for(j=0;j<i;j++)
		{
			m=m*(j+1);
			printf(" %d",m);
		}
		printf("\n");
		iResult+=m;
	}
	printf("%d",iResult);
	return 0;
}