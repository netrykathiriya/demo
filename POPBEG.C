#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;
int c;
void popbeg()
{
	if(start==NULL)
	{
		printf("empty");
	}
	else
	{
		start=start->next;
	}
	c--;
}
void display()
{
	struct node*temp;
	temp=start;
	while(temp->next!=NULL)
	{
		printf(" %d",temp->data);
		temp=temp->next;
	}
	printf(" %d",temp->data);
}
void main()
{
	clrscr();
	popbeg(10);
	display();
	getch();
}