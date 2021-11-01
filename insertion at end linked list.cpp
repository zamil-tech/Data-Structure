#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
	node(const int data)		{
		this->data=data;
		this->next=NULL;
	}
	node(){
		this->data=0;
		this->next=NULL;
	}
	
		
};
class linkedlist{
	public:
		node *head,*tail;
		linkedlist(){
			this->head=NULL;
			this->tail=NULL;
		}
		void display(){
			node *tmp;
			tmp=head;
			while(tmp!=NULL){
				 cout<<tmp->data<<endl;
				 tmp=tmp->next;
			}
		}
		void front(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			tmp->next=head;
			head = tmp;
		}
		void add_one(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			tmp->next=NULL;
			if(head==NULL){
				head=tmp;
				tail=tmp;
				//cout<<head<<tail<<endl;
			}
			else{
				tail->next=tmp;
				tail=tail->next;
			//	cout<<head<<endl<<tail;
			}
		}
//		void insert(int in,int element){
//			node *tmp=new node;
//			node *p;
//			p=head;
//			for(int i=1)
//		}
		void dlt(int index){
			node *tmp;
			tmp=head;
			for(int i=1;i<index;i++){
				tmp->next=tmp;
			}
			delete tmp;
		}
		
};
int main(){
	linkedlist l1;

	//l1.linkedlist();
 		l1.front(4);
		l1.add_one(4);
			l1.display();
		//l1.dlt(1);
		l1.display();
		return 0;
}
