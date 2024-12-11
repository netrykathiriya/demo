#include<stdio.h>
#include<conio.h>
struct emp
{
	char name[5];
	int age,sal;
};
void main()
{
	struct emp e1[2];
	clrscr();
	e1[0].age=18;
	e1[0].sal=2900;
	printf("e1[0].name:");
	scanf("%s",e1[0].name);
	puts(e1[0].name);
	printf("age=%d\n",e1[0].age);
	printf("sal=%d",e1[0].sal);
	getch();
}