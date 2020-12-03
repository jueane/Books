//使用结构

#include <stdio.h>

struct student
{
	int number;
	char *name;
	int score;
};


int dmain(int argc,char *args[])
{
	struct student a;	
	struct student b={3,"wang",95};
	a.number=1;
	a.name="li";
	a.score=90;
	printf("%s\n",a.name);
	printf("%s",b.name);

	return 0;
}