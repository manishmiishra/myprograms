//circular queue
#include<stdio.h>
#define SIZE 10
int front = -1 , rear = -1 ,element ,choice,i, queue[10];
void EnQueue(int a);
void DeQueue();
void Display();
int main()
{
		
		printf(" If you want to insert an element ,Press 1 \n If you want to delete an element ,Press 2 \n If you want to display queue,Press 3:");
		q:
		printf("\n Enter your choice :\n ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				     printf("Enter the element : ");
				     scanf("%d",&element);
				     EnQueue(element);
				     break;
			case 2 :
				     DeQueue();
				     break;
			case 3 :
				    Display();
				    break;
			default :printf("Invalid entry \n");
		}
		printf("Want to Continue ,Press 0 : ");
		scanf("%d",&choice);
		if(choice == 0)
		{
			goto q;
		}
}
void EnQueue(int a)
{
	if((front == 0 && rear==SIZE-1)||(front==rear+1))
	   printf("\n Overflow \n");
	else
	{
	  if(rear==-1)
		{
			rear=front=0;
		}
	  else if(rear==SIZE-1 && front !=0)
		{  rear = 0;}
	  else
	 {
		rear=rear+1;
	 }
		queue[rear]=element;
	 } 
}
void DeQueue()
{
	if(front == -1)
	   printf("\n Underflow \n");
	else
	   {
	   	printf("The deleted element is %d",queue[front]);
	   	if(front==rear){
	   		front=rear=-1;
		   }
		else if(front==SIZE-1){
			front=0;
		}
		else
		   {
		   front = front+1;
	       }
	   }
}
void Display()
{   if(front==-1)
      printf("\n No elements are present to display");
    else
    {
     if(rear>=front)
     {
	 for( i = front ; i<=rear ;i++)
	     printf(" \t %d", queue[i]);}
	 else{
	 	for(i=0;i<=rear;i++)
	 	   printf("%d",queue[i]);
	 	for(i=front;i<SIZE;i++)
	 	   printf("%d",queue[i]);
	 }
    }    
}
