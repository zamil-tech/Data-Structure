#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(){
			data=0;
			this->next=NULL;
			//this->rear=NULL;
		}
};
class queue{
	public:
		node *front,*rear;
		queue(){
			this->front=NULL;
			this->rear=NULL;
		}
		void enqueue(int data){
			node *tmp;
			tmp=new node;
			tmp->data=data;
			if(front==NULL && rear==NULL){
				front=tmp;
				rear=tmp;
	
			}
			else{
				rear->next=tmp;
				rear=tmp;
				
			}
		}
		void display(){
			node *tmp;
			tmp=front;
			while(tmp!=NULL){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
		}
		
};
int main(){
	queue q;
	q.enqueue(13);
	//q.display();
	q.enqueue(1221);
	q.display();
	cout<<"after deletioin ";
q
}
