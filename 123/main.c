#include"menu_display.h"
#include<getch.h>
#include"password.h"
#include"check_pass.h"
#include"teacher.h"
#include"student.h"
#include"admin_menu.h"
#include"super_admin.h"
int main()
{
	int x=-1;
	int id=0;
	while(x!='q')
	{
		menu_display();
		x=getch();
		if(x=='m')
		{
			if(check_pass(0,4)==1)
				super_menu_choose();
		}
		else
			id=password(x);
		if(id!=-1)
		{
			if(x=='1')
			{
				while(1)
				{
					instudent(id);
				}
			}
			if(x=='2')
			{
				inteacher(id);
			}
			if(x=='3')
			{
				admin_password_start(id);
			}
		}
	}
}	

