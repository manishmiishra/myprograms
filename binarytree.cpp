  //BINARY TREE
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node* left;
	struct node *right;
};
struct node*  Create(){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	int val;
	printf("\n Enter a value to insert :");
	scanf("%d",&val);
	if(val==-1){
		return 0;
	}
	newnode->info=val;
	printf("\n Enter the left child of %d : ",newnode->info);
	newnode->left=Create();
	printf("\n Enter the right child of %d : ",newnode->info);
	newnode->right=Create();
	return(newnode);
	
	
}
struct node*  Create1(){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	int val;
	printf("\n Enter a value to insert :");
	scanf("%d",&newnode->info);
	newnode->left=NULL;
	newnode->right=NULL;
}
void Insert(struct node *root,struct node*newnode){
	if(root==NULL){
		root =newnode;
	}
	else if((root->left==NULL)&&(root->right==NULL)){
		root->left=newnode;
	}
	else if((root->left!=NULL)&&(root->right==NULL)){
		root->right=newnode;
	}
	else if((root->left!=NULL)&&(root->right!=NULL)){
		Insert(root->left,newnode);
		   
	}
}

void Display(struct node* root){
	struct node* newnode=root;
	if(newnode!=NULL){
		printf("%d ",newnode->info);
		Display(newnode->left);
		Display(newnode->right);
	}
}
void Delete(struct node *root){
	if(root==NULL)
		return ;
	Delete(root->left);
	Delete(root->right);
	printf("\nThe deleted element is %d",root->info);
	free(root);
	

	
}
int main(){
	struct node* newnode ;
	struct node* root = NULL;
	printf("\n Creating the tree : \n");
	root=Create();
	int choice,val;
	int flag=1;
	while(flag==1){
		printf("Enter 1 to insert ,2  to display and 3 to delete : ");
		scanf("%d",&choice);
		switch(choice){
			case 1 : newnode=Create1();
			         Insert(root,newnode);
			         break;
			
			case 2 : printf("\n Displaying the tree in preorder traversal : \n");
	                 Display(root);
	                 break;
	        case 3 : Delete(root);
	                 break;
	        default :printf("Invalid Entry");
		}
		printf("\nWant to continue ,Enter 1 : ");
		scanf("%d",&flag);
	}
	
	
	return 0;
}
