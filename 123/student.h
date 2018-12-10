#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <getch.h>
#include <string.h>
#include <stdlib.h>

typedef struct Student
{
    char id[13];
	char name[20];
	char sex[4];
	char pass[10];
	int  first;
	int  age;
	int  life;
	int  lock;
	float ch;
	float ma;
	float en;
	float avg;
	float sum;
	int  ch_rank;
	int  ma_rank;
	int  en_rank;
	int  rank;
}student;

extern student stu[1000];
extern int m;

void instudent(int i);

#endif//STUDENT_H
