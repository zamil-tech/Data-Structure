#include<iostream>
using namespace std;
class node{
	public:
		node *left;
		node *right;
		int data;
		node(int x){
			this->left=NULL;
			this->right=NULL;
			data=x;
		}
};
class BST{
	public:
		node *insert(node *root,int data){
			if(root==NULL){
				return new node(data);
			}
			if(root->data>data){
				root->left=insert(root->left,data);
				
			}
			else 
				root->right=insert(root->right,data);
			
			
		}
		node *inorder(node *root){
			if(root==NULL){
				return NULL;
			}
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
		}
		node *min(node *root){
			if(root==NULL){
				return root;
			}
			node *curr=root;
			while(curr && curr->left!=NULL){
				curr=curr->left;
			}
			return curr;
		}
		node *deletion(node *root,int data){
			if(root==NULL){
				return root;
			}
			if(root->data>data){
				root->left=deletion(root->left,data);
			}
			else if(root->data<data){
				root->right=deletion(root->right,data);
			}
			else{
				if(root->left==NULL){
					node *tmp=root->right;
					delete (root);
					return tmp;
				}
				else if(root->right==NULL){
					node *tmp=root->left;
					delete root;
					return tmp;
				}
				node *tmp=min(root->right);
				root->data=tmp->data;
				root->right=deletion(root->right,tmp->data);
			}
			return root;
		}
		node *search(node *root,int data){
			if(root==NULL){
				cout<<"element is not present ";
				return NULL;
			}
			if(root->data==data){
				cout<<"element is present ";
				//return ;
			}
			
			else if(root->data>data){
				root->left=search(root->left,data);
				
			}
			else{
				root->right=search(root->right,data);
			}
			return root;
			
		}
		bool isbst(node *root,int minkeys,int maxkeys){
			if(root==NULL){
				return true;
			}
			if(root->data<minkeys || root->data>maxkeys){
				return false;
			}
			
		return isbst(root->left,minkeys,root->data)&&isbst(root->right,root->data,maxkeys);
		}
		
		
};
int main(){
		BST B;
		node *root=NULL;
		for(int i=0;i<5;i++){
			root=B.insert(root,i);
		}
		B.inorder(root);
		cout<<endl;
		B.deletion(root,4);
		B.inorder(root);
		B.search(root,3);
	//	B.isbst(root);
		if(B.isbst(root,0,3)==true){
			cout<<"tree is bst ";
		}
		else{
			cout<<"tree is not bst ";
		}
}
