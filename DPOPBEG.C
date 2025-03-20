#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next,*prev;
};
struct node *start=NULL;
void popbeg()
{
	if(start==NULL)
	{
		printf("empty");
	}
	else if(start->next==NULL)
	{
		start=NULL;
	}
	else
	{
		start=start->next;
		start->prev=NULL;
	}
}
void display()
{
	struct node *temp;
	temp=start;
	while(temp->next!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
void main()
{
	clrscr();
	popbeg();
	getch();
}