#include"hanshu.h"
#include"admin_menu.h"
#include"fuzhu.h"
#include"hanshu1.h"
#include"super_admin.h"
#include"teacher.h"
//添加教师
void teacher_add(void)
{
	system("clear");
	puts("----教师添加----");
	printf("\n请选择添加方式(1.单个添加/2.批量添加)");
	char ch=getch();
	if(49 == ch)
	{
		for(int i=0;i<100;i++)
		{
			if(0 == tea[i].number)
			{
				printf("\n");
				printf("请输入工号:");
				scanf("%s",tea[i].id);
				printf("\n请输入姓名：");
				scanf("%s",tea[i].name);
				printf("\n请输入性别:");
				scanf("%s",tea[i].sex);
				printf("\n请输入年龄：");
				scanf("%d",&tea[i].age);
				printf("\n请输入工龄:");
				scanf("%d",&tea[i].work);
				puts("\n添加教师成功!\n");
				tea[i].number = 1;
				strcpy(tea[i].pass,"123456");
				return;
			}
		}
	}
	if(50 == ch)
	{
		printf("\n");
		FILE* frp = fopen("teacher.dat","r");
		if(NULL != frp)
		{
			int i=0;
			while(i++<100)
			{
				fscanf(frp,"%s %s %s %d %d",tea[i].id,tea[i].name,tea[i].sex,&tea[i].age,&tea[i].work);
				if(feof(frp))
				{
					break;
				}
				tea[i].number = 1;
				strcpy(tea[i].pass,"123456");
				 printf("%s %s %s %d %d\n",tea[i].id,tea[i].name,tea[i].sex,tea[i].age,tea[i].work);
			}
		}
		show_msg("\n教师添加成功",1);
		return;
	}
}

//删除教师
void teacher_del(void)
{
	system("clear");
	printf("请输入要删除的教师姓名");
	char key[20];
	gets(key);
	int index = _find_name(key);
	if(-1 != index)
	{
		tea[index].number = -1;
		show_msg("\n删除成功",1);
		return;
	}
	if(-1 == index)
	{
		show_msg("教师已离职",1);
		return;
	}
}

//修改教师信息
void teacher_change(void)
{
	printf("请输入要修改的教师姓名：");
	char key[20];
	gets(key);
	int index = _find_name(key);
	if(-1 != index)
	{
		printf("\n工号:%s 姓名:%s 性别:%s 年龄:%d 工龄:%d\n",tea[index].id,tea[index].name,tea[index].sex,tea[index].age,tea[index].work);
		printf("请输入要修改的信息：\n");
		puts("请输入新工号:");
		scanf("%s\n",tea[index].id);
		puts("请输入新年龄:");
		scanf("%d\n",&tea[index].age);
		puts("请输入新工龄:");
		scanf("%d\n",&tea[index].work);
		show_msg("修改成功\n",1);
		return;
	}
}

//重置教师密码
void teacher_password_reset(void)
{
	system("clear");
	printf("请输入要重置密码的教师姓名:");
	char key[20];
	gets(key);
	int index = _find_name(key);
	if(-1 != index)
	{
		strcpy(tea[index].pass,"123456");
		show_msg("密码重置成功",1);
		return;
	}
}

//解锁教师帐号
void teacher_au_unlock(void)
{
	system("clear");
	printf("请输入要解锁帐号的教师姓名:");
	char key[20];
	gets(key);
	int index = _find_name(key);
	if(-1 != index)
	{
		if(1 == tea[index].lock)
			tea[index].lock = 0;
		show_msg("\n解锁成功",1);
		return;
	}
}

//查询教师
void teacher_find(void)
{
	system("clear");
	printf("请输入要查询的教师姓名:");
	char key[20];
	gets(key);
	for(int i=0;i<100;i++)
	{
		if(strstr(tea[i].name,key))
			printf("工号:%s 姓名:%s 性别:%s 年龄:%d 工龄:%d\n",tea[i].id,tea[i].name,tea[i].sex,tea[i].age,tea[i].work);
	}
	key_continue();
	return;
}

//显示在职教师
void teacher_act_show(void)
{
	system("clear");
	puts("----在职教师-----");
	for(int i=0;i<100;i++)
	{
		if(tea[i].number>0)
			printf("工号:%s 姓名:%s 性别:%s 年龄:%d 工龄:%d\n",tea[i].id,tea[i].name,tea[i].sex,tea[i].age,tea[i].work);
	}
	key_continue();
}

//显示离职教师
void teacher_quit_show(void)
{
	system("clear");
	puts("----离职教师----");
	for(int i=0;i<100;i++)
	{
		if(-1 == tea[i].number)
			printf("工号:%s 姓名:%s 性别:%s 年龄:%d 工龄:%d\n",tea[i].id,tea[i].name,tea[i].sex,tea[i].age,tea[i].work);
	}
	key_continue();
}

//修改密码
void admin_password_change(int i)
{
	system("clear");
	puts("----密码修改----");
	puts("请输入新密码:");
	char key1[20];
	char key2[20];
	gets(key1);
	puts("请再输入一遍:");
	gets(key2);
	if(strcmp(key2,key1) != 0)
	{
		show_msg("\n两次密码不一致",1);
		return;
	}
	else
	{
		strcpy(adm[i].password,key1);
		show_msg("\n密码修改成功",1);
		return;
	}
}
