
//MERGE SORT
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void MergeSort(int a[],int left ,int right);
void Merge(int a[],int left ,int mid ,int right);

int main(){
	int a[10];
	int i,n,left ,right;
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("\nEnter the elements of array ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	left=0;
	right=n-1;
	MergeSort(a,left,right);
	printf("\nElements after sorting are ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
void Merge(int a[],int left ,int mid ,int right){
	int i ,j;
	int n1=(mid-left+1);
	int n2=(right-mid);
	int l[n1+1],r[n2+1];
	for(i =1;i<=n1;i++){
		l[i]=a[left+i-1];
	}
	for( j=1;j<=n2;j++){
		r[j]=a[mid+j];
	}
	l[n1+1]=99999;
	r[n2+1]=99999;
	i=1;
	j=1;
	for(int k = left ;k<=right;k++){
		if(l[i]<=r[j]){
			a[k]=l[i];
			i=i+1;
		}
		else{
			a[k]=r[j];
			j=j+1;
		}
	}
	
}
void MergeSort(int a[],int left ,int right){
	int mid;
	if(left<right){
		mid=(right+left)/2;
		MergeSort(a,left,mid);
		MergeSort(a,mid+1,right);
		Merge(a,left,mid,right);
	}
	
}
