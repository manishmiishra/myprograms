//SELECTION SORT
#include<stdio.h>
void SelectionSort(int a[],int n){
	int k,j,temp,min,loc;
	for( k =0;k<n-1;k++){
		 min=a[k];
		 loc=k;
		 for(j=k+1;j<n;j++){
		 	if(min>a[j]){
		 		min=a[j];
		 		loc=j;
			 }
		 }
				temp=a[k];
				a[k]=a[loc];
				a[loc]=temp;
			
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
	SelectionSort(a,n);
	printf("\nElements after sorting are ");
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	
	
	return 0;
}

