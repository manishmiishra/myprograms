//BUBBLE SORT
#include<stdio.h>
void BubbleSort(int A[],int n){
	int temp,ptr;
	for(int k =0;k<n-1;k++){
		 ptr =0;
		while(ptr<n-1-k){
			if(A[ptr]>A[ptr+1]){
				temp=A[ptr];
				A[ptr]=A[ptr+1];
				A[ptr+1]=temp;
		 	}
			ptr=ptr+1;
		}
	}
}
int main(){
	int i,n;
	printf("Enter the size of array ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements of array ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	BubbleSort(a,n);
	printf("\nElements after sorting are ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	
	return 0;
}

