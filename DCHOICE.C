#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next,*prev;
};
typedef struct node node;
node *start=NULL;
int c=0;

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

void pushend(int data)
{
	node *new_node=(node*)malloc(sizeof (node));
	node *temp;

	new_node->data=data;
	new_node->next=NULL;
	new_node->prev=NULL;
	if(start==NULL)
	{

		start=new_node;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		new_node->prev=temp;
		temp->next=new_node;
		c++;
	}
	printf("node inserted succefully...\n");
	display();
}

void pushbeg(int data)
{
	node *new_node=(node*)malloc(sizeof (node));

	new_node->data=data;
	new_node->prev=NULL;
	new_node->next=NULL;

	if(start!=NULL)
	{
		new_node->next=start;
		start->prev=new_node;
	}
	start=new_node;
	c++;
	printf("node inserted succefully...\n");
	display();
}

void pushspl(int data)
{
	int pos;
	node *temp;
	node *new_node=(node*) malloc(sizeof (node));
	int i=0;
	printf("Enter the pos= ");
	scanf("%d",&pos);
	if(pos>c+1)
	{
		printf("Not possiable");
	}
	else if(pos==c+1)
	{
		pushend(data);

	}
	else if(pos==0)
	{
	      pushbeg(data);
	}
	else
	{

		while(i!=pos)
		{
			temp=temp->next;
			i++;
		}
			new_node->next=temp;
			new_node->prev=temp->prev;
			temp->prev=new_node;
			new_node->prev->next=new_node;
			c++;
	}
	display();
}

void popbeg()
{
 //	node *new_node=(node*)malloc(sizeof (node));
	if(start==NULL)
	{
		printf("empty");
	}
	else if(start->next==NULL)
	{
		start=NULL;
	}
	else
	{
		start=start->next;
		start->prev=NULL;
	}
}

void popend()
{
	node *temp;
	if(start==NULL)
	{
		printf("Empty\n");
	}
	else if(start->next==NULL)
	{
		start=NULL;
		printf("Delete\n");
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
   //			temp->next=NULL;
		}
		temp=temp->prev;
		temp->next = NULL;
	}
}

void popspl()
{
	int num;
	int i=0;
	node *temp;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num==c)
	{
		popend();
	}
	else if(num>c || num<0)
	{
		printf("Not possible\n");
	}
	else if(num==0)
	{
		popbeg();
	}
	else
	{
		temp=start;
	}
	while(i!=num)
	{
		temp=temp->next;
		i=i+1;
	}
	temp->next->prev=temp->next;
	temp->prev->next=temp->prev;
}

void main()
{
	int ch,data;
	clrscr();
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