#include<stdio.h>
#include<conio.h>
int a[5];
int x=-1;
void display()
{
	int i;
	if(x>=0)
	{
		for(i=0;i<=x;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	else
	{
		printf("Empty\n");
	}
}
void remove1()
{
	if(x>=0)
	{
		x--;
		printf("removed successfully.\n");
	}
	else
	{
		printf("empty.\n");
	}
}
void add()
{
	int value;
	if(x<4)
	{       x++;
		printf("Enter the value to add:");
		scanf("%d",&value);
		a[x]=value;
		printf("Enter successfully.\n");
	}
	else
	{
		printf("full\n");
	}
}
void main()
{
	int ch;
	int a[5];
	clrscr();
	while(1){
	printf("1.Add value\n");
	printf("2.Remove value\n");
	printf("3.Display value\n");
	printf("0.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	if(ch==1)
	{     //  x++;
		add();

	}
	else if(ch==2)
	{
		remove1();

	}
	else if(ch==3)
	{
		display();
	}
	else if(ch==0)
	{
		break;
	}
	else
	{
		printf("Invalid choice\n");
		}
	}
	getch();
}
