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
class List{
	public:
		Node * head;
		Node * tail;
		List(){
			head = NULL;
			tail = NULL;
		}
		// ----------Insert Element At Begining ------------------
		void InsertFront(int val){
			Node * NewObj = new Node(val);
			if(head == NULL){
				head = NewObj;
				tail = NewObj;
			}else{
				NewObj->next = head;
				head = NewObj;
			}
		}
		void InsertRear(int val){
			Node * NewObj = new Node(val);
			if(head == NULL){
				head = NewObj;
				head -> next = NULL;
			}else{
				tail->next = NewObj;
				tail = NewObj;
			}
		}
		// ---------------Displaying Elements ----------------------
		void Display(){
			Node * temp;
			temp = head;
			while(temp!=NULL){
				cout<<temp->data<<" -> ";
				temp=temp->next;
			}
			cout<<"NULL";
		}
};
int main(){
	cout<<"Hello World "<<endl;
	List l;
	cout<<"Insert at the begining... "<<endl;
	l.InsertFront(23);
	l.Display();
	cout<<endl;
	l.InsertFront(20);
	l.Display();
	cout<<endl;
	l.InsertFront(18);
	l.Display();
	cout<<endl;
	l.InsertFront(12);
	l.Display();
	cout<<endl;
	l.InsertFront(9);
	l.Display();
	cout<<endl;
	cout<<"Insert at the ending... "<<endl;
	l.InsertRear(31);
	l.Display();
	cout<<endl;
	l.InsertRear(39);
	l.Display();
	cout<<endl;
	l.InsertRear(98);
	l.Display();
	return 0;
}
