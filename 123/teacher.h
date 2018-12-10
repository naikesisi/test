#ifndef TEACHER_H
#define TEACHER_H
#include <stdio.h>
#include <getch.h>
#include <string.h>
#include <stdlib.h>

typedef struct teacher
{
	int number;
    char id[13];
	char pass[10];
	char name[20];
	char sex[4];
	int  lock;
	int  first;
	int  age;
	int  work;
}teacher;
extern teacher tea[100];
void inteacher(int i);
#endif//TEACHER_H
