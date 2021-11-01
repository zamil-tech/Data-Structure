#include<iostream>

using namespace std;
class node{
	public:
		int data;
		node *next;
		node *pre;
		node(){
			data=0;
			pre=NULL;
			next=NULL;
		}
		node(int n){
			data=n;
			this->next=NULL;
			this->pre=NULL;
		}
};
class doubly{
	public:
		node *head;
		doubly(){
			this->head=NULL;
		}
			void display(){
			node *tmp;
		tmp=head;
		while(tmp!=NULL){
					cout<<tmp->data<<" ";
			tmp=tmp->next;
		}}
		
		
		
		// add node at the front 
		void front(int n){
			
			node *tmp;
			tmp=new node;
			tmp->data=n;
			if(head==NULL){
				head=tmp;
				head->next=NULL;
				head->pre=NULL;
			}
			else{
			
			tmp->next=head;
			head->pre=tmp;
			tmp->pre=NULL;
			head=tmp;}
		}
		// inserting node at end 
		void end(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
				if(head==NULL){
				head=tmp;
				head->next=NULL;
				head->pre=NULL;
			}
			else{
				node *t;
				t=head;
				while(t!=NULL){
					tmp->pre=t->next;
					t->next=tmp;
					tmp->next=NULL;
					t=t->next;
				}
			}
		}
		// insert node at given position
		void at_any_position(int index,int element){
		
			node *tmp;
			tmp=new node;
			tmp->data=element;
			node *t;
			t=head;
			for(int i=0;i<index;i++){
			
								t=t->next;
								

				}
			//}
			tmp->pre=t;
			tmp->next=t->next;
				t->next=tmp;

			
			}
			
	void delete_at_any_position(int position)		{
		node *curr;
		curr=head;
		node *pre_1;
		pre_1=new node;
		for(int i=0;i<position;i++){
			pre_1=curr;
			curr=curr->next;
			
		}
		pre_1->next=curr->next;
		delete curr;
	}
		//}
		
};
int main(){
	doubly d;
	d.front(5);
	d.end(4);
	d.front(1);
	d.end(8);
	d.end(1);
	d.front(23);
	d.at_any_position(1,7);
	d.delete_at_any_position(1);
	d.display();
}
