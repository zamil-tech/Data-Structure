#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node *pre;
		node(){
			this->next=NULL;
			data=0;
		}
};
class doubly{
	public:
		node *head;
		doubly(){
			this->head=NULL;
			
			
		}
		void front(int n){
		
			node *tmp;
			tmp=new node;
			tmp->data=n;
			if(head==NULL)	{
				head=tmp;
				tmp->next=head;
				tmp->pre=head;
			}
			else{
				node *t;
				t=head;
				while(t->next!=head){
					t=t->next;
				}
				tmp->next=head;
				
			tmp->pre=t->next;
				t->next=tmp;
			}
		}
		void end(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			if(head==NULL){
				head=tmp;
				tmp->next=head;
				tmp->pre=head;
			}
			else{
				node *t;
				t=head;
				while(t->next!=head){
					t=t->next;
				}
				t->next=tmp;
			//	tmp->next=head;
				tmp->pre=t;
				tmp->next=head;
				head->pre=tmp;
				
			}
		}
		void insert_at_any_position(int element,int index){
			node *tmp;
			tmp=new node;
			tmp->data=element;
			node *t;
			t=head;
			for(int i=1;i<index;i++){
				t=t->next;
				
			}
			tmp->next=t->next;
			tmp->pre=t;
			t->next=tmp;
			
		}
		void display(){
			node *tmp;
			tmp=head;
			while(tmp->next!=head){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
			cout<<tmp->data<<" ";
			
		}
};
int main(){
	doubly d;
	d.front(234);
	d.end(2);
	d.insert_at_any_position(12,1);
	d.display();
}

