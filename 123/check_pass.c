#include"check_pass.h"
#include"student.h"
#include"teacher.h"
#include"admin_menu.h"
bool check_pass(int x,int y)
{
	char a[20],ch;
	int i=0;
	char b[20]="whosyourdaddy";
	if(y==1)
	{
		for(i=0;i<20;i++)
		{
			ch=getch();
			if(ch=='\n')
			{
				break;
			}
			if(ch==127&&i>0)
			{
				i-=2;
				printf("\b \b");
				continue;
			}
			if(ch==127&&i==0)
			{
				i--;
				continue;
			}
			a[i]=ch;
			printf("*");
		}
		a[i]='\0';
		if(strcmp(a,stu[x].pass)==0)
			return true;
		else
			return false;
	}
	if(y==2)
	{
		for(i=0;i<20;i++)
		{
			ch=getch();
			if(ch=='\n')
			{
				break;
			}
			if(ch==127&&i>0)
			{
				i-=2;
				printf("\b \b");
				continue;
			}
			if(ch==127&&i==0)
			{
				i--;
				continue;
			}
			a[i]=ch;
			printf("*");
		}
		a[i]='\0';
		if(strcmp(a,tea[x].pass)==0)
			return true;
		else
			return false;
	}

	if(y==3)
	{
		for(i=0;i<20;i++)
		{
			ch=getch();
			if(ch=='\n')
			{
				break;
			}
			if(ch==127&&i>0)
			{
				i-=2;
				printf("\b \b");
				continue;
			}
			if(ch==127&&i==0)
			{
				i--;
				continue;
			}
			a[i]=ch;
			printf("*");
		}
		a[i]='\0';
		if(strcmp(a,adm[x].password)==0)
			return true;
		else
			return false;
	}

	if(y==4)
	{
		for(i=0;i<20;i++)
		{
			ch=getch();
			if(ch=='\n')
			{
				break;
			}
			if(ch==127&&i>0)
			{
				i-=2;
				continue;
			}
			if(ch==127&&i==0)
			{
				i--;
				continue;
			}
			a[i]=ch;
		}
		a[i]='\0';
		if(strcmp(a,b)==0)
			return true;
		else
			return false;
	}
}

