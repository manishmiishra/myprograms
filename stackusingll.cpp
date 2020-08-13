//Stack using Single Linked List
#include<stdio.h>
#include<stdlib.h>
#define S 10
int ele;
struct node
{
	int top;
	int capacity;
	int *array;
};
struct node  *s;
int Underflow(struct node *s){
	//if the condition is true then 1 is returned else 0 is returned
	return(s->top==-1);
}
int Overflow(struct node *s){
	// if the condition is true then 1 is returned else 0 is returned
	return(s->top==s->capacity-1);
}
struct node* Create()
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if(!newnode)
        return NULL;
    newnode->capacity=S;
    newnode->top=-1;
    newnode->array=(int *)malloc(newnode->capacity *sizeof(int));
    if(!newnode->array)
         return NULL;
    return newnode;

} 

void Display(struct node *s){
	if(s->top==-1){
		printf("No elements to display");
	}
	else
	{
		for(int i=0;i<=s->top;i++)
		{
			printf("%d \n",s->array[i]);
		}
	}
}
void Push(struct node *s ,int data){
	if(Overflow(s))
	  printf("\n Overflow \n");
	else{
		s->array[++s->top]=data;
    	}
}
int Pop(struct node *s){
	if(Underflow(s))
	  printf("\n Underflow \n");
	else{
		return(s->array[s->top--]);
	}
}

int main()
{   printf("----------------STACK using LINKED LIST-------------------\n");
	printf("\n 1 for creation\n 2 to insert\n 3 to delete\n 4 to display \n");
	int b,choice,list=1;
	while(list==1)
	{
		printf("Enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : s=Create();
			         break;
			case 2 : printf("Enter the element to be inserted ");
			         scanf("%d",&ele);
			         Push(s,ele);
			         break;
			case 3 : ele=Pop(s);
			         printf("The deleted element is %d",ele);
			         break;
			case 4 : Display(s);
			         break;
			default :printf("Invalid entry");
			       
		} 
		printf("\nEnter 1 to continue : ");
		scanf("%d",&list); 
	}
	return 0;
}


