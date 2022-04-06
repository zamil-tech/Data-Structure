#include<iostream>
using namespace std;
class node{
	public:
		node *next;
	 //node *front;
//	 node *rear;
	 
	 int data;
	 node(){
	 this->next=NULL;
	 data=0;
	 	
	 }
		
};
class Queue{
	public:
		node *Front;
		node *rear;
		Queue(){
			this->Front=NULL;
			this->rear=NULL;
		}
		void insert(int data){
			node *tmp;
			tmp=new node;
			
			tmp->data=data;
			if(rear==NULL&&Front==NULL){
				Front=tmp;
				rear=tmp;
			}
			else{
			
				rear->next=tmp;
				rear=tmp;
			}
		}
		void display(){
			node *tmp;
			if(Front==NULL && rear==NULL){
				cout<<"Queue is empty ";
			}
			else{
				tmp=Front;
				while(tmp!=NULL){
					cout<<tmp->data<<" ";
					tmp=tmp->next;
				}
			}
			
		}
		void deque(){
			node *tmp;
			tmp=Front;
			if(Front==0){
				cout<<"Is Empty ";
			}
			else{
				cout<<"Deleted "<<Front->data<<endl;
			
			Front=Front->next;
			delete tmp;}
		}
		void sort(){
			node *tmp;
			tmp=Front;
			node *p;
			while(tmp->next!=NULL){
				p=tmp->next;
				while(p!=NULL){
					if(p->data<tmp->data){
						swap(p->data,tmp->data);
					}
					p=p->next;
				}
				tmp=tmp->next;
			}
		}
		void search
		
};
int main(){
	Queue q;
	q.insert(2);
	q.insert(1);
	q.display();
//	q.deque();
	q.sort();
	cout<<"Elements after sort ";
	q.display();
//	q.display();
}
