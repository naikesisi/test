#include"fuzhu.h"
#include"admin_menu.h"
#include"hanshu.h"
#include"hanshu1.h"
#include"super_admin.h"
#include"teacher.h"
char get_cmd(char start,char end)
{
	 while(1)
	 {
		 char cmd = getch();
		 if(cmd >= start && cmd <= end)
		 {
//			 printf("%c\n",cmd);
			 return cmd;
		 }
	 }
}

int _find_name(char* str)
{
	for(int i=0;i<100;i++)
	{
		 if(tea[i].sex && 0 == strcmp(tea[i].name,str))
			 return i;
	}
	return -1;
}

int _find_id(char* str)
{
	for(int i=0;i<20;i++)
	{
		if(adm[i].number && 0 == strcmp(adm[i].id,str))
			return i;
	}
	return -1;
}

void key_continue(void)
{
	puts("按esc退出.....");
	while(27 != getch());
}

void show_msg(char* msg,int sec)
{
	printf("\033[01;31m%s\n\033[00m",msg);
	sleep(sec);
}
