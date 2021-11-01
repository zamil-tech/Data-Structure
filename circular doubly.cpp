#include<iostream>
using namespace std;
class node{
	public:
		node *next;
		node *pre;
		int data;
		node(){
			data=0;
			this->next=NULL;
			this->pre=NULL;
		}
		node(int n){
			data=n;
			this->next=NULL;
			this->pre=NULL;
		}
		
			
};
class circular_doubly{
	public:
		node *head;
		circular_doubly(){
			this->head=NULL;
		}
		void front(int n){
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
				tmp->next=head->next;
				tmp->pre=t->next;
				head=tmp;
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
				tmp->pre=t;
				head->pre=tmp;
				tmp->next=head;
			}
			
		}
		void insert_at_point(int element,int index){
			node *tmp;
			tmp=new node;
			tmp->data=element;
			node *t;
			t=head;
			for(int i=0;i<index;i++){
				t=t->next;
			}
		//	t->next=tmp;
			tmp->pre=t;
			tmp->next=t->next;
			t->next=tmp;
			
		}
		void display(){
			node *t;
			t=head;
			if(head==NULL){
				cout<<"No DATA ";
			}
			else{
				while(t->next!=head){
					cout<<t->data<<" ";
					t=t->next;
				}
				cout<<t->data<<" ";
			}
		}
};
int main(){
	circular_doubly d;
	d.front(1);
	d.end(4);
	d.insert_at_point(3,1);
	d.display();
}
