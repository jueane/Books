/*
�Ӽ���¼��һ���ַ����������ַ������±�Ϊż�����ַ�ɾ��������ʾɾ������ַ�����
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
		source[i]=source[i*2];//source[2]��ô��Ϊ���ˣ�
	}
	printf("%s",source);
	printf("<%c>",source[2]);
	return 0;
}