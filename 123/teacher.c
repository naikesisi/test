#include "teacher.h"
#include "stuinfo.h"
#include "stuscore.h"

teacher tea[100];

void inteacher(int i)
{
	int x=0;
	do{
	system("clear");
	char a[10];
	if(0 == tea[i].first)
	{
		printf("请修改初始密码！\n");
		printf("输入修改的密码：\n");
		scanf("%s",a);
		strcpy(tea[i].pass,a);
		tea[i].first = 1;
		printf("\n修改成功！\n");
	}
	printf("******学生信息管理******\n");
	printf("1添加学生\n");
	printf("2删除学生\n");
	printf("3修改学生基本信息\n");
	printf("4重置学生密码\n");
	printf("5解锁学生账号\n");
	printf("6查询学生基本信息\n");
	printf("7显示所有在读学生\n");
	printf("8显示所有退学学生\n");
	printf("9修改登录密码\n\n");
	printf("******学生成绩管理******\n");
	printf("a录入学生成绩\n");
	printf("b修改学生成绩\n");
	printf("c根据学号或姓名查询学生成绩\n");
	printf("d按各科分数和部分排序\n");
	printf("q返回上一界面\n");
		x=getch();
		switch(x)
		{
			case '1':add_stu();break;
			case '2':del_stu();break;
			case '3':change_stu();break;
			case '4':reset_stu();break;
			case '5':unclock_stu();break;
			case '6':find_stu();break;
			case '7':showin_stu();break;
			case '8':showout_stu();break;
			case 'a':add_score();break;
			case 'b':change_score();break;
			case 'c':find_score();break;
			case 'd':get_rank();break;
			case '9':printf("\n请输入修改的密码：");
		      	     scanf("%s",a);
					 strcpy(tea[i].pass,a);
					 printf("\n修改成功！");
					 break;
		}
	}while(x!='q');

}
