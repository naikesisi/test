#ifndef ADMIN_MENU_H
#define ADMIN_MENU_H
#include<stdio.h>
#include<getch.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

/*typedef struct Teacher
{
	int lock;
	int id[13];
	char pass[20];
	char name[20];
	char sex[4];
	int age;
	int work;
}Teacher; 

Teacher tea[100];*/
	
typedef struct Admin
{
	int number;
	char id[20];
	char password[20];
	int count;
	int lock;
}Admin;

extern Admin adm[20];
void admin_password_start(int i);
void admin_show(int i);
void menu_choose(int i);

#endif//ADMIN_MENU_H
