#include<iostream>
using namespace std;
class Node{
	public:
		int data ;
		Node * next;
		Node(int val){
			data =val;
			next = NULL;
		}
};
class Stack{
	public:
		Node * top;
		Stack(){
			top = NULL;
		}
		void insert(int val){
			Node * newNode = new Node(val);
			if(top ==NULL){
				top = newNode;
			}else{
			newNode->next = top;
			top = newNode;
			}
		}
		void pop(){
			if(top ==NULL){
				cout<<"Stack is empty\n";
				return;	
			}
			top = top->next;
		}
		void Display(){
			if(top == NULL){
				cout<<"Stack is empty\n";
				return;
			}
			Node *temp = top;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp = temp->next;
			}
			cout<<endl;
		}
};
int main(){
	Stack s;
	s.insert(12);
	s.insert(15);
	s.insert(32);
	s.insert(6);
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.Display();
}
