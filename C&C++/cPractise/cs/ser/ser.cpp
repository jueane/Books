#include <iostream>
using namespace std;

inline int nadd(int n)
{
	n++;
	return n;
}


int main(int argc,char *argv[])
{
	char b=argv[1][0];
	printf("%c",nadd(b));

	return 0;
}
