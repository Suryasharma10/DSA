#include<iostream>
using namespace std;
class Node{
	public:
		int data ;
		Node * next;
		Node(int val){
			data =val;
			next= NULL;
		}
};
class Queue{
	public:
		Node * front;
		Node * rear;
		Queue(){
			 front = NULL;
			 rear = NULL;
		}
		void Insert(int val){
			Node * newNode = new Node(val);
			if(front == NULL){
				front = newNode;
				rear = newNode;
			}else{
				rear->next = newNode;
				rear = newNode;
			}
		}
		void Remove(){
			if(front == NULL){
				cout<<"Queuen is empty \n";
				return;	
			}else{
				Node * temp = front;
				front = front->next;
				delete temp;
			}
		}
		bool IsEmpty(){
		return front == NULL;
		}
		void Display(){
			if(front == NULL){
				cout<<"Queuen is empty \n";
				return;
			}else{
				Node * temp = front;
				while(temp!=NULL){
					cout<<temp->data<<" <-> ";
					temp = temp->next;
				}
				cout<<"End"<<endl;
			}
		}	
};
int main(){
	Queue q;
	q.Insert(21);
	q.Insert(13);
	q.Insert(14);
	q.Remove();
	q.Remove();
	q.Remove();
	cout<<"Is empty : "<<q.IsEmpty()<<endl;
	q.Display();
}
