#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={10,12,32,4};
	int x,i,temp;
	clrscr();
	temp=0;
	printf("Enter your value:");
	scanf("%d",&x);
	for(i=0;i<=5;i++)
	{
		if(x==a[i])
		{
			printf("Found\n");
			temp=1;
		}
	}
	if(temp==0)
	{
		printf("Not found\n");
	}
	getch();
}
