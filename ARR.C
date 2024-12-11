#include<stdio.h>
#include<conio.h>
int x=-1;
int y=-1;
void display(int a[])
{
	int i;
	if(x==-1 && y==-1)
	{
	printf("empty\n");
	}
	else if(x<y)
	{
		for(i=y;i<=4;i++)
		{
			printf("%d\n",a[i]);
		}
		for(i=0;i<=x;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	else
	{
		for(i=y;i<=x;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}
void remove1(int a[])
{
	if(y<0)
	{
		printf("Empty.\n");
	}
	else if(x==y)
	{
		x=-1;
		y=-1;
		printf("value deleted.\n");
	}
	else
	{
		y=(y+1)%5;
		printf("value deleted.\n");
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
	else if((x+1)%5!=y)
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
			remove1(a);
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