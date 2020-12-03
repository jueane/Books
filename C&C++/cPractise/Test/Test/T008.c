////学生数据中不及格的学生信息显示出来
#include <stdio.h>
struct student
{
	int number;
	char *name;
	int score;
};
int ddfmain(int argc,char *args[])
{
	struct student a={1,"Li",52};
	struct student b={2,"wang",95};
	struct student c={3,"zhao",43};
	struct student d={4,"liu",85};
	struct student e={5,"chen",94};
	struct student f={6,"yang",51};

	printf("Failure:\n");
	if(a.score<60)printf("%s:%d\n",a.name,a.score);
	if(b.score<60)printf("%s:%d\n",b.name,b.score);
	if(c.score<60)printf("%s:%d\n",c.name,c.score);
	if(d.score<60)printf("%s:%d\n",d.name,d.score);
	if(e.score<60)printf("%s:%d\n",e.name,e.score);
	if(f.score<60)printf("%s:%d\n",f.name,f.score);
	return 0;
}
