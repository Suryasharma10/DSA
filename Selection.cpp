#include<iostream>
using namespace std;
void selection(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
		if(arr[min]>arr[j]){
			min = j;
		}	
		}
		int temp = arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]={2,54,77,65,90,12,11,43,1};
	int n= 9;
		selection(arr, n);
}
