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
class DoublyCircular{
	public:
		Node * head;
		Node * tail;
		DoublyCircular(){
			head = tail = NULL;
		}
		void InsertFront(int val){
			Node * newNode = new Node(val);
			if(head == NULL){
				head = tail =  newNode;
				tail->next = head;
				head->prev = head;
				return;
			}else{
				newNode ->next = head;
				newNode->prev = tail;
				tail->next = newNode;
				head->prev = newNode;
				head = newNode;
			}
		}
		void InsertBack(int val){
			Node * newNode = new Node(val);
			if(head == NULL){
				head = tail =  newNode;
				tail->next = head;
				head->prev = head;
				return;
			}else{
				tail->next = newNode;
				newNode->prev = tail;
				tail = newNode;
				tail->next = head;
				head->prev = tail;
			}
		}
		void RemoveFront(){
			if(head == NULL){
				cout<<"List is Empty";
				return;
			}else if(head == tail){
				delete head;
				head = tail = NULL;
				return;
			}
			Node * temp = head;
			head = head->next;
			tail->next = head;
			head->prev = tail;
			delete temp;
		}
		void RemoveLast(){
			if(head == NULL){
				cout<<"List is Empty";
				return;
			}else if(head == tail){
				delete head;
				head = tail =NULL;
				return;
			}
			Node * temp =head;
			while(temp->next!=tail){
				temp = temp->next;
			}
			tail = temp;
			temp = temp->next;
			tail->next = head;
			head->prev = tail;
			delete temp;
		}
		void Search(int val){
			if(head == NULL){
				cout<<"List is Empty";
				return;
			}
			Node * temp = head;
			while(temp!=tail){
				if(temp->data == val){
					cout<<"True";
					return;
				}
				temp = temp->next;
			}
			if(temp->data == val){
					cout<<"True";
					return;
			}
			cout<<"false";	
			
		}
		void Display(){
			if(head == NULL){
				cout<<"List is Empty";
				return;
			}
			Node * temp = head;
			do{
				cout<<temp->data<<" <-> ";
				temp = temp->next;
			}
			while(temp!=head);
			cout<<"End"<<endl;
		}
		
		void DisplayReverse(){
			if(head == NULL){
				cout<<"List is Empty";
				return;
			}
			Node * temp = tail;
			while(temp!= head){
				cout<<temp->data<<" <-> ";
				temp = temp->prev;
			}
			cout<<temp->data<<" <-> ";
			cout<<"End"<<endl;
			
		}
};
int main(){
	DoublyCircular ds;
	ds.InsertFront(12);
	ds.InsertFront(13);
	ds.InsertFront(14);
	ds.InsertFront(15);
	ds.InsertBack(43);
	ds.InsertBack(7);
	ds.RemoveFront();
	ds.RemoveFront();
//	ds.RemoveFront();
//	ds.RemoveLast();
//	ds.RemoveLast();
//	ds.RemoveLast();
//	ds.RemoveFront();
	cout<<"\n";
	cout<<"Display..."<<endl;
	ds.Display();
	cout<<"\n";
	cout<<"Reverse..."<<endl;
	ds.DisplayReverse();
	ds.Search(23);
}
