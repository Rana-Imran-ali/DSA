#include<iostream>
using namespace std;
struct listNode{
	int val;
	int listNode;
	listNode*next;
	listNode(int x):val(x),next(NULL);
};
class Solution{
	public:
		listNode* reverselist(listNode*head){
			listNode*prev=NULL;
			listNode*curr=head;
			listNode*next=NULL;
			while(curr!=NULL){
				next=curr->next;
				curr->next=prev;
				prev=curr;
				curr=next;
			}
			return prev;

		}
};
int main(){
	return 0;
}
