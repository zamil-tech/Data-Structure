#include<iostream>
using namespace std;
class node{
	public:
		node *next;
		node *pre;
		int data;
		node(){
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
		void insert_at_start(int data){
			node *tmp;
			tmp=new node;
			tmp->data=data;
			if(head==NULL){
				head=tmp;
				
			}
			else{
				
				tmp->next=head;
				head=tmp;
				head->pre=NULL;
			}
			
		}
		void insert_at_end(int data){
			node *tmp;
						node *curr=new node;
curr->data=data;
			if(head==NULL){
				head=curr;
				curr->next=NULL;
				curr->pre=NULL;
				//return;
			}
			else{
			
			tmp=head;
			while(tmp->next!=NULL){
				tmp=tmp->next;
			}
			//curr->data=data;
			tmp->next=curr;
			curr->pre=tmp;}
			
		}
		void insert_at_position(int position,int data){
			node *tmp;
			node *curr;
			curr=head;
			tmp=new node;
			tmp->data=data;
			for(int i=1;i<=position;i++){
				curr=curr->next;
			}
			curr->next=tmp;
			tmp->pre=curr;
		}
		void dislay(){
			node *tmp;
			tmp=head;
			while(tmp!=NULL){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
		//	cout<<tmp->data;
		}
		void searching(int data){
			node *tmp;
			tmp=head;
			int flag=0;
			while(tmp!=NULL){
				if(data==tmp->data){
					flag=1;
					break;
				}
				else{
					tmp=tmp->next;
				}
			}
			if(flag==1){
				cout<<"element is present ";
			}
			else{
				cout<<"element is not presesnt ";
			}
		}
		
		void sort(){
			node *tmp;
			tmp=head;
			node *curr;
			while(tmp->next!=NULL){
				curr=tmp->next;
				while(curr!=NULL){
					if(tmp->data>curr->data)
					swap(curr->data,tmp->data);
					curr=curr->next;
				}
				tmp=tmp->next;
			}
		}
};
int main(){
	doubly d;
//	d.insert_at_start(213);
d.insert_at_end(1);
	d.insert_at_start(12);
	
	d.insert_at_start(123);
//	d.insert_at_position(1,34);
	//d.insert_at_end(21);
	d.dislay();
	cout<<endl;
	d.sort();
	d.dislay();
	d.searching(12);
}
