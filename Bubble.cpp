#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
	cout<<"enter number : "<<endl;
	cin>>n;
	cout<<"enter array\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int temp;
	for(int j =0;j<n-1;j++){
		for(int i=0;i<n;i++){
			if(arr[i]>arr[i+1]){
				temp = arr[i+1];
				arr[i+1]= arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
