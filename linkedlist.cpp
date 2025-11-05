#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    public:
    Node * head;
    Node * tail;
    list(){
        head = NULL;
        tail = NULL;
    }
    void insertFront(int val){
        Node * newnode = new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }
    void addBack(int val){
        Node * newnode = new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void deleteFront(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }else{
            Node * temp = head;
            head = head->next;
            delete temp;
        }
    }
    void display(){
        Node * temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp= temp-> next;
        }
        cout<<"Null"<<endl;
    }
};
int main(){
    list l1;
    l1.insertFront(20);
    l1.insertFront(10);
    l1.addBack(30);
    l1.addBack(40);
    l1.insertFront(5);
    l1.display();
    cout<<"After deleting front node:"<<endl;
    l1.deleteFront();
    l1.display();
}

