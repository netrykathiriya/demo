#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next,*prev;
};
typedef struct node node;
node *start=NULL;
int c=0;
void popspl()
{
	int num;
	int i=0;
	node *temp;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num==c)
	{
		popend();
	}
	else if(num>c || num<0)
	{
		printf("Not possible\n");
	}
	else if(num==0)
	{
		popbeg();
	}
	else
	{
		temp=start;
	}
	while(i!=num)
	{
		temp=temp->next;
		i=i+1;
	}
	temp->next->prev=temp->next;
	temp->prev->next=temp->prev;
}
vod main()
{
	clrscr();

	getch();
}