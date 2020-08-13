//INSERTION SORT
#include<stdio.h>
void InsertionSort(int a[],int n){
	int i,j,k,temp;
	for(j=1;j<n;j++){
		 temp=a[j];
		 i=j-1;
		 while(i>-1 and a[i]>temp){
		 a[i+1]=a[i];
		 i=i-1;
		 }
			a[i+1]=temp;
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
	InsertionSort(a,n);
	printf("\nElements after sorting are ");
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	
	
	return 0;
}

