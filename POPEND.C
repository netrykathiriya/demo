#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;
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
	pushbeg(10);
	pushbeg(20);
	pushbeg(30);
	display();
	getch();
}