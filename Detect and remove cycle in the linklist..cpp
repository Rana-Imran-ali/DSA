


// Dtect cycle in the linklist.

class Solution{
	public:
		bool hasCycle(ListNode*head)
		{
			ListNode* slow=head;
			ListNode*fast=head;
			
			while(fast!=NULL&& fast->next !=NULL){
				slow=slow->next;
				fast=fast->next->next;
				if(slow==fast){
					return true;
				}
			}
			return false;
		}
};


// This detect our linklist has a cycle or not . Then we return its starting point.start node of cycle.

class Solution{
	public:
		bool hasCycle(ListNode*head)
		{
			ListNode* slow=head;
			ListNode*fast=head;
			bool isCycle =false;
			while(fast!=NULL&& fast->next !=NULL){
				slow=slow->next;
				fast=fast->next->next;
				if(slow==fast){
					isCycle=true;
					break;
				}
			}
			if(! isCycle){
				return NULL;
			}
			slow=head;
			
			while(slow!=fast){
				slow=slow->next;
				fast=fast->next;
			}
			return slow;
		}
};






//   remove the cycle node in the linklist .



class Solution{
	public:
		bool hasCycle(ListNode*head)
		{
			ListNode* slow=head;
			ListNode*fast=head;
			bool isCycle =false;
			while(fast!=NULL&& fast->next !=NULL){
				slow=slow->next;
				fast=fast->next->next;
				if(slow==fast){
					isCycle=true;
					break;
				}
			}
			if(! isCycle){
				return NULL;
			}
			slow=head;
			//previous of node
			ListNode*prev=NULL;
			while(slow!=fast){
				slow=slow->next;
				// previous is equal to fast
				prev=fast;
				fast=fast->next;
			}
			prev->next=NULL;  // remove cycle.
			return slow;
		}
};







