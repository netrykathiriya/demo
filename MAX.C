#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter a value a:");
	scanf("%d",&a);
	printf("Enter a value b:");
	scanf("%d",&b);
	printf("Enter a value c:");
	scanf("%d",&c);
	printf("Enter a value d:");
	scanf("%d",&d);
	if(a>b && a>c && a>d)
	{
		printf("a is max");
	}
	else if(b>a && b>c && b>d)
	{
		printf("b is max");
	}
	else if(c>a && c>b && c>d)
	{
		printf("c is max");
	}
	else
	{
		printf("d is max");
	}
	getch();
}