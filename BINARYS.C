#include<stdio.h>
#include<conio.h>
void main()
{
	float low,high,mid;
	int value;
	int a[9]={1,2,3,4,5,6,7,8,9};
	clrscr();
	printf("Enter value:");
	scanf("%d",&value);
	low=0;
	high=9;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(a[mid]==value)
		{
			printf("value found.\n");
			break;
		}
		else if(a[mid]>value)
		{
			high=mid-1;
			mid=(low+high)/2;
		}
		else
		{
			low=mid+1;
			mid=(low+high)/2;
		}
	}
	if(low>high)
	{
		printf("Value not found.\n");
	}
	getch();
}