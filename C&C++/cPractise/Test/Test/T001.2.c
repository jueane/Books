#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int abmain(int argc,char *args[])
{
	int iRow=atoi(args[1]);
	int i,j,k;

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0;k<iRow-i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}