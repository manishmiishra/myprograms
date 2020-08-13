//QUICK SORT
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int a[10];
void QuickSort(int low , int high);
int partition(int low ,int high);
void swap(int i ,int j){
	int temp= a[i];
	a[i]=a[j];
	a[j]=temp;
}

int main(){

	int i,n,high;
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("\nEnter the elements of array ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	high=(n-1);
	QuickSort(0,high);
	printf("\nElements after sorting are ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
int partition(int low , int high){
	int pivot =a[low];
	int i = low-1;
	int j = high+1;
	while(i<j){
		for(i++;a[i]<pivot;i++);
		for(j--;a[j]>pivot;j--);
		if(i<j)
		   swap(i,j);
	}
	return j;
}
void QuickSort(int low ,int high){
	if(low>=high)
	    return;
	int p = partition(low,high);
	QuickSort(low,p);
	QuickSort(p+1,high);
	
}
