#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;
void pushbeg(int data)
{
	struct node *new_node=(struct node*) malloc(sizeof (struct node*));
	struct node *temp;
	if(start==NULL)
	{
		new_node->data=data;
		new_node->next=NULL;
		start=new_node;
	}
	else
	{
		new_node->data=data;
		new_node->next=start;
		start=new_node;
	}
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
	printf("<-%d",temp->data);
}
void main()
{
	clrscr();
	pushbeg(10);
	pushbeg(20);
	pushbeg(30);
	display();
	getch();
}