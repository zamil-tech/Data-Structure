#include<iostream>
using namespace std;
class node{
	public:
		node *left;
		node *right;
		int data;
		node *next;
		node(){
			this->left=NULL;
			this->right=NULL;
			data=0;
		}
		node(int value){
			data=value;
			this->left=NULL;
			this->right=NULL;
		}
};
class BST{
	public:
		node *root;
		BST(){
			root=NULL;
		}
		node* insert(node *root,int data){
			if(root==NULL){
				return new node(data);
			}
			else if(root->data>data){
				root->left=insert(root->left,data);
				
			}
			else{
				root->right=insert(root->right,data);
			}
			return root;
		}
		void inorder(node *root){
			if(root==NULL){
				return;
			}
			else{
				inorder(root->left);
				cout<<root->data<<" ";
				inorder(root->right);
				
			}
		}
		void pre_order(node *root){
			if(root==NULL){
				return;
			}
			else{
				pre_order(root->left);
				pre_order(root->right);
				cout<<root->data<<" ";
			}
		}
		void post_order(node *root){
			if(root==NULL){
				return;
			}
			else{
				post_order(root->right);
				cout<<root->data<<" ";
				post_order(root->left);
			}
		}
		node *search(node *root,int key){
			if(root==NULL){
				cout<<"element not found ";
				return NULL;
			}
			 if(root->data==key){
				cout<<"element Found "	;
				
		}
		else if(root->data>key){
			return search(root->left,key);
		}
		else{
			return search(root->right,key);
		}
		}
		void max(node *root){
			if(root==NULL){
				return;}
			node *curr=root;
			while(curr->right!=NULL){
				curr=curr->right;
			}
			cout<<"maximum element is "<<curr->data;
			//	retu
			
		}
		void min(node *root){
			if(root==NULL){
				return;
			}
			//else{
			node *curr;
			curr=root;
			while(curr->left!=NULL){
				curr=curr->left;
			}
				cout<<"Minimum element is "<<curr->data;
			
		}
		node *deletenode(node *root,int data){
			if(root==NULL){
				return root;
			}
			else if(root->data>data){
				root->left=deletenode(root->left,data);
			}
			else if(root->data<data){
				root->right=deletenode(root->right,data);
			}
			else{
				if(root->left==NULL &&root->right==NULL){
					return NULL;
				}
				else if(root->left==NULL){
					node *tmp=root->right;
					delete root;
					return tmp;
					
				}
				else if(root->right==NULL){
					node *tmp;
					tmp=root->left;
					delete root;
					return tmp;
				}
				
			}
			
				
			
			
		}
	int height(node *root){
		if(root==NULL){
			return -1;
		}
		else{
			int lheight=height(root->left);
			int rheight=height(root->right);
			
		
		if(lheight>rheight){
			return (lheight+1);
		}
		else{
			return (rheight+1);
		}}
	}


};
int main(){
	node *root;
	root=NULL;
	BST B;
	//rootB.insert(root,12);
	int n;
	cout<<"enter the number of element you wanted to enter in BST ";
	cin>>n;
	int num;
	for(int i=0;i<n;i++){
		cout<<"enter the element you want to insert ";
		cin>>num;
		root=B.insert(root,num);
	}
	cout<<"-------------------------------Inorder Traversal----------------------------------------"<<endl;
	B.inorder(root);
	cout<<endl;
	cout<<"-----------------------------Pre_order Traversal------------------------------------------- "<<endl;
	B.pre_order(root);
	cout<<endl;
	cout<<"----------------------------Postorder Traversal----------------------------------------------"<<endl;
	B.post_order(root);
	cout<<endl;
	cout<<"------------------------------searching-------------------------------------------------------"<<endl;
	B.search(root,12);
	cout<<endl;
	cout<<"-------------------------------MaxiMum----------------------------------------------------------"<<endl;
	B.max(root);
	cout<<endl;
	cout<<"--------------------------------Minimum-----------------------------------------------------------"<<endl;
	B.min(root);
	cout<<endl;
	cout<<"----------------------------------deleting element--------------------------------------------------"<<endl;
	cout<<endl;
	B.deletenode(root,12);
	cout<<endl;
	B.inorder(root);
	cout<<endl;
	cout<<"---------------------------------------Height----------------------------------------------------"<<endl;
	cout<<B.height(root);
}
