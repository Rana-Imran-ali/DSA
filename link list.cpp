#include<iostream>
using namespace std;
        //node class 
class Node{
	public:
		int data;
		Node* next;
		Node(int val){
			data=val;
			next = Null;
			
		}
};
   // making list class
class list{
	Node* head;
	Node*tail;
	public:
		list(){
			head=tail=Null;                                   //push front, push back  ,   pop front , pop back
		}
};

int main(){
	
}
