#include<iostream>
using namespace std;
class Stack{
	int * arr;
	int top=-1;
	int capacity;
	public:
		Stack(int size){
			arr = new int[size];
			top =-1;
			capacity = size;
		}
		void insert(int val){	
			if(top == capacity-1){
				cout<<"Stack is full\n";
				return;
			}
			arr[++top]=val;
		}
		void pop(){
			top = top-1;
		}
		void peek(){
			cout<<"Peek element is "<<arr[top]<<"\n";
		}
		void Display(){
			if(top == -1){
				cout<<"Stack is Empty\n";
				return;
			}
			int n = top;
			while(n!=-1){
				cout<<arr[n]<<" ";
				--n;
			}
			cout<<endl;
		}
};
int main(){
	Stack s(5);
	s.insert(12);
	s.insert(3);
	s.insert(14);
	s.insert(11);
	s.insert(45);
	s.insert(64);
	s.pop();
	s.peek();
	s.Display();
}
