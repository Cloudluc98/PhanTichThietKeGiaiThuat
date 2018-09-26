#include<stdio.h>
#include<conio.h>

void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

void QuickSort(int A[], int l, int r){
	if(l>=r) return;
	int mid = (l+r)/2;
	int i=l;
	int j=r;
	while(i<mid || j>mid){
		while(i<j && A[i]<A[mid]){
			i++;
		}
		while(j>i && A[j]>A[mid]){
			j--;
		}
		swap(A[i], A[j]);
		i++;
		j--;
	}
	QuickSort(A,l,j);
	QuickSort(A,i,r);
}

int main(){
	int A[]={5,3,6,9,2,32,18};
	QuickSort(A,0,6);
	for(int i=0;i<7;i++){
		printf("%d  ", A[i]);
	}
	
	getch();
}
