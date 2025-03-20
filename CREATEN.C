#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node *start=NULL;
//int c=0;
node create node (int data)
{
	node *new_node=(node*)malloc(sizeof (node));

	new_node->data=data;
	new_node->prev=NULL;
	new_node->next=NULL;
	return new_node;
}
void pushbeg(int data)
{
	node new_node=create node(data);
	if(start!=NULL)
	{
		new_node->next=start;
		start=new_node;
		start->prev=node;
	}
	start=new_node;
	printf("node inserted succefully...");
}

void display()
{
	node *temp;
	temp=start;
	while(temp->next!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
void main()
{
	clrscr();
	display(20)
	getch();
}

