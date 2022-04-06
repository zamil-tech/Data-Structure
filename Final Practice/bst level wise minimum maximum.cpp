// CPP program to print smallest element 
// in each level of binary tree. 
#include <iostream> 
#include <vector> 
#define INT_MAX 10e6 
using namespace std; 
  
// A Binary Tree Node 
struct Node { 
    int data; 
    struct Node *left, *right; 
}; 
  
// return height of tree 
int heightoftree(Node* root) 
{ 
  
    if (root == NULL) 
        return 0; 
  
    int left = heightoftree(root->left); 
    int right = heightoftree(root->right); 
  
    return ((left > right ? left : right) + 1); 
} 
  
// Inorder Traversal 
// Search minimum element in each level and  
// store it into vector array. 
void printPerLevelMinimum(Node* root,  
                  vector<int>& res, int level) 
{ 
      
    if (root != NULL) { 
  
        printPerLevelMinimum(root->left, 
                              res, level + 1); 
  
        if (root->data < res[level]) 
            res[level] = root->data; 
  
        printPerLevelMinimum(root->right,  
                              res, level + 1); 
    } 
} 
  
  
  void printPerLevelMaximum(Node* root, vector<int>& res, int level) 
{ 
      
    if (root != NULL) { 
  
        printPerLevelMaximum(root->right,res, level + 1); 
  
        if (root->data > res[level]) 
            res[level] = root->data; 
  
        printPerLevelMaximum(root->left,  
                              res, level + 1); 
    } 
} 
  
  void perLevelMaximumUtility(Node* root) 
{ 
      
    // height of tree for the size of  
    // vector array 
    int n = heightoftree(root), i; 
  
    // vector for store all minimum of  
    // every level 
    vector<int> res(n, INT_MIN); 
  
    // save every level minimum using  
    // inorder traversal 
    printPerLevelMaximum(root, res, 0); 
  
    // print every level minimum 
     
    for (i = 0; i < n; i++) { 
        cout<< res[i] << "  "; 
    } 
} 
  
  
  
  
void perLevelMinimumUtility(Node* root) 
{ 
      
    // height of tree for the size of  
    // vector array 
    int n = heightoftree(root), i; 
  
    // vector for store all minimum of  
    // every level 
    vector<int> res(n, INT_MAX); 
  
    // save every level minimum using  
    // inorder traversal 
    printPerLevelMinimum(root, res, 0); 
  
    // print every level minimum 
    
    for (i = 0; i < n; i++) { 
        cout << res[i] << "  "; 
    } 
} 
void display(Node *root){
	if(root=NULL){
		return;
	}
	else{
		display(root->left);
		cout<<root->data<<" ";
		display(root->right)	;
	}
}
  
// Utility function to create a new tree node 
Node* newNode(int data) 
{ 
    Node* temp = new Node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
  
    return temp; 
} 
  
// Driver program to test above functions 
int main() 
{ 
  
    // Let us create binary tree shown  
    // in above diagram 
    Node* root = newNode(25); 
    root->left = newNode(-13); 
    root->right = newNode(28); 
    root->left->left = newNode(-6); 
    root->left->right = newNode(-15); 
    root->right->left = newNode(30); 
    root->right->right = newNode(26); 
  
    /*       7 
         /  
        6     5 
       /      / 
      4   3 2   1         */
   // perLevelMinimumUtility(root); 
    //perLevelMaximumUtility(root);
    display(root);
  
    return 0; 
} 
