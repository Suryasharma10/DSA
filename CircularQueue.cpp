#include<iostream>
using namespace std;
class CircularQueue{
	int * arr;
	int front;
	int rear;
	int size;
	public:
		CircularQueue(int n){
			arr = new int[n];
			size = n;
			front = rear= -1;
		}
		void Push(int val){
			if((rear +1)%size == front){
				cout<<"Queue is Full\n";
				return;
			}
			if(front ==-1){
				front = rear = 0;
			}else{
				rear = (rear +1)%size;
			}
			arr[rear] = val;
		}
		void pop(){
			if(front ==-1){
				cout<<"Queue is Empty \n";
				return;
			}
			if(front == rear){
				front = rear = -1;
				return;
			}
				front = (front +1)%size;
		}
		void Display(){
			if(front ==-1){
				cout<<"Queue is Empty \n";
				return;
			}
			int i = front;
			while(true){
				cout<<arr[i]<<" ";
				if(i == rear) break;
				i = (i+1)%size;
			}
			cout<<endl;
		}
};
int main(){
	CircularQueue cq(4);
	cq.Push(12);
	cq.Push(3);
	cq.Push(98);
	cq.Push(72);
	cq.Push(1);
	cq.pop();
	cq.pop();
	cq.pop();
	cq.pop();
	cq.Display();
}
