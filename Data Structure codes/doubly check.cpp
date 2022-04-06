#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node *pre;
		node(){
			data=0;
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
		void front(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			if(head==NULL){
				tmp->next=NULL;
				tmp->pre=NULL;
				head=tmp;
			}
			else{
				tmp->next=head;
				head->pre=tmp;
				tmp->pre=NULL;
				head=tmp;
			}
		}
		void end(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			if(head==NULL){
				tmp->next=NULL;
				tmp->pre=NULL;
				head=tmp;
				
			}
			else{
				node *t;
				t=head;
				while(t->next!=0){
					t=t->next;
				}
				tmp->next=NULL;
				t->next=tmp;
				tmp->pre=t;
				
			}
		}
		void insert_at_any_function(int element,int index){
			node *tmp;
			tmp=new node;
			tmp->data=element;
			node *t;
			for(int i=0;i<index;i++){
				t=t->next;
			}
			//t->next=tmp;
			tmp->next=t->next;
			t->next=tmp;
			tmp->pre=t;
			
		}
		void sorting(){
			node *tmp;
			tmp=head;
			node *t;
			int item;
			
			
			while(tmp!=0){
				t=tmp->next;
				while(t!=0)	{
					if(tmp->data>t->data){
						item=tmp->data;
						tmp->data=t->data;
						t->data=item;	
					}
					t=t->next;
				}
				tmp=tmp->next;
			}
		}
		void counting(){
			node *tmp;
			tmp=head;
			int count=0;
			while(tmp!=0){
				count++;
				tmp=tmp->next;	
			}
			cout<<" tOtal nodes "<<count<<endl;
			
		}
		void display(){
			node *tmp;
			tmp=head;
			while(tmp!=NULL){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
		}
};
int main(){
	doubly d;
	d.front(35);
		d.insert_at_any_function(12,0);

	d.end(34);
//	d.insert_at_any_function(12,1);
	d.display();
	cout<<endl;
	d.sorting();
	cout<<"after sorting "<<endl;
	d.display();
	d.counting();
}
