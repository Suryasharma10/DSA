#include<iostream>
#include<vector>
using namespace std;
class Stack{
	public:
		vector<int> v;
		void push(int val){
			v.push_back(val);	
		}
		void pop(){
			if(v.size()==0){
				cout<<"Stack is Empty ";
				return;
			}
			v.pop_back();
		}
		bool isEmpty(){
			if(v.size()==0){
				return true;
			}else return false;
		}
		void peek(){
			int t = v.back();
			cout<<t<<endl;
		}
		void display(){
			while(v.size()!=0){
				cout<<v.back()<<" ";
				v.pop_back();
			}
		}
};
int main(){
	Stack s;
	s.push(23);
	s.push(87);
	s.push(10);
	s.peek();
	s.display();
};
