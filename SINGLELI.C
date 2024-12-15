#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct *next;
};
struct node *start=null;
void push()
{
	struct node *new_node=(struct node*)malloc(size of (struct node*));
	struct node *temp;
	if(start==null)
	{
		new_node->data=data;
		new_node->next=null;
		start=nw_node;
	}
	else
	{
		temp=start;
		while(temp->next!=null)
		{
			temp=temp->next;
		}
		new_node->data=data;
		new_node->next=null;
		temp->next=new_node;
	}
}
void main()
{
	clrscr();
	push(10);
	getch();
}