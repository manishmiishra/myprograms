//BUBBLE SORT
#include<stdio.h>
int n,a[10];
void HeapSort(int a[],int n );
void BuildMaxHeap(int a[]);
void MaxHeapify(int a[], int i);
int main(){
	int i;
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("\nEnter the elements of array ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	HeapSort(a,n);
	printf("\nElements after sorting are ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	
	return 0;
}
void MaxHeapify(int a[],int i){
	int left = a[(2*i)]; // the left child
	int right= a[(2*i+1)];//the right child
	int largest;
	if((left <=n)&&(left > a[i])){
		largest=
	}
}

