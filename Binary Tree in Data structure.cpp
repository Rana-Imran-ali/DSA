#include<iostream>
#include<vector>
using namespace std;

class Node{
	public:
	int data;
	Node*left;
	Node*right;
	public:
	Node(int val){
		data=val;
		left=right=NULL;
	}
};


// making a function to make the tree structure
static int idx=-1;
Node*buildTree(vector<int> preorder){
	idx++;
	
	if(preorder[idx]==-1){
		return NULL;
	}
	
	Node*root=new Node(preorder[idx]);     // we can use recurssion logic to make this tree structure
     root->left=buildTree(preorder);  // making left subtree;
	root->right=buildTree(preorder); // making right subtree;
	return root;
}

// pre order tervarsal.

  void preOrder(Node*root){
  	if(root==NULL){
  		return;
	  }
	  cout<<root->data<<" ";
	  preOrder(root->left);
	  preOrder(root->right);
	  
	  
  }
  
  
  // in order terversal
  void inorder(Node*root){
  	if (root==NULL){
  		return;
	  }
	  inorder(root->left);
	  cout<<root->data<<" ";
	  inorder(root->right);
  }
  
  // post order trevarsal;
  void postOrder(Node*root){
  	if(root==NULL){
  		return;
	  }
	  postOrder(root->left);
	  postOrder(root->right);
	  cout<<root->data<<" ";
  }
  
  // level order 
  void levelOrder(Node*root){
  	queue<Node*>q;
  	q.push(root);
  	while(q.size()>0){
  		Node*curr=q.front();
  		q.pop();
  		cout<<curr->data<<" ";
  		if(curr->left!=NULL){
  			q.push(curr->left);
		  }
		  if(curr->right!=NULL){
		  	q.push(curr->right);
		  }
	  }
	  cout<<endl;
  }


int main(){
	vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
  Node*root=buildTree(preorder);
  cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

  cout<<root->data<<endl;
  // pre order .
  preOrder(root);
  cout<<endl;
  // in order;
  inorder(root);
  cout<<endl;
  // post order
  postOrder(root);
  cout<<endl;
  // level order
  levelOrder(root);
  
  return 0;
	
}
