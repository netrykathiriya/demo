#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	/*printf("Enter a value a: %d\n",a);
	printf("Enter a value b: %d",b);*/
}
void main()
{
	int a,b;
	clrscr();
	printf("Enter a value of a:");
	scanf("%d",&a);
	printf("Enter a value of b:");
	scanf("%d",&b);
	swap(&a,&b);
	printf("Enter a value a: %d\n",a);
	printf("Enter a value b: %d",b);
	getch();
}