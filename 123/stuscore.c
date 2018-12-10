#include "stuscore.h"
#include "student.h"
void add_score(void)
{
   system("clear");
   char a[13];
   int i=0;
   loop:
   printf("输入学生学号：");
   scanf("%s",a);
   for(i=0;i<1000;i++)
   {
	   if(0 == strcmp(stu[i].id,a))
	   {
		  printf("\n输入语文成绩：");
		  scanf("%f",&stu[i].ch);
	      printf("\n输入数学成绩：");
		  scanf("%f",&stu[i].ma);
		  printf("\n输入英语成绩：");
		  scanf("%f",&stu[i].en);
		  stu[i].sum=stu[i].ch+stu[i].ma+stu[i].en;
		  stu[i].avg=stu[i].sum / 3;
		  printf("\n平均值：%f",stu[i].avg);
		  printf("\n总分：%f",stu[i].sum);
		  printf("\n录入成功，返回按0，再录入按9\n");
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

void change_score(void)
{
   system("clear");
   int i=0;
   char a[13];
   float b=0,c=0,d=0,sum=0,avg=0;
   loop:
   printf("输入需要修改成绩的学生学号：");
   scanf("%s",a);
   for(i=0;i<1000;i++)
   {
	   if(0 == strcmp(stu[i].id,a))
       {
		   printf("\n修改语文为:");
		   scanf("%f",&b);
		   stu[i].ch = b;
		   printf("\n修改数学为:");
		   scanf("%f",&c);
		   stu[i].ma = c;
		   printf("\n修改英语为:");
		   scanf("%f",&d);
		   stu[i].en = d;
           sum = b+c+d;
		   avg = sum / 3;
		   printf("\n修改平均分为:%f",avg);
		   stu[i].avg = avg;
		   printf("\n修改总分为:%f",sum);
		   stu[i].sum = sum;
		   printf("\n修改完成！");
		   printf("\n按0返回；按9修改下一位\n");
		   loop1:
		   switch(getch())
		   {
			   case '0':return;
			   case '9':goto loop;
			   default:goto loop1;
		   }
	   }
   }
   printf("\n查无此人");
   printf("\n按0返回上一届面；按9重新输入\n");
   loop2:
   switch(getch())
   {
      case '0':return;
	  case '9':goto loop;
	  default:goto loop2;
   }

}

void find_score(void)
{
   system("clear");
   int i=0,j=0;
   char a[13],b[20];
   loop:
   printf("按0使用学号查询；按1使用姓名查询\n");
   scanf("%d",&j);
   if(0 == j)
   {
	   printf("\n请输入学号：");
	   scanf("%s",a);
	   for(i=0;i<1000;i++)
	   {
		   if(0 == strcmp(stu[i].id,a))
		   {
			   printf("\n姓名：%s",stu[i].name);
			   printf("\n语文成绩：%f",stu[i].ch);
			   printf("\n数学成绩：%f",stu[i].ma);
			   printf("\n英语成绩：%f",stu[i].en);
			   printf("\n平均分：%f",stu[i].avg);
			   printf("\n总分：%f",stu[i].sum);
			   printf("\n按0返回；按9重新查询\n");
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
	   printf("\n按0返回；按9重新查询\n");
	   loop2:
	   switch(getch())
	   {
			 case '0':return;
			 case '9':goto loop;
			 default:goto loop2;
	   }

   }
   else if(1 == j)
   {
	   printf("\n请输入姓名：");
	   scanf("%s",b);
	   for(i=0;i<1000;i++)
	   {
		   if(0 == strcmp(stu[i].name,b))
		   {
			   printf("\n学号：%s",stu[i].id);
			   printf("\n语文成绩：%f",stu[i].ch);
			   printf("\n数学成绩：%f",stu[i].ma);
			   printf("\n英语成绩：%f",stu[i].en);
			   printf("\n平均分：%f",stu[i].avg);
			   printf("\n总分：%f",stu[i].sum);
			   printf("\n按0返回；按9重新查询\n");
			   loop3:
			   switch(getch())
		       {
				   case '0':return;
				   case '9':goto loop;
				   default:goto loop3;
			   }
		   }
	   }
	   printf("\n查无此人！");
	   printf("\n按0返回；按9重新查询\n");
	   loop4:
	   switch(getch())
	   {
			 
			 case '0':return;
			 case '9':goto loop;
			 default:goto loop4;
	   }

   }
   else
   {
	   printf("\n看看上面的话，按啥玩意儿");
	   printf("\n不想查了按0；想继续查按9\n");
	   loop5:
       switch(getch())
	   {
		   case '0':return;
		   case '9':goto loop;
		   default:goto loop5;
	   }
   }
}

void get_rank(void)
{
   system("clear");
   int i=0,n=0,j=0,temp,count_ch=1,reng_ch=0;
   int count_ma=1,reng_ma=0;
   int count_en=1,reng_en=0;
   int count_sum=1,reng_sum=0;
   n = m;
   float a[n];
   for(i=0;i<n;i++)
   {
      a[i] = stu[i].ch;
   }
   for(i=0;i<n-1;i++)
   {
	   for(j=0;j<n-1-i;j++)
	   {
		   if(a[j]<a[j+1])
		   {
			   temp = a[j];
			   a[j] = a[j+1];
			   a[j+1] = temp;
		   }
	   }
   }
   for(i=0;i<n;i+=reng_ch)
   {
	   reng_ch=0;
	   for(j=0;j<n;j++)
	   {
	      if(stu[j].ch == a[i])
		  {
           stu[j].ch_rank = count_ch;
		   reng_ch++;
		  }
	   }
	   count_ch += reng_ch;
   }



   for(i=0;i<n;i++)
   {
      a[i] = stu[i].ma;
   }
   for(i=0;i<n-1;i++)
   {
	   for(j=0;j<n-1-i;j++)
	   {
		   if(a[j]<a[j+1])
		   {
			   temp = a[j];
			   a[j] = a[j+1];
			   a[j+1] = temp;
		   }
	   }
   }
   for(i=0;i<n;i+=reng_ma)
   {
	   reng_ma=0;
	   for(j=0;j<n;j++)
	   {
	      if(stu[j].ma == a[i])
		  {
            stu[j].ma_rank = count_ma;
		    reng_ma++;
		  }
	   }
	   count_ma += reng_ma;
   }



   for(i=0;i<n;i++)
   {
      a[i] = stu[i].en;
   }
   for(i=0;i<n-1;i++)
   {
	   for(j=0;j<n-1-i;j++)
	   {
		   if(a[j]<a[j+1])
		   {
			   temp = a[j];
			   a[j] = a[j+1];
			   a[j+1] = temp;
		   }
	   }
   }
   for(i=0;i<n;i+=reng_en)
   {
	   reng_en=0;
	   for(j=0;j<n;j++)
	   {
	      if(stu[j].en == a[i])
		  {
            stu[j].en_rank = count_en;
		    reng_en++;
		  }
	   }
	   count_en += reng_en;
   }



   for(i=0;i<n;i++)
   {
      a[i] = stu[i].sum;
   }
   for(i=0;i<n-1;i++)
   {
	   for(j=0;j<n-1-i;j++)
	   {
		   if(a[j]<a[j+1])
		   {
			   temp = a[j];
			   a[j] = a[j+1];
			   a[j+1] = temp;
		   }
	   }
   }
   for(i=0;i<n;i+=reng_sum)
   {
	   reng_sum=0;
	   for(j=0;j<n;j++)
	   {
	      if(stu[j].sum == a[i])
		  {
            stu[j].rank = count_sum;
		    reng_sum++;
		  }
	   }
	   count_sum += reng_sum;
   }
   printf("排名成功！按0返回上一界面！\n");
   loop:
   switch(getch())
   {
	   case '0':return;
	   default:goto loop;
   }
  
}

