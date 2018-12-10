#include"password.h"
#include"check_pass.h"
#include"teacher.h"
#include"student.h"
#include"admin_menu.h"

int password(int x)
{
	char a[20]={},b[20]={};
	int lock=0;
	system("clear");
	if(x!='1'&&x!='2'&&x!='3'&&x!='q')
	{
		printf("输入错误，请重试\n");
		sleep(2);
		return -1;
	}
//学生登陆界面
	if(x=='1')
	{
		printf("请输入学号：");
		scanf("%s",a);
		getch();
		for(int i=0;i<1000;i++)
		{
			if(strcmp(a,stu[i].id)==0&&stu[i].lock!=1)
			{
				printf("%d\n",stu[i].lock);
				printf("请输入密码：");
				while(lock<3)
				{
					if(check_pass(i,1)==1)
					{
						printf("登陆成功。\n");
						sleep(2);
						return i;
					}
					else
					{
						printf("密码错误请重新输入\n");
						lock++;
						if(lock==3)
						{
							stu[i].lock=1;
						}
					}
				}
			}
			if(strcmp(a,stu[i].id)==0&&stu[i].lock==1)
				{
					printf("您的帐号已经被锁定\n");
					sleep(2);
					return -1;
				}
		}
		printf("帐号错误请重新输入\n");
		printf("按q返回,其他键继续.");
		if(getch()=='q')
			return -1;
		else
			password(x);
	}

//教师登陆界面
	if(x=='2')
	{
		printf("请输入工号:\n");
		scanf("%s",a);
		getch();
		for(int i=0;i<100;i++)
		{
			if(strcmp(a,tea[i].id)==0&&tea[i].lock!=1)
			{
				printf("请输入密码：");
				while(lock<3)
				{
					if(check_pass(i,2)==1)
					{
						printf("\n登陆成功。\n");
						sleep(2);
						return i;
					}
					else
					{
						printf("密码错误请重新输入\n");
						lock++;
					}
				}
				tea[i].lock=1;
			}
			if(strcmp(a,tea[i].id)==0&&tea[i].lock==1)
				{
					printf("您的帐号已经被锁定\n");
					sleep(2);
					return -1;
				}
		}
		printf("帐号错误请重新输入\n");
		printf("按q返回,其他键继续.");
		if(getch()=='q')
			return -1;
		else
			password(x);
	}

//管理员登陆界面
	if(x=='3')
	{
		printf("请输入管理员帐号:");
		scanf("%s",a);
		getch();
		for(int i=0;i<20;i++)
		{
			if(strcmp(a,adm[i].id)==0&&adm[i].lock!=1&&adm[i].number!=0)
			{
				printf("请输入密码：");
				while(lock<3)
				{
					if(check_pass(i,3)==1)
					{
						printf("\n登陆成功。\n");
						sleep(2);
						return i;
					}
					else
					{
						printf("密码错误请重新输入\n");
						lock++;
					}
				}
				adm[i].lock=1;
			}
			if(strcmp(a,adm[i].id)==0&&adm[i].lock==1)
			{
					printf("您的帐号已经被锁定\n");
					sleep(2);
					return -1;
			}
		}
			printf("帐号错误请重新输入\n");
			printf("按q返回,其他键继续.");
			if(getch()=='q')
				return -1;
			else
				password(x);
		
	}
}


