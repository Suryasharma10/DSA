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
			}else{
				newNode ->next = head;
				newNode->prev = tail;
				tail->next = newNode;
				head->prev = newNode;
				head = newNode;
			}
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
			cout<<endl;
		}
};
int main(){
	DoublyCircular ds;
	ds.InsertFront(12);
	ds.InsertFront(13);
	ds.InsertFront(14);
	ds.InsertFront(15);
	ds.Display();
}
