#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;
int c;
void popend()
{
	struct node *temp,*z;
	if(start==NULL)
	{
	printf("Empty\n");
	}
	else{
		if(start->next==NULL)
		{
			start=NULL;
			printf("Delete\n");
		}
		else
		{
			temp=start;
			while(temp->next!=NULL)
			{
				z=temp;
				temp=temp->next;
			}
			z->next=NULL;
			c--;
		}

	}
}
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
void popspl()
{
	int num;
	int i=0;
	struct node *temp,*z;
	printf("Enter number=");
	scanf("%d",&num);
	if(num==0)
	{
		popbeg();
	}
	else if(num==c)
	{
		popend();
	}
	else if(num<0 || num>c)
	{
		printf("Not possible");
	}
	else
	{
		temp=start;
		while(i!=num)
		{
			z=temp;
			temp=temp->next;
			i++;
		}
		z->next=temp->next;
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
	popspl();
	display();
	getch();
}