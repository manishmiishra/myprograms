#include<stdio.h>
#define SIZE 10
int top= -1 , choice, element,i , st[10];
void Push(int a);
void Pop();
void Display();
void main()
{
	stack :
		printf(" If you want to insert an element ,Press 1 \n If you want to delete an element ,Press 2 \n If you want to display stack,Press 3 : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				     printf("Enter the element : ");
				     scanf("%d",&element);
				     Push(element);
				     break;
			case 2 :
				     Pop();
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
			goto stack;
		}
}
void Push(int a)
{
	if(top== SIZE-1)
	  printf("\nOverflow\n");
	else 
	  {
	  	top=top+1;
	  	st[top]=element;
	  }
}
void Pop()
{
	if(top == -1)
	  printf("\nUnderflow\n");
	else
	{
		printf("The deleted element is %d",st[top]);
		printf("\n");
		top=top--;
		
	}
}
void Display()
{    
    
	printf("The elements in the stack are : ");
	for(i=0;i < top;i++)
	   printf("%d",st[i]);
	printf("\n");
}
