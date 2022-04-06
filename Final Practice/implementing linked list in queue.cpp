#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(){
			this->next=NULL;
			data=0;
			
		}
};
class queue{
	public:
		node *front;
		node *rear;
		queue(){
			this->rear=NULL;
			this->front=NULL;
		}
		void insert(int data){
			node *tmp;
			tmp=new node;
			tmp->data=data;
			if(rear==NULL){
				front=rear=tmp;
				front->next=NULL;
				rear->next=NULL;
				
			}
			else{
				rear->next=tmp;
				rear=tmp;
						
			}
		}
		
		void display(){
			node *tmp=front;
			while(tmp!=NULL){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
		}
};
int main(){
	queue q;
	q.insert(12);
	q.insert(13);
	q.insert(45);
	q.display();
}
