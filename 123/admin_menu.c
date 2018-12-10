#include"admin_menu.h"
#include"hanshu.h"
#include"fuzhu.h"
#include"hanshu1.h"
#include"super_admin.h"

Admin adm[20];
void admin_password_start(int i)
{
	if(0 == adm[i].count)
	{
		char key1[20];
	    char key2[20];
	    printf("         请修改初始密码\n");
		puts("请输入新密码：");
		gets(key1);
		puts("请再输入一遍密码:");
		gets(key2);
		if(strcmp(key1,key2) != 0)
		{
			show_msg("两次密码不一致",1);
		}
		else
		{
			strcpy(adm[i].password,key1);
			show_msg("密码修改成功",1);
		}
	}
	adm[i].count=1;
	menu_choose(i);
}

void admin_show(int i)
{
	system("clear");
	puts("----管理员界面----");
	puts("        1.添加教师");
	puts("        2.删除教师");
	puts("        3.修改教师基本信息");
	puts("        4.重置教师密码");
	puts("        5.解锁教师帐号");
	puts("        6.查询教师基本信息");
	puts("        7.显示在职教师");
	puts("        8.显示离职教师");
	puts("        9.修改登陆密码");
	puts("        0.退出系统");
	puts("                        ");
	puts("----请输入指令----");
}

void menu_choose(int i)
{
	while(1)
	{
		admin_show(i);
		switch(get_cmd('0','9'))
		{
			case '1':teacher_add();break;
			case '2':teacher_del();break;
			case '3':teacher_change();break;
			case '4':teacher_password_reset();break;
			case '5':teacher_au_unlock();break;
			case '6':teacher_find();break;
			case '7':teacher_act_show();break;
			case '8':teacher_quit_show();break;
			case '9':admin_password_change(i);break;
			case '0':return;
		}
	}
}

