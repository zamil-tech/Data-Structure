#include<iostream>
using namespace std;
class node{
	public:
		node *next;
		int data;
		node(){
			this->next=	NULL;
			data=0;
		}
};
class stack{
	public:
		node *top;
		stack(){
			top=NULL;
		}
		void insert(int val){
			node *tmp;
			tmp=new node;
			tmp->data=val;
			if(top==NULL){
				top=tmp;
					tmp->next=NULL;
			}
			else{
				tmp->next=top;
				top=tmp;
			}
		}
		void sort(){
			node *curr,*pre,*nextnode;
			curr=top;
			//nextnode=curr;
			while(curr!=NULL){
				nextnode=curr->next;
				curr->next=pre;
				pre=curr;
				curr=nextnode;
				
				
			}
			top=pre;
		}
		void display(){
			node *tmp;
			tmp=top;
			while(tmp!=NULL){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
		}
};
int main(){
	stack s;
	s.insert(213);
	s.insert(12445);
	s.insert(1);
	s.display();
	cout<<"reverse "<<endl;
	s.sort();
	s.display();
	
}
