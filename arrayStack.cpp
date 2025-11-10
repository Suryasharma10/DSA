#include<iostream>
using namespace std;
class Stack{
	public:
		int top = -1;
//		int capacity;
//		int arr;
//		void stack(int size){
//			arr[size];
//			capacity = size;
//		}
		void push(int val){
			if(top == capacity-1){
				cout<<"Stack Full";
				return;
			}
			 arr[++top]=val;	
		}
		void pop(){
			if(top == -1){
				cout<<endl<<"Stack is Empty";
				return;
			}
			top-=1;
		}
		bool isEmpty(){
			return top==-1;
		}
		void peek(){
			int t = arr[top];
			cout<<t<<endl;
		}
		void CheckCapacity(){
			if(top == capacity-1){
				cout<<"Stack Full";
				return;
			}else{
				cout<<"Stack is not full";
				return;
			}
		}
		void display(){
			int n = top;
			while(n !=-1){
				cout<<arr[n]<<" ";
				n-=1;
			}
			cout<<endl;
		}
};
int main(){
	Stack s;
	s.stack(10)
	s.push(23);
	s.push(87);
	s.push(10);
	s.peek();
	s.display();
	s.pop();
	s.display();
}
