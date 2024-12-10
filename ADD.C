#include<stdio.h>
#include<conio.h>
void sum(int a,int b,int e,int f)
{
	int c,d;
	c=a+b;
	d=c-a;
	printf("values of c=%d\n",c);
	printf("values of d=%d",d);
}
void main()
{

	clrscr();
	sum(5,6,2,3);
	getch();
}