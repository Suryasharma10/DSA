#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node * next;
		Node * prev;
		Node(int val){
			data = val;
			next = NULL;
			prev = NULL;
		}
};
class DoublyLink{
	public:
		Node * head;
		Node * tail;
		DoublyLink(){
			head = NULL;
			tail = NULL;
		};
		void AddFront(int val){
			Node * Newnode = new Node(val);
			if(head == NULL){
				head = Newnode;
				tail = Newnode;
			}else{
				Newnode->next = head;
				head->prev = Newnode;
				head=Newnode;
			}
		}
		void AddBack(int val){
			Node * Newnode = new Node(val);
			if(head == NULL){
				head = Newnode;
				tail = Newnode;
			}else{
				Newnode->prev = tail;
				tail->next = Newnode;
				tail = Newnode;
			}
		}
		void RemoveFront(){
			if(head == NULL){
				cout<<"Empty";
			}else if(head == tail){
				delete head;
				head = NULL;
				tail = NULL;
			}else{
				Node * temp = head;
				head = head->next;
				head->prev = NULL;
				temp->next = NULL;
				delete temp;
			}
		}
		void RemoveLast(){
			if(head == NULL){
				cout<<"Empty";
			}else if(head == tail){
				delete head;
				head = NULL;
				tail = NULL;
			}else{
				Node * temp = tail;
				tail = tail->prev;
				tail->next = NULL;
				temp ->prev = NULL;
				delete temp;
			}
		}
		void Display(){
			if(head == NULL){
				cout<<"Empty "<<endl;
			}else{
			Node * temp = head;
			while(temp!=NULL){
				cout<<temp->data<<" -> ";
				temp = temp->next;
				}
			cout<<"NULL"<<endl;
			}	
		}
		void DisplayReverse(){
			if(head == NULL){
				cout<<"Empty "<<endl;
			}else{
			Node * temp = tail;
			while(temp!=NULL){
				cout<<temp->data<<" -> ";
				temp = temp->prev;
				}
			cout<<"NULL"<<endl;
			}
		}	
};
int main(){
	DoublyLink list;
	list.AddFront(3);
	list.AddFront(2);
	list.AddFront(1);
	list.AddBack(4);
	list.AddBack(5);	
	list.AddBack(6);
	cout<<"Displaying Element"<<endl;
	list.Display();
	cout<<"Displaying Reverse"<<endl;
	list.DisplayReverse();
	list.RemoveFront();
	cout<<"Delete first element"<<endl;
	list.Display();
	list.RemoveLast();
	cout<<"Delete Last element"<<endl;
	list.Display();
}
