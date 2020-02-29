#include<bits/stdc++.h>

using namespace std;

void Merge(int *arr,int low,int mid,int high){
	int n1 = mid-low+1;
	int n2 = high-mid;
	// creating two temp array to store the left half and the right half of the array
	int A[n1],B[n2];
	int i,j,k;
	for(i=0;i<n1;i++){
		A[i] = arr[low+i];
	}
	for(i=0;i<n2;i++){
		B[i] = arr[mid+1+i];
	}
	// initial index of the left half is 0, same goes for right half
	// since we are replacing the sorted elements we are replacing from low to high
	// so the initial index of the merged arry would be 'low'
	for(i=0,j=0,k=low;i<min(n1,n2) && j<min(n1,n2);){
		if(A[i]<B[j]){
			arr[k] = A[i];
			i++;
		}
		else{
			arr[k] = B[j];
			j++;
		}
		k++;
	}
	for(int n=i;n<n1;n++){
		arr[k] = A[n];
		k++;
	}
	for(int n=j;n<n2;n++){
		arr[k] = B[n];
		k++;
	}
}

void MergeSort(int *arr,int low,int high){
	if(low<high){
		// dividing the array into two halves
		int mid = low+(high-low)/2;
		// calling mergesort for the first half
		MergeSort(arr,low,mid);
		// calling mergesort for the second half
		MergeSort(arr,mid+1,high);
		// merge the two halves sorted before
		Merge(arr,low,mid,high);
	}
}

int main(){
	puts("enter the number of elements");
	int n; cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	MergeSort(arr,0,n-1);
	for(int i=0;i<n;i++)
		cout << arr[i] << " ";
	puts("");
	return 0;
}