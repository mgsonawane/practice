#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
	int data;
	struct node *left;
	struct node *right;
}node;
#define TNODEALLOC (struct node*)malloc(sizeof(struct node));
node *create()
{
	node *p;
	int x;
	printf("Please enter data of node");
	scanf("%d",&x);
	if(x==-1)			//base condition is data if the tree data is empty
		return NULL;
	p=TNODEALLOC;
	p->data=x;

	printf("Enter left child of %d\n",x);
	p->left=create();

	printf("Enter right child of %d\n",x);
	p->right=create();
	
return p;

}

int display(node *t)
{
	if(t==NULL)
	{
		return -1;
	}
	else{
			printf("%d",t->data);
			display(t->left);
			display(t->right);
	}
}



/*int preoder(node *t)
{
	if(t!=NULL)
	{
		
			printf("%d\n",t->data);
			preorder(t->left);
			preorder(t->right);
	}
}
int inorder(node *t)
{
	if(t==NULL)
	{
		return;
	}
	else{
		inorder(t->left);
		printf("%d",t->data);
		inorder(t->right);
	}
}
int postorder(node *t)
{
	if(t==NULL)
	{
		return;
	}
	else{
		preorder(t->left);
		preorder(t->right);
		printf("%d",t->data);
	}
}*/
int main()
{
	node *root;
	root=create();
	printf("BInary tree is  ");
	display(root);
	//inorder(root); //inorder
	//preorder(root);//preorder
	//postorder(root);//postorder
return 0;
}
