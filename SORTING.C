#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4],c;
	int j,i;
	clrscr();
	for(i=0;i<=3;i++)
	{
		printf("Enter value:");
		scanf("%d",&a[i]);
	}
	for(j=0;j<=3;j++)
	{

		for(i=0;i<=2;i++)
		{
			if(a[i]>a[i+1])
			{
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
			}
		}
	}
	for(i=0;i<=3;i++)
	{
		printf("value:%d\n",a[i]);
	}
	getch();
}