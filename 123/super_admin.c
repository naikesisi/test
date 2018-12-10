#include"admin_menu.h"
#include"fuzhu.h"
#include"hanshu.h"
#include"hanshu1.h"
#include"super_admin.h"
void super_admin_show()
{
	system("clear");
	puts("----超级管理员界面----\n");
	puts("        1.添加管理员\n");
	puts("        2.删除管理员\n");
	puts("        3.重置管理员密码\n");
	puts("        4.解锁管理员帐号\n");
	puts("        5.显示所有管理员\n");
	puts("        0.退出\n");
	puts("                        ");
	puts("----请输入指令----\n");
}

void super_menu_choose()
{
	while(1)
	{
		super_admin_show();
		switch(get_cmd('0','5'))
		{
			case '1':admin_add();break;
			case '2':admin_del();break;
			case '3':admin_password_reset();break;
			case '4':admin_au_unlock();break;
			case '5':admin_show1();break;
			case '0':return;
		}
	}
}
