//infix to postfix expression
#include<stdio.h>
#define Size 100
int n,i=0,k=0,top=-1;
char infix[100],postfix[100],st[Size];
char c;
void Push(char a);
void Pop();
void Display();
int Precedence(char c);
int main(){
	printf("Enter the infix expression : ");
	gets(infix);
	while(infix[i]!='\0'){
		c= infix[i];
		if(c=='(')
		{
			Push(c);
	
		}
		else if((c=='^')||(c=='*')||(c=='/')||(c=='+')||(c=='-'))
		{
		
		    if(Precedence(c)<Precedence(st[top])){
		    	
		    	        postfix[k]=st[top];
		    	        k++;
						Pop();
				    
		        
		       	}
		    
		   	Push(c);
			
			
			
		}
		else if(c==')')
		{
		   while(st[top]='(')
		   {
		    	
		        postfix[k]=st[top];
		    	k=k+1;
		    Pop();
		  
		    	
			}
			Pop();
	
		}
		else if((isalpha(c))||(isdigit(c)))
		{
			postfix[k]=c;
			k=k+1;
			
		}
		
	
	  i++;
	  	
	
	}
	while(top!=-1)
	{
		postfix[k]=st[top];
		k++;
		Pop();
	}
	Display();
	return 0;
}
void Push(char a){
	if(top==Size-1){
		printf("Overflow");
		
	}
	else
	{
		top=top+1;
		st[top]=a;
	}
}
void Pop(){
	if(top==-1){
		printf("Underflow");
	}
	else
	{       
			 top=top-1;}
	
	
}
int Precedence(char c )
{
	if(c=='^')
	 {return 3;}
	else if((c=='*')||(c=='/'))
	 { return 2;}
	else if((c=='+')||(c=='-'))
	 {return 1;}
	 else
	 {
	 	return 0;
	 }
}
void Display()
{   //n=strlen(postfix);
	printf("Printing the postfix expression \n");
		printf("%s",postfix);
}
