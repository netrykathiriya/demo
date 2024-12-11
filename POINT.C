#include<stdio.h>
#include<conio.h>
int x=-1;
int y=-1;
void display(int a[])
{
	int i;
	for(i=y;i<=x;i++)
	{
		printf("%d\n",a[i]);
	}
}
void add(int a[])
{
	int value;
	if(x==-1)
	{
		x=0;
		y=0;
		printf("Enter the value to add:");
		scanf("%d",&value) ;
		a[x]=value;
		printf("Enter successfully.\n");
	}
	else if(x<4)
	{
		x=(x+1)%5;
		printf("Enter your value to add:");
		scanf("%d",&value);
		a[x]=value;
		printf("Enter successfully added.\n");
	}
	else
	{
		printf("Full\n");
	}
}
void main()
{
	int ch;
	int a[5];
	clrscr();
	while(1)
	{
		printf("1.add value.\n");
		printf("2.remove value.\n");
		printf("3.display value.\n");
		printf("0.exit.\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
			add(a);
		}
		else if(ch==2)
		{
			//remove1();
		}
		else if(ch==3)
		{
			display(a);
		}
		else if(ch==0)
		{
			break;
		}
		else
		{
			printf("Invalid choice.\n");
		}
	}
	getch();
}