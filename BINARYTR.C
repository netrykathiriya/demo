#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *left,*right;
};
struct node* push(struct node *root,int data)
{
	if(root==NULL)
	{
		struct node *new_node=(struct node*)malloc(sizeof (struct node));
		new_node->data=data;
		new_node->left=NULL;
		new_node->right=NULL;
		return new_node;
	}
}

void preorder(struct node *root)
{

	if(root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
	return;
}
void display()
{
	struct  node *root;
	if(root==NULL)
	{
		printf("Empty");
	}
	else
	{
		printf("%d",root->data);
		printf("%d",root->left->data);
		printf("%d",root->right->data);
		printf("%d",root->left->left->data);
		printf("%d",root->left->right->data);
		printf("%d",root->right->left->data);
		printf("%d",root->right->right->data);
	}

}
void main()
{
	struct node *root=NULL;
	clrscr();

	root=push(root,19);
	root->left=push(root->left,29);
	root->right=push(root->right,39);
	root->left->left=push(root->left->left,49);
	root->left->right=push(root->left->right,59);
	root->right->left=push(root->right->left,69);
	root->right->right=push(root->right->right,79);
	preorder(root);
	//display();

	getch();
}