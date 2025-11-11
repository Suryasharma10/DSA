#include<iostream>
using namespace std;
class Queue{
		int * arr;
		int front;
		int rear;
		int capacity;
	public:
		Queue(int size){
			arr = new int[size];
			capacity = size;
			rear = front = -1;
		}
		void add(int val){
			if(rear == capacity-1){
				cout<<"Queue is full\n";
				return;
			}
			arr[++rear] = val;
			if(front == -1){
				front++;
			}
		}
		void remove(){
			if(front ==-1){
				cout<<"Queue is empty\n";
				return;
			}else if(front>rear){
				cout<<"Queue is empty\n";
				front = rear = -1;
				return;
			}else{
				front+=1;
			}
		}
		bool isEmpty(){
			if(front ==-1){
				cout<<"Queue is empty\n";
				return true;
			}else if(front>rear){
				cout<<"Queue is empty\n";
				return true;
			}else{
				return false;
			}
		}
		void display(){
			if(front==-1){
				cout<<"Queue is empty\n";
				return;	
			}
			for(int i=front;i<=rear;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
};
int main(){
	Queue q(4);
	q.add(12);
	q.add(11);
	q.add(34);
	q.remove();q.remove();
	cout<<q.isEmpty()<<endl;
	q.add(32);
	q.add(1);
	q.add(34);
	q.display();
}
