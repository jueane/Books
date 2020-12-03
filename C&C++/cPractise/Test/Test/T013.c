/*
从键盘录入一个字符串，将该字符串中下标为偶数的字符删除，并显示删除后的字符串。
*/
#include <stdio.h>
#include <string.h>
int main(int argc,char *args[])
{
	int i;
	int len;
	char source[80];
	printf("Please Input:\n");
	scanf("%s",source);
	len=strlen(source);
	for(i=0;i<=(len/2);i++)
	{
		source[i]=source[i*2];//source[2]怎么变为空了？
	}
	printf("%s",source);
	printf("<%c>",source[2]);
	return 0;
}