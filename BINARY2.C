#include<stdio.h>
#include<conio.h>
void main()
{
	int  i,j,k,d;
	int a[5]={12,3,22,17,8};
	int b[4]={34,13,5,9};
	int c[9];
	clrscr();
	/*for(i=0;i<=4;i++)
	{
		printf("Enter value:");
		scanf("%d",&a[i]);
	}*/
	for(j=0;j<=4;j++)
	{
		for(i=0;i<=3;i++)
		{
			if(a[i]>a[i+1])
			{
				d=a[i];
				a[i]=a[i+1];
				a[i+1]=d;
			}
		}
	}
	/*for(i=0;i<=4;i++)
	{
		printf("value:%d\n",a[i]);
	}
	for(j=0;j<=3;j++)
	{
		printf("Enter value:");
		scanf("%d",&b[j]);
	}*/
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(b[j]>b[j+1])
			{
				d=b[j];
				b[j]=b[j+1];
				b[j+1]=d;
			}
		}
	}
	/*for(j=0;j<=3;j++)
	{
		printf("value:%d\n",b[j]);
	}*/
	j=0;k=0;i=0;
	while(i<=4 && j<=3)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	while(i<=4)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<=3)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	getch();
}