#include<stdio.h>
#include<string.h>
#include<conio.h>

#define MAX 10  // Maximum size for the stack

char stack[MAX];   // Stack for operators
char output[MAX];  // Output stack for the postfix expression
int top = -1;      // Top pointer for stack
int outTop = -1;    // Top pointer for output stack
int i;
// Function to push an element to the stack
void push(char x) {
    if (top >= MAX - 1) {
	printf("Stack Overflow\n");
    } else {
	top++;
	stack[top] = x;
    }
}

// Function to pop an element from the stack
char pop() {
    if (top == -1) {
	printf("Stack Underflow\n");
	return '\0';  // Return null character if the stack is empty
    } else {
	char temp = stack[top];
	top--;
	return temp;
    }
}

// Function to check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to get the precedence of operators
int precedence(char ch) {
    if (ch == '+' || ch == '-') {
	return 1;  // Lower precedence
    } else if (ch == '*' || ch == '/') {
	return 2;  // Higher precedence
    }
    return 0;
}

void reverse(char *expr)
 {
    int length=strlen(expr);
    for (i= 0; i<length/2;i++)
    {
	char temp = expr[i];
	expr[i] = expr[length - i - 1];
	expr[length - i - 1] = temp;
    }
}

// Function to convert infix expression to postfix
void infixToPrefix(char *expr) {
    int i = 0;
    reverse(expr);
    while (expr[i] != '\0') {
	char currentChar = expr[i];

	if (isOperator(currentChar))
	{
	    // Pop operators from stack to output if their precedence is higher
	    while (top >= 0 && precedence(stack[top]) >= precedence(currentChar)) {
		output[++outTop] = pop();
	}
	    // Push the current operator to stack
	    push(currentChar);
	} else {
	    // If it's an operand, directly add it to output
	    output[++outTop] = currentChar;
	}
	i++;
    }

    // Pop any remaining operators from the stack to output
    while (top >= 0)
    {
	output[++outTop] = pop();
    }
    reverse(output);
}

// Function to print the postfix expression
void printPrefix() {
    printf("Prefix expression: ");
    for ( i = 0; i <= outTop; i++) {
	printf("%c", output[i]);
    }
    printf("\n");
}

int main() {
    char expression[MAX];
    clrscr();

    // Input the infix expression
    printf("Enter an infix expression: ");
    scanf("%s", expression);

    // Convert to postfix
    infixToPrefix(expression);

    // Print the postfix expression
    printPrefix(expression);
    getch();
    return 0;
}
