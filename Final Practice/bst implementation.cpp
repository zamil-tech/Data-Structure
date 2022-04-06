#include<iostream>
using namespace std;
class node{
	public:
		node *left;
		node *right;
		int data;
		node(int X){
			this->left=NULL;
			this->right=NULL;
		data=X;
		}
		
};
class BST{
	public:
//		
		node *insert(node *root,int data){
			if(root==NULL){
				return new node(data);
			}
			 if(root->data>data){
				root->left=insert(root->left,data)	;
			}
			else{
			
			
				root->right=insert(root->right,data);
			}
		//	return root;
		}
	node  *inorder(node *root){
			if(root==NULL){
				return NULL;
			}
			
				inorder(root->left);
				cout<<root->data<<" ";
				inorder(root->right);
			}
		//	return;
			
		
		
		
};
int main(){
	node *root;
	root=NULL;
	BST B;
	for(int i=0;i<5;i++){
	B.insert(root,i);
	}
	B.inorder(root);
	//B.insert()
}

