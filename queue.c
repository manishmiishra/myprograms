//simple queue
#include<stdio.h>
#define SIZE 10
int front = -1 , rear = -1 ,element ,choice,i, queue[10];
void EnQueue(int a);
void DeQueue();
void Display();
void main()
{
		q :
		printf(" If you want to insert an element ,Press 1 \n If you want to delete an element ,Press 2 \n If you want to display queue,Press 3:");
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
	if(rear==SIZE-1)
	   printf("\n Overflow \n");
	else
	{
		if(rear==-1)
		{
			rear=front=0;
		}
		else
		  rear = rear+1;
		queue[rear]=element;
	 } 
}
void DeQueue()
{
	if((front == -1)||(front >rear))
	   printf("\n Underflow \n");
	else
	   {
	   	printf("The deleted element is %d",queue[front]);
	   	front = front+1;
	   }
}
void Display()
{   if(front==-1)
      printf("\n No elements are present to display");
    else
    {
	 for( i = front ; i<=rear ;i++)
	     printf(" \t %d", queue[i]);
    }    
}
