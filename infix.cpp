//infix to postfix expression
#include<stdio.h>
#define size 100
char stack[size];
int top=-1;
void push(char item);
void pop();
int precedence(char item);
int main()
{
	char infix[size],postfix[size],item;
	int i=0,j=0;
	printf("Enter infix expression: ");
	gets(infix);
	while(infix[i]!='\0')
	{
		item=infix[i];
		if(item=='(')
		{
			push(item);
		}
		else if(item=='^'||item=='/'||item=='*'||item=='+'||item=='-')
		{
			if(precedence(stack[top])>precedence(item))
			{
				postfix[j]=stack[top];
				j++;
				pop();
			}
			push(item);
		}
		else if(item==')')
		{
			while(stack[top]!='(')
			{
				postfix[j]=stack[top];
				j++;
				pop();
			}
			pop();
		}
		else
		{
			postfix[j]=item;
			j++;
		}
		i++;
	}
	while(top!=-1)
	{
		postfix[j]=stack[top];
		j++;
		pop();
	}
  	postfix[j]='\0';
	printf("Postfix Expression: ");
	puts(postfix);
	return 0;
}
void push(char item)
{
	if(top==size-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		top++;
		stack[top]=item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		top--;
	}
}
int precedence(char item)
{
	if(item=='^')
	{
		return 3;
	}
	else if(item=='/'||item=='*')
	{
		return 2;
	}
	else if(item=='+'||item=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
