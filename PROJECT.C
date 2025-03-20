#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,num,reversed=0,sum=0;
	clrscr();
	do
	{
		printf("\nMenu\n");
		printf("1. Reverse a 4-digit positive inetger.\n");
		printf("2. Display the sum of digit of a positive integer.\n");
		printf("3. Exit\n");
		printf("Enter your choice(1/2/3): ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				printf("Enter a 4-digit posivite integer:");
				scanf("%d",&num);
				if(num>=1000 && num<=9999)
				{
				   while(num!=0)
				   {
					reversed=reversed*10+num%10;
					num/=10;
				   }
				   printf("reversed number:%d\n",reversed);
				}
				else
				{
					printf("Please enter a valid 4-digit positive integer.\n");
				}
				break;
			}
			case 2:
			{
				printf("Enter a posivite integer:");
				scanf("%d",&num);
				if(num>0)
				{
					while(num!=0)
					{
						sum+=num%10;
						num/=10;
					}
				   printf("sum of digits:%d\n",sum);
				}
				else
				{
					printf("Please enter a valid positive integer.\n");
				}
				break;
			}
			case 3:
				printf("Exiting...the program.Goodbye!\n");
				break;
			default:
				printf("Invalid chioce!please try again.\n");
		}
	}while(choice!=3);
	getch();
}