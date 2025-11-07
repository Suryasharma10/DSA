#include<iostream>
using namespace std;
class node {
	public:
		int data ;
		node* next;
		node(int val){
			data = val;
			next = NULL;
		}
};
class circular {
	public:
		node * head;
		node * tail;
		circular(){
			head = tail = NULL;
		}
		void addfront(int val){
			node * n = new node(val);
			if(head == NULL){
				head = n;
				tail = n;
				tail->next = head;
			}else{
				n->next=head;
				head = n;
				tail->next = head;
			}
		}
		void addback(int val){
			node * n = new node(val);
			if(head==NULL){
				head = n;
				tail = n;
				tail->next = head;
			}else{
				tail->next = n;
				tail =n ;
				tail->next = head;	
			}
		}
		void search(int target){
			if(head->data==target){
				cout<<target<<" Element is Found"<<endl;
				return;
			}else {
			node * temp = head->next;
				while(temp!=head){
				if(target == temp->data){
					cout<<target<<" Element is Found"<<endl;
					return;
				}
				temp = temp->next;
				}cout<<target<<" Element is Not Found"<<endl;
			}
		}
		void deletefront(){
			node * temp =head->next;
			if(head==NULL){
				cout<<"Empty";
			}else{
				temp = head;
				head = head->next;
				tail->next = head;
				delete temp;
			}
		}
		void deleteback(){
			node * temp =head;
			if(head==NULL){
				cout<<"Empty";
			}else if(head == tail){
				delete head;
			}else{
				while(temp->next!=tail){
					temp = temp->next;
				}
				delete tail;
				tail = temp;
				tail ->next = head;
			}
		}
		void Display(){
			if(head == NULL){
				cout<<"Empty "<<endl;
			}else{
			node * temp = head->next;
			cout<<head->data<<" -> ";
			while(temp!=head){
				cout<<temp->data<<" -> ";
				temp = temp->next;
				}
			cout<<"NULL"<<endl;
			}	
		}
};
int main(){
	circular c;
	c.addfront(21);
	c.addfront(31);
	c.addback(13);
	c.addback(12);
	c.addfront(76);
	c.addback(24);
	c.addback(92);
	c.Display();
	c.search(12);
	c.deletefront();
	c.deleteback();
	c.Display();
}
