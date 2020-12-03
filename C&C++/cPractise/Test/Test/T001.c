//отй╬хГоб///////////////////
//*****
// ****
//  ***
//   **
//    *
/////////////////////////////
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void strcat_m(char *sParent,char *sChild)
{
	int i;
	int aLength,bLength;
	aLength=strlen(sParent);
	bLength=strlen(sChild);
	for(i=0;i<bLength;i++)
	{
		sParent[aLength+i]=sChild[i];
	}
}

int a_main(int argc,char *args[])
{
	char *pChild="*";
	char aParent[80]="";
	int iRow=atoi(args[1]),iI;

	printf("<Rows:%d>\n",iRow);

	for(iI=iRow;iI>0;iI--)
	{
		strcat_m(aParent,pChild);
	}
	iI=0;
	do{
		printf("%s\n",aParent);
		aParent[iI]=32;		
		iI++;
	}while(iI!=iRow);

	return 0;
}