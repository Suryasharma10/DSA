#include<iostream>
using namespace std;
int partition(int arr[],int lower,int upper){
	int left = lower +1;
	int right = upper;
	int pivot = lower;
	while(left<=right){
		while(arr[left]<=arr[pivot]&&left<=right){
		left ++;
	}
	    while(left<=right&& arr[right]>arr[pivot]){
		right --;
	}
	if(left<right){
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right]=temp;
	}
	}
	int temp = arr[pivot];
	arr[pivot]= arr[right];
	arr[right] = temp;
	return right;
}
void quick(int arr[],int lower,int upper){
	if(lower<upper){
		int pivot = partition(arr,lower,upper);
		quick(arr,lower,pivot-1);
		quick(arr,pivot+1,upper);
	}
	
}
int main(){
	int arr[]= {5,2,8,1,7,4,33,12,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	quick(arr,0,n-1);
	cout<<"Sorted Array: \n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
