#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		
		node(){
			data=0;this->next=NULL;
		}
		node(int n){
			data=n;
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
				//tmp->next=head;
				node *t;
				t=head;
			
				while(t->next!=head){
					t=t->next;
				}
			tmp->next=head;
				//head->next=tmp;
				t->next=tmp;
				//tmp->next=head;
				head=tmp;
			}
		}
		void end(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			node *t;
			
			if(head==NULL){
				head=tmp;
				tmp->next=head;
			}
			else{
			t=head;	
			while(t->next!=head){
				t=t->next;
			}
			t->next=tmp;
			tmp->next=head;
			
		}
		}
		void insert_at_any_position(int element,int index){{
		}
			node *tmp;
			tmp=new node;
			tmp->data=element;
			node *t;
			t=head;
			for(int i=0;i<index;i++){
				t=t->next;
			}
			tmp->next=t->next;
			t->next=tmp;
		}
		void sorting(){
			node *tmp;
			tmp=head;
			int check;
			node *t;
		//for(int i=0;i<)
		while(tmp->next!=head){
			t=tmp->next;
			while(t!=head){
				if(tmp->data>t->data){
					check=tmp->data;
					tmp->data=t->data;
					t->data=check;
				}
				t=t->next;
			}
			tmp=tmp->next;
		}
		cout<<"max "<<tmp->data<<endl;
		cout<<"min "<<t->data;
		}
		void display(){
			node *tmp;
			if(head==NULL){
				cout<<"emty ";
			}
			tmp=head;
//							cout<<tmp->data<<" ";

			while(tmp->next!=head){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
			cout<<tmp->data<<" ";

		}
};
int main(){
	circular c;
	c.front(2);
	c.end(3);
	c.insert_at_any_position(6,1);
	//c.sorting();
	c.display();
	c.sorting();
}
