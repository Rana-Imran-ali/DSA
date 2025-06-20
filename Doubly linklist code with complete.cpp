#include<iostream>
using namespace std;
// making node class
class Node{
	public:
	int data;
	Node*next;
	Node*prev;
	// constructor of node class
	Node(int val){
		data=val;
		next=prev=NULL;
	}
	
	
};
// Doubly linklist class 
class DoublyList{
	public:
		Node*head;
		Node*tail;
		public:
			int prev;
			DoublyList(){
				head=tail=NULL;
			}
			// push front function
			void push_front(int val){
				Node*newNode=new Node(val); // making a new node 
				// when node is empty
				if (head==NULL){
					head=tail=newNode;
				}
				// when node is not Empty
				else{
					
					newNode->next=head;
					
					head->prev=newNode;
					head=newNode;
					
				}
			}
			// push back function
			
			void push_back(int val){
				 
				Node*newNode=new Node(val); // making a new node 
				// when node is empty
				if (head==NULL){
					head=tail=newNode;
				}
				// when node is not Empty
				else{
					
					newNode->prev=tail;
					
					tail->next=newNode;
					tail=newNode;
					
				}
			}
			
			
			// creating a print function
			void print(){
				Node*temp=head;
				while(temp!=NULL){
					cout<<temp->data<<" <> ";
					temp=temp->next;
					cout<<"NULL\n";
				}
			}
			void pop_front(){
			
			// pop front funct\{
				// for empty
				
				if(head==NULL){
					cout<<"linklist is empty"<<endl;
					return;
				}
				Node*temp=head;
				head=head->next;
				if(head!=NULL){
					head->prev=NULL;
				}
				temp->next=NULL;
				delete temp;
			}
			// pop back function
			void pop_back(){
				if(head==NULL){
					cout<<"linklist is empty\n";
					return;
				}
				Node*temp=tail;
				tail=tail->prev;
				if(tail!=NULL){
					tail->next=NULL;
				}
				temp->prev=NULL;
				delete temp;
			}
			
			
			
	};






int main(){
	//
	DoublyList dll;
	// push fornt
	cout<<"Push front nodes"<<endl;
	dll.push_front(1);
	dll.push_front(2);
	dll.push_front(3);
	//push back
	cout<<"push back node<<"<<endl;
	dll.push_back(1);
	dll.push_back(2);
	dll.push_back(3);
	// pop fornt
	dll.pop_front();
	// pop back
	dll.pop_back();

	// print fuctionn
		dll.print();
	return 0;

}
