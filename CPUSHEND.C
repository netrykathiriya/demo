#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next,*prev;
};
typedef struct node node;
node *start=NULL;
node * createnode (int data)
{
	node *new_node=(node*)malloc(sizeof (node));

	new_node->data=data;
	new_node->prev=NULL;
	new_node->next=NULL;
	return new_node;
}
void pushend(int data)
{
	node *new_node=createnode(data);
	node *temp;
	if(start==NULL)
	{
		start=new_node;
		start->next=start;
		start->prev=start;
	}
	else if(start->next==start)
	{
		new_node->next=start;
		new_node->prev=start;
		start->prev=new_node;
		start->next=new_node;
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
			temp=temp->next;
		}
		new_node->next=temp->next;
		new_node->prev=temp;
		temp->prev=new_node;
		start->prev=new_node;
	}
}

void display()
{
	node *temp;
	temp=start;
	while(temp->next!=start)
	{
		printf("%d",temp->data);
		temp=temp->data;
	}
	printf("%d",temp->data);
}
void main()
{
	clrscr();
	pushend(20);
	pushend(30);
	display();
	getch();
}