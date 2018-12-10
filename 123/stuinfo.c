#include "student.h"
#include "stuinfo.h"

void add_stu(void)
{
   system("clear");
  // char ch = getch();
  // printf("\n请选择添加方式（1.单个/2.批量）\n");
   loop:
  // if(49 == ch)
  // {
   		if(m<1000)
		{
   			printf("添加第%d个学生：",m+1);
   			printf("\n学号：");
   			scanf("%s",stu[m].id);
   			printf("\n姓名：");
   			scanf("%s",stu[m].name);
   			printf("\n性别：");
   			scanf("%s",stu[m].sex);
   			printf("\n年龄：");
   			scanf("%d",&stu[m].age);
   			strcpy(stu[m].pass,"123456");
   			stu[m].life = 1;
   			m++;
   			printf("\n添加成功，返回按0，再次添加按9\n");
   			getch();
   	loop1:	switch(getch())
   			{
	   			case '0':return;
	   			case '9':goto loop;
	   			default:goto loop1;
   			}
   		}
   		else
   		{
	   		printf("学生人数已满！");
   		}
   // }
/*	if(50 == ch)
	{
		
	}*/
}

void del_stu(void)
{
   system("clear");
   int i=0;
   char a[13];
   loop:
   printf("需要删除的学生学号：");
   scanf("%s",a);
   for(i=0;i<1000;i++)
   {
	   if(0 == strcmp(stu[i].id,a))
	   {
          stu[i].life = 2;
          printf("\n该学生已被删除，为退学学生");
		  printf("\n按0返回上一界面！");
		  printf("\n如需继续删除请按9\n");
		  loop1:
		  switch(getch())
		  {
              case '0':return;
			  case '9':goto loop;
			  default:goto loop1;
		  }
	   }
   }
   printf("\n查无此人！");
   printf("\n按0返回上一界面；按9重新输入\n");
   loop2:
   switch(getch())
   {
	   case '0':return;
	   case '9':goto loop;
	   default:goto loop2;
   }
}

void change_stu(void)
{
   system("clear");
   int i=0,d=0;
   char a[20],b[13],c[4];
   loop:
   printf("输入需要修改的学生学号：");
   scanf("%s",b);
   for(i=0;i<1000;i++)
   {
	   if(0 == strcmp(stu[i].id,b))
	   {
		 if(2 == stu[i].life)
		 {
			 printf("\n此学生已退学\n");
		 }
         printf("\n修改姓名：");
         scanf("%s",a);
         strcpy(stu[i].name,a);
         printf("\n修改学号：");
         scanf("%s",b);
         strcpy(stu[i].id,b);
         printf("\n修改性别：");
         scanf("%s",c);
         strcpy(stu[i].sex,c);
         printf("\n修改年龄：");
         scanf("%d",&d);
         stu[i].age = d;
		 printf("\n修改成功！按0返回！");
		 loop1:
		 switch(getch())
		 {
			 case '0':return;
			 default:goto loop1;
		 }
	   }
   }
   printf("\n查无此人！");
   printf("\n按0返回上一界面；按9重新输入\n");
   loop2:
   switch(getch())
   {
	   case '0':return;
	   case '9':goto loop;
	   default:goto loop2;
   }
}

void reset_stu(void)
{
   system("clear");
   int i=0;
   char a[13];
   loop:
   printf("请输入需要重置密码的学生学号：");
   scanf("%s",a);
   for(i=0;i<1000;i++)
   {
	   if(0 == strcmp(stu[i].id,a))
	   {
          strcpy(stu[i].pass,"123456");
		  stu[i].first = 0;
		  printf("\n重置成功，按0返回！");
		  loop1:
		  switch(getch())
		  {
			  case '0':return;
			  default:goto loop1;
		  }
	   }
   }
   printf("\n查无此人！");
   printf("\n按0返回上一界面；按9重新输入\n");
   loop2:
   switch(getch())
   {
	   case '0':return;
	   case '9':goto loop;
	   default:goto loop2;
   }
}

void unclock_stu(void)
{
   system("clear");
   int i=0;
   char a[13];
   loop:
   printf("请输入需要解锁的学生学号：");
   scanf("%s",a);
   for(i=0;i<1000;i++)
   {
	   if(0 == strcmp(stu[i].id,a))
	   {
		   if(0 == stu[i].lock)
		   {
			   printf("此账号未被锁定！");
		   }
		   if(1 == stu[i].lock)
		   {
   		       stu[i].lock = 0;
		       printf("\n解锁已成功！按0返回！");
		   }
		   loop1:
		   switch(getch())
		   {
			   case '0':return;
			   default:goto loop1;
		   }
	   }
   }
   printf("\n查无此人！");
   printf("\n按0返回上一界面；按9重新输入\n");
   loop2:
   switch(getch())
   {
	   case '0':return;
	   case '9':goto loop;
	   default:goto loop2;
   }
}

void find_stu(void)
{
   system("clear");
   int i=0;
   char a[20];
   loop:
   printf("请输入需要查询的学生姓名：");
   scanf("%s",a);
   for(i=0;i<1000;i++)
   {
	   if(0 == strcmp(stu[i].name,a))
	   {
		   printf("\n姓名：%s",stu[i].name);
		   printf("\n学号：%s",stu[i].id);
		   printf("\n性别：%s",stu[i].sex);
		   printf("\n年龄：%d",stu[i].age);
		   if(2 == stu[i].life)
		   {
			   printf("\n该学生已退学\n");
		   }
		   printf("\n按0返回；按9再次查询\n");
		   loop1:
		   switch(getch())
		   {
			   case '0':return;
			   case '9':goto loop;
			   default:goto loop1;
		   }
	   }
   }
   printf("\n查无此人！");
   printf("\n按0返回上一届面；按9重新查询\n");
   loop2:
   switch(getch())
   {
	   case '0':return;
	   case '9':goto loop;
       default:goto loop2;
   }
}

void showin_stu(void)
{
	system("clear");
	int i=0;
	for(i=0;i<1000;i++)
	{
		if(1 == stu[i].life)
		{
			printf("%s\n",stu[i].name);
		}
	}
	printf("以上是所有在读学生\n");
	printf("按0返回");
	loop:
	switch(getch())
	{
		case '0':return;
		default:goto loop;
	}
}

void showout_stu(void)
{
    system("clear");
	int i=0;
	for(i=0;i<1000;i++)
	{
		if(2 == stu[i].life)
		{
			printf("%s\n",stu[i].name);
		}
	}
	printf("以上是所有退学学生\n");
	printf("按0返回");
	loop:
	switch(getch())
	{
		case '0':return;
		default:goto loop;
	}
}
