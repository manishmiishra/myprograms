//circular Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *nextlink;
};
struct node  *temp,*temp1,*temp2,*newnode,*start =NULL;
void Create();
struct node* Create1();
void Display();
void InsertAtBeginning();
void InsertAtEnd();
void InsertAtMiddle(int pos);
void DeleteAtBeginning();
void DeleteAtEnd();
void DeleteAtMiddle(int pos);
int main()
{   printf("----------------CIRCULAR LINKED LIST-------------------\n");
	printf("\n 1 for creation of linked list \n 2 to insert at beginning \n 3 to insert at the end \n 4 to insert at middle\n 5 to delete at beginning \n 6 to delete at end \n 7 to delete at middle  \n 8 to display \n");
	int b,choice,list=1;
	while(list==1)
	{
		printf("Enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : Create();
			         break;
			case 2 : InsertAtBeginning();
			         break;
			case 3 : InsertAtEnd();
			         break;
			case 4 : printf("Enter the position to insert :");
			         scanf("%d",&b);
					 InsertAtMiddle(b);
			         break;
			case 5 : DeleteAtBeginning();
			         break;
			case 6 : DeleteAtEnd();
			         break;
			case 7 : printf("\nEnter the position to delete :");
			         scanf("%d",&b);
			         DeleteAtMiddle(b);
			         break;
			case 8 : Display();
			         break;
			default :printf("Invalid entry");
			       
		} 
		printf("\nEnter 1 to continue : ");
		scanf("%d",&list); 
	}
	return 0;
}
void Create()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter a value :");
	scanf("%d",&newnode->info);
	newnode->nextlink=NULL;
	if(start==NULL)
    {
    	start=temp=newnode;
		}	
	else
	{
		temp->nextlink=newnode;
		temp=newnode;
	}
	temp->nextlink=start;
} 
struct node*  Create1()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter a value :");
	scanf("%d",&newnode->info);
	newnode->nextlink=NULL;
}
void Display()
{  
    if(start==NULL){
     printf("No nodes are created ");
    }
    else{
	temp=start;
	while(temp->nextlink!=start)
	{
		printf("%d ",temp->info);
	  	temp=temp->nextlink;
	}
	printf("%d",temp->info);
   }
}
void InsertAtBeginning()
{   
    newnode=Create1();
	temp=start;
	newnode->nextlink=temp;
	while(temp->nextlink!=start)
	{
		temp=temp->nextlink;
	}
    start=newnode;
    temp->nextlink=start;
}
void InsertAtEnd()
{   newnode=Create1();
	temp=start;
	while(temp->nextlink!=start){
		temp=temp->nextlink;
	}
	temp->nextlink=newnode;
	newnode->nextlink=start;
}
void InsertAtMiddle(int pos)
{   newnode=Create1();
	temp=start;
	for(int i=1;i<pos;i++){
		temp=temp->nextlink;
	}
	newnode->nextlink=temp->nextlink;
	temp->nextlink=newnode;
}
void DeleteAtBeginning()
{
	temp=temp1=start;
	printf("The deleted element is %d ",temp->info);
	while(temp1->nextlink!=start)
	{
		temp1=temp1->nextlink;
	}
	temp1->nextlink=temp->nextlink;
	start=temp1->nextlink;
	free(temp);
}
void DeleteAtEnd()
{
	temp=start;
	while(temp->nextlink!=start)
	{    
	    temp1=temp;
		temp=temp->nextlink;
	}
	temp1->nextlink=temp->nextlink;
	printf("The deleted element is %d ",temp->info);
	free(temp);
}
void DeleteAtMiddle(int pos)
{
	temp=start;
	for(int i =1 ;i< pos;i++)
	{    
	    temp1=temp;
		temp=temp->nextlink;
    }
	temp1->nextlink=temp->nextlink;
	printf("The deleted element is %d",temp->info);
	free(temp);
	
}
