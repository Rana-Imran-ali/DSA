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
			// push front  node is not null 
			else {
			newNode-> next =head;
			head=newNode;	
			
			}
		}
		// push back fucntion when node is null
		void push_back(int val){
			Node*newNode=new Node(val);
			if(head==NULL){
				head=tail=newNode;
			}
			// push back function when node is not null
			else 
			tail->next=newNode;
			tail=newNode;
		}
		// pop front function when node is empty
		void pop_front(){
			if (head==NULL){
				cout<<"ll is empty\n";
				return;
			}
			// pop front function when node is not empty.
			Node*temp=head;
			head =head->next;
			temp->next=NULL;
			delete temp;
		}
		// pop back when node is empty
		void pop_back(){
			if (head==NULL){
				cout<<"link list is empty\n";
				return;
			}
			//pop back when node is not empty
			Node*temp=head;
			while(temp->next !=tail){
				temp=temp->next;
				
			}
			temp->next=NULL;
			delete tail;
			tail=temp;
			
		}
		// insert node in the previous linklist
		void insert (int val, int pos){
			if (pos<0){
				cout<<"invalid pos\n";
				return;
			}
			if (pos==0){
				push_front(val);
				return;
			}
			Node*temp=head;
			for(int i=0;i<pos-1;i++){
				if(temp==NULL){
					cout<<"invalid pos\n";
					return;
				}
				temp=temp->next;
			}
			Node*newNode=new Node(val);
			newNode->next=temp->next;
			temp->next =newNode;
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
		// searching in the linklist.
		int search(int key){
			Node*temp=head;
			int idx=0;
			while (temp!=NULL){
				if(temp->data ==key){
					return idx;
				}
				temp= temp->next;
				idx++;
			}
			return -1;
		}
		
};

int main(){
	list ll;
	ll.push_front(3);
	ll.push_front(2);
	ll.push_front(1);
	// insert a new node in the previous linklist
	ll.insert(4,1);
	// insert a new node before the head
	ll.insert(4,0);
	
	ll.printll();
	// search in the linklist.
	cout<< ll.search(2)<<endl;
	return 0;
}



















