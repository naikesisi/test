#include "student.h"
#include "rank.h"

student stu[1000];
int m=0;

void instudent(int i)
{
	int x=0;
	do{
	system("clear");
	char a[10];
	if(0 == stu[i].first)
	{
		printf("请修改初始密码！\n");
		printf("修改后的密码：\n");
		scanf("%s",a);
		strcpy(stu[i].pass,a);
		stu[i].first = 1;
		printf("\n修改成功！\n");
	}
	printf("姓名：%s\n",stu[i].name);
	printf("语文成绩：%f\n",stu[i].ch);
	printf("数学成绩：%f\n",stu[i].ma);
	printf("英语成绩：%f\n",stu[i].en);
	printf("平均分：%f\n",stu[i].avg);
	printf("总分：%f\n",stu[i].sum);
	printf("按1查看单科成绩排名\n");
	printf("按2查看总分成绩排名\n");
	printf("按3修改密码\n");
	printf("按q返回上一界面\n");
    x=getch();
	switch(x)
	{
		case '1':part_rank(i);break;
		case '2':sum_rank(i);break;
		case '3':change_pass(i);break;
	}
	}while(x!='q');
}
