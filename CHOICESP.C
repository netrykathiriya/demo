#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;
int c=0;
void display()
{
	struct node*temp;
	temp=start;
	if(temp==NULL)
	{
	printf("Empty\n");
	}
	else{

	while(temp->next!=NULL)
	{
		printf(" %d ->",temp->data);
		temp=temp->next;
	}
	printf(" %d",temp->data);
	}
}
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
	display();
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
	display();
}
void pushspl(int data)
{
	struct node *temp,*x;
	struct node *new_node=(struct node*) malloc(sizeof (struct node*));
	int num;
	int i=0;
	printf("Enter the pos= ");
	scanf("%d",&num);
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
		if(num<0)
		{
			printf("Not pass");

		}
		else if(num>c)
		{
		 printf("Not pass");
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
	display();
}
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
	display();
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
	display();
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
		c--;
	}
	display();
}
void choice()
{
	int ch,data;
	while(1)
	{
		printf("\n1.pushend\n");
		printf("2.pushbeg\n");
		printf("3.pushspl\n");
		printf("4.popend\n");
		printf("5.popbeg\n");
		printf("6.popspl\n");
		printf("7.display\n");
		printf("0.exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);

		if(ch==1)
		{
				printf("Enter your data:");
		scanf("%d",&data);
			pushend(data);
		}
		else if(ch==2)
		{
				printf("Enter your data:");
		scanf("%d",&data);
			pushbeg(data);
		}
		else if(ch==3)
		{       	printf("Enter your data:");
		scanf("%d",&data);
			pushspl(data);
		}
		else if(ch==4)
		{
			popend();
		}
		 else if(ch==5)
		{
			popbeg();
		}
		else if(ch==6)
		{
			popspl();
		}
		else if(ch==7)
		{
			display();
		}
		else if(ch==0)
		{
			break;
		}
		else
		{
			printf("Invalid choice.\n");
		}
	}
}
void main()
{
	clrscr();
	choice();
	getch();
}