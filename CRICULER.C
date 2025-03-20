#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next,*prev;
};
typedef struct node node;
node *start=NULL;
int c=0;

node * createnode (int data)
{
	node *new_node=(node*)malloc(sizeof (node));

	new_node->data=data;
	new_node->prev=NULL;
	new_node->next=NULL;
	return new_node;
}

void pushbeg(int data)
{
	node *new_node=createnode(data);
	if(start==NULL)
	{
		start=new_node;
		start->next=start;
		start->prev=start;
	}
	else
	{
		new_node->next=start;
		new_node->prev=start->prev;
		start->prev=new_node;
		start=new_node;
		start->prev->next=start;
	}
	c++;
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
		temp->next=new_node;
		start->prev=new_node;
		c++;
	}
}

void pushspl()
{
	int data,pos,i=0;
	node *temp;
	node *new_node=createnode(data);
	//printf("Enter your data: ");
	//scanf("%d",&data);

	printf("Enter your pos: ");
	scanf("%d",&pos);
	if(pos==0)
	{
		pushbeg(data);
	}
	else if(pos==c+1)
	{
		pushend(data);
	}
	else
	{
		temp=start;
		while(i!=pos)
		{
			temp=temp->next;
			i=i+1;
		}
		//node *new_node=createnode(data);
		new_node->next=temp;
		new_node->prev=temp->prev;
		temp->prev->next=new_node;
		temp->prev=new_node;
		c++;

	}
}

void popbeg()
{
	if(start==NULL)
	{
		printf("Empty\n");
	}
	else if(start->next==start)
	{
		start=NULL;
	}
	else
	{
		start->next->prev=start->prev;
		start=start->next;
		start->prev->next=start;
	}
}

void popend()
{
	 node *temp;
	if(start==NULL)
	{
		printf("Empty\n");
	}
	else if(start->next==start)
	{
		start=NULL;
		printf("Delete\n");
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
			temp->next=temp;
		}
		start->prev->next=start;
		start->prev=temp->prev;
	}
}

void popspl()
{
	int num;
	int i=0;
	node *temp;
	printf("Enter your number=");
	scanf("%d",&num);
	if(num==c)
	{
		popend();
	}
	else if(num==0)
	{
		popbeg();
	}
	else
	{
		temp=start;
		while(i!=num)
		{
			temp=temp->next;
			i=i+1;
		}
		temp->next->prev=temp->prev;
		temp->prev->next=temp->
		next;
	}
}

void display()
{
	node *temp;
	temp=start;
	while(temp->next!=start)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}

void main()
{
	int ch,data;
	clrscr();
	while(1)
	{
		printf("\n1.pushbeg\n");
		printf("2.pushend\n");
		printf("3.pushspl\n");
		printf("4.popbeg\n");
		printf("5.popend\n");
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
		{
			printf("Enter your data:");
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
		getch();
		clrscr();
	}
	getch();
}