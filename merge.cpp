#include<iostream>
using namespace std;
void partition(int arr[],int lower,int mid,int upper){
	int i = lower;
	int j = mid+1;
	int k=0;
	int temp[upper-lower+1];
	while(i<=mid&&j<=upper){
		if(arr[i]<arr[j]){
			temp[k++]=arr[i++];
		}else{
			temp[k++]=arr[j++];
		}
	}
		while(j<=upper){
			temp[k++]=arr[j++];
		}
		while(i<=mid){
			temp[k++]=arr[i++];
		}
		for(int x = 0;x<k;x++){
			arr[lower + x]=temp[x];
		}
}
void merge(int arr[],int lower,int upper){
	if(lower<upper){
	    int mid = (lower+upper)/2;
		merge(arr,lower,mid);
		merge(arr,mid+1,upper);
		partition(arr,lower,mid,upper);
	}
}
int main(){
	int arr[]= {5,2,8,1,7,4,33,12,9,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	merge(arr,0,n-1);
	cout<<"Sorted Array: \n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
