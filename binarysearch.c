//binary search
#include<stdio.h>
int main(){
	int ele ;
	int first , last , mid;
	int n , i , flag =0;
	int a[100];
	printf("Enter the present strength of array : ");
	printf("%d",&n);
	printf("\nEnter the elements one by one in sorted array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched ");
	scanf("%d",&ele);
	first=0;
	last=(n-1);
	mid=(first+last)/2;
	while((first<=last)&&(flag==0)){
		if(ele==a[mid])
		   flag=1;
		else{
			if(ele>a[mid])
			   first=mid+1;
			else
			   last=mid-1;
		
		mid=(first+last)/2;}
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
