#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(){
			data=0;
			this->next=NULL;
		}
		
};
class circular{
	public:
		node *head;
		circular(){
			this->head=NULL;
			
		}
		void front(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			if(head==NULL){
				head=tmp;
				tmp->next=head;
			}
			else{
				node *t;
				t=head;
				tmp->next=head;
				//head=tmp;
				while(t->next!=head){
					t=t->next;
				}
				t->next=tmp;
				head=tmp;
				
				
			}
		}
		void end(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			if(head==NULL){
				//tmp=head;
				head=tmp;
				tmp->next=head;
				
				
			}
			else{
				node *t;
				t=head;
				while(t->next!=head){
					t=t->next;
				}
				t->next=tmp;
				tmp->next=head;
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
		//	t->next=tmp;
			tmp->next=t->next;
			t->next=tmp;
		}
		
		void display(){
			node *tmp;
			if(head==NULL){
				cout<<"empty ";
			}
			tmp=head;
			while(tmp->next!=head){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
			cout<<tmp->data<<" ";
		}
};
int main(){
	circular c;
	c.front(234);
	c.end(6);
	c.front(34);
	c.insert_at_any_position(11,1);
	c.display();
	
}

