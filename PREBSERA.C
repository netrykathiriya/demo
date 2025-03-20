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
	else{
		if(root->data>data)
		{
			root->left=push(root->left,data);
			return root;
		}
		else
		{
			root->right=push(root->right,data);
			return root;
		}
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

void main()
{
	struct node *root=NULL;
	clrscr();
	root=push(root,29);
	root=push(root,25);
	root=push(root,88);
	root=push(root,18);
	root=push(root,129);
	root=push(root,99);
	root=push(root,100);
	root=push(root,55);
	root=push(root,3);
	root=push(root,14);
	root=push(root,22);

	preorder(root);
	getch();
}
