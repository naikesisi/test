#include"hanshu1.h"
#include"super_admin.h"
#include"fuzhu.h"
#include"admin_menu.h"
#include"hanshu.h"

void admin_add()
{
	system("clear");
	puts("----管理员添加----\n");
	puts("新添的管理员：\n");
	for(int i=0;i<20;i++)
	{
		if(0 == adm[i].number)
		{
			printf("\n管理员帐号:");
			scanf("%s",adm[i].id);
			strcpy(adm[i].password,"123456");
			printf("\n管理员初始密码：%s",adm[i].password);
			adm[i].number = 1;
			show_msg("\n管理员添加成功",1);
			return;
		}
	}
}

void admin_del()
{
	printf("请输入要删除的管理员ID:");
	char key[20];
	gets(key);
	int index = _find_id(key);
	if(-1 != index)
	{
		adm[index].number = 0;
		show_msg("\n删除成功",1);
		return;
	}
	if(-1 == index)
	{
		show_msg("\n管理员不存在",1);
		return;
	}
}

void admin_password_reset()
{
	printf("请输入要重置密码的管理员ID:");
	char key[20];
	gets(key);
	int index = _find_id(key);
	if(-1 != index)
	{
		strcpy(adm[index].password,"123456");
		show_msg("\n密码重置成功",1);
		return;
	}
}

void admin_au_unlock()
{
	printf("请输入要解锁帐号的管理员ID:");
	char key[20];
	gets(key);
	int index = _find_id(key);
	if(-1 != index)
	{
		if(1 == adm[index].lock)
		adm[index].lock = 0;
		show_msg("\n解锁成功",1);
		return;
	}
}

void admin_show1()
{
	system("clear");
	puts("----管理员----");
	for(int i=0;i<20;i++)
	{
		if(adm[i].number == 1)
			printf("\nID:%s 密码:%s",adm[i].id,adm[i].password);
	}
	printf("\n");
	key_continue();
}
