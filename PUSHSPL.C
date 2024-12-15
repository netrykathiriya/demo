#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;
int c;
void pushend(int data)
{
	struct node *new_node=(struct node*)malloc(sizeof (struct node*));
	struct node *temp;
	if(start==NULL)
	{
		new_node->data=data;
		new_node->next=NULL;
		start=new_node;
		c++;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		new_node->data=data;
		new_node->next=NULL;
		temp->next=new_node;
		c++;
	}
}
void pushbeg(int data)
{
	struct node *new_node=(struct node*) malloc(sizeof (struct node*));
	struct node *temp;
	if(start==NULL)
	{
		new_node->data=data;
		new_node->next=NULL;
		start=new_node;
		c++;
	}
	else
	{
		new_node->data=data;
		new_node->next=start;
		start=new_node;
	}
}
void pushspl(int data)
{
	struct node *temp,*x;
	struct node *new_node=(struct node*) malloc(sizeof (struct node*));
	int num;
	int i=0;
	printf("Enter the value= ");
	scanf("%d",&num);
	if(num>c)
	{
		printf("Not pass");
	}
	else if(num<0)
	{
		printf("Not pass");
	}
	else
	{
		if(num==0)
		{
			pushbeg(data);
		}
		else if(num==c+1)
		{
			pushend(data);
		}
		else
		{
			temp=start;
			while(i!=num)
			{
				i++;
				x=temp;
				temp=temp->next;
			}
			new_node->data=data;
			new_node->next=temp;
			x->next=new_node;
			c++;
		}
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
	printf(" %d",temp->data);
}
void main()
{
	clrscr();
	pushspl();
	display();
	getch();
}