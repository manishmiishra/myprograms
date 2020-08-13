//linear search
#include<stdio.h>
int main(){
	int ele;
	int n , i , flag=0;
	int a[100];
	printf("Enter the strength of array :");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched : ");
	scanf("%d",&ele);
	i=0;
	while((i<n)&&(flag==0)){
		if(ele==a[i]){
		flag=1;
		}
		i++;
	}
	if(flag==0){
		printf("Search is unsuccessful ");
	}
	else
	{
		printf("Search is successful");
	}
	return 0;
}
