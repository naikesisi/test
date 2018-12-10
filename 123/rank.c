#include "student.h"
#include "rank.h"
void part_rank(int i)
{
	system("clear");
	printf("语文排名：%d\n",stu[i].ch_rank);
	printf("数学排名：%d\n",stu[i].ma_rank);
	printf("英语排名：%d\n",stu[i].en_rank);
	printf("按0返回上一界面！");
	loop:
	switch(getch())
	{
		case '0':return;
		default:goto loop;
	}
}

void sum_rank(int i)
{
	system("clear");
	printf("总排名：%d\n",stu[i].rank);
	printf("按0返回上一界面！");
	loop:
	switch(getch())
	{
		case '0':return;
		default:goto loop;
	}
}

void change_pass(int i)
{
    char a[10];
	system("clear");
	printf("请输入修改后的密码：");
	scanf("%s",a);
	strcpy(stu[i].pass,a);
    printf("\n修改成功！请牢记！");
	printf("\n按0返回上一界面！");
	loop:
	switch(getch())
	{
		case '0':return;
		default:goto loop;
	}
}


