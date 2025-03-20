#include<stdio.h>
#include<conio.h>
char stack[10];
char alpha_stack[10];
int  z=-1,y =-1;
int precedence(char ch) {
    if (ch == '+' || ch == '-') {
	return 1;  // Lower precedence
    } else if (ch == '*' || ch == '/') {
	return 2;  // Higher precedence
    }
    return 0;
}

void push(char x)
{
	if(z>10)
	{
		printf("Full\n");
	}
	else
	{
		z++;
		stack[z]=x;
	}
}

char pop()
{
	char temp;
	if(z<0)
	{
		printf("Empty\n");
		return '0';
	}
	else
	{
		temp=stack[z];
		z--;
		return temp;
	}
}

void push_alpha(char x)
{
	if(y>10)
	{
		printf("full\n");
	}
	else
	{
		y++;
		alpha_stack[y]=x;
	}
}
void main()
{
	char a[10];
	char j;
	int i=0;
	clrscr();
	printf("Enter equation:");
	scanf("%s",&a);
	while(a[i]!='\0')
	{
		if(a[i]=='+' || a[i]=='-')
		{
			if(z==-1)
			{
				push(a[i]);
			}
			else
			{
				if(stack[z]=='+' || stack[z]=='-')
				{
					while(z>=0 && precedence(stack[z] < precedence(a[i])))
					{
					 j=pop();
					 printf("%c",j);
					push_alpha(j);
					}
				  //	printf("%c",a[i]);
					push(a[i]);
				} else{
					printf("k");
					while(z>=0 && precedence(stack[z] < precedence(a[i])))
					{
					 j=pop();

					 printf("%c",j);
					push_alpha(j);
					}
				//	printf("%c",a[i]);
					push(a[i]);
				}
			}
		}
		else if(a[i]=='*' || a[i]=='/')
		{
			if(z==-1){
				push(a[i]);
			}
			else
			{

				push(a[i]);
			}
		}
		else
		{
			push_alpha(a[i]);
		}
		i++;
	}
	i=0;
	while(i<4)
	{
	      //	printf("%c",alpha_stack[i]);
		i++;
	}

	i=3;
	while(i>=0)
	{
      //	printf("%c",stack[i]);
	i--;
	}

	getch();
}