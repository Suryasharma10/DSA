#include<iostream>
using namespace std;
class Linked{
	public:
		int data;
		Linked * next;
		Linked(int val){
			data = val;
			next = NULL;
		}
};
class List{
	public:
		Linked * head;
		Linked * tail;
		List(){
			head = NULL;
			tail = NULL;
		}
		void insert(int val){
			Linked * NewNode = new Linked(val);
			if(head == NULL){
				head = NewNode;
				head->next = NULL;
				tail = head;
			}else{
				tail->next = NewNode;
				tail = NewNode;
				
			}
		}
		void DeleteFront(){
			if(head== NULL){
				cout<<"List is empty"<<endl;
			}else{
				Linked * temp = head;
				head=head->next;
				temp->next = NULL;
				delete temp;
				if(head == NULL){
					tail = NULL;
				}
				
			}
		}
		void DeleteLast(){
			if(head == NULL){
				cout<<"List is empty"<<endl;
			}else if(head==tail){
				delete head;
				head = tail = NULL;
			}else{
				Linked * temp = head;
				while(temp->next!=tail){
					temp = temp ->next;
				}
				temp->next = NULL;
				delete tail;
				tail = temp;				
			}
		}
		void Display(){
			Linked * temp;
			temp = head;
			while(temp !=NULL){
				cout<<temp->data<<" -> ";
				temp= temp->next;
			}
			cout<<"NULL";
		};
		void Search(int n){
			Linked * temp;
			temp = head;
			while(temp !=NULL){
				if(temp->data == n){
					cout<<"Element "<<n<<" found in the list"<<endl;
					return;
				}
				temp= temp->next;
			}
			cout<<"Element "<<n<<" not found in the list"<<endl;
		};
		void InsertAtPosition(int val,int k){
			Linked * NewNode = new Linked(val);
			Linked * temp;
			temp = head;
			for(int i=1;i<=k-1;i++){
				if(i == k-1){
					NewNode->next= temp->next ;
					temp ->next = NewNode;
				}
				temp = temp->next;
			}
		}
};
int main(){
	List l;
	l.insert(23);
	l.insert(13);
	l.insert(8);
	l.insert(19);
	l.insert(43);
	l.insert(61);
	l.insert(39);
	l.DeleteFront();
	l.DeleteLast();
	l.Display();
	cout<<endl;
	l.Display();
	cout<<endl;
	l.Search(23);
	l.Search(19);
	l.InsertAtPosition(23,3);
	l.Display();
	cout<<endl;
	l.InsertAtPosition(112,2);
	l.Display();
};
