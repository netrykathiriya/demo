#include<stdio.h>
#include<conio.h>
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("Enter a value a: %d\n",a);
	printf("Enter a value b: %d",b);
}
void main()
{
	clrscr();
	swap(5,7);
	getch();
}