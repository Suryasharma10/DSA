#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node * next;
		Node(int val){
			data = val;
			next = NULL;
		}
};
class Stack{
	public:
		Node * top;
		Stack(){
			top = NULL;
		};
		void push(int val){
			Node * newNode = new Node(val);
			if(top == NULL){
				top = newNode;
			}else{
				newNode->next = top;
				top = newNode;
			}
		}
		void pop(){
			if(top == NULL){
				cout<<endl<<"Stack is Empty";
				return;
			}
			Node * temp = top;
			top = top->next;
			delete temp;
		}
		void peek(){
			cout<<endl<<top->data<<endl;
		}
		
		void display(){
			Node * temp1 = top;
			while(temp1!=NULL){
				cout<<temp1->data<<" ";
				temp1 = temp1->next;
			}
		}
};
int main(){
	Stack s;
	s.push(21);
	s.push(13);
	s.push(72);
	s.display();
	s.pop();
	cout<<endl;
	s.display();
	s.peek();
}
