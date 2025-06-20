#include<iostream>
using namespace std;
        //node class 
class Node{
	public:
		int data;
	//	int Null;
		Node* next;
		Node(int val){
			data=val;
			next =NULL ;
			
		}
};
   // making list class
class list{
	Node* head;
	Node*tail;
	public:
		list(){
			head=tail=NULL;                                   //push front, push back  ,   pop front , pop back
		}
		// push front when the node is null
		void push_front(int val){
			Node*newNode=new Node(val); // dynamic node
			if(head==NULL){
				head=tail=newNode;
				return;
			}
			// push front when node is not null 
			else {
				newNode->next =head;
				head=newNode;
			}
		}
		// print function to print the all node is order
		void printll(){
			Node* temp=head;
			while(temp!=NULL){
				cout<< temp->data <<"-> ";
				temp = temp ->next;
			}
			cout<<"Null"<< endl;
		}
		
};

int main(){
	list ll;
	ll.push_front(1);
	ll.push_front(2);
	ll.push_front(3);
	ll.printll();
	return 0;
}

