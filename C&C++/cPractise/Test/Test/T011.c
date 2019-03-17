/*
		  *
         ***
        *****
       *******
*/
#include <stdio.h>
#include <stdlib.h>

int jztmain(int argc,char *args[])
{
	int i,j,k,rows;
	printf("Rows:");
	scanf_s("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(j=40-i;j>0;j--)
		{
			printf(" ");
		}
		for(k=i*2+1;k>0;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}