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
		}
		node(int n){
			data=n;
			this->next=NULL;
		}
};
class doubly{
	public:
	node *head;
	doubly()	{
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
			tmp->next=head->next;
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
			tmp=head;
		}
		else{
			node *t;
			t=head;
			while(t->next!=NULL){
				t=t->next;
			}
			//tmp->next=t->
			t->next=tmp;
			tmp->pre=t;
			tmp->next=NULL;
			
		}
	}
	void insert(int index,int element){
		node *tmp;
		tmp=new node;
		tmp->data=element;
		//while(tmp->next!=NULL){
			
		//}
		node *t;
		t=head;
		for(int i=1;i<index;i++){
		t=t->next;	
		//}
		
}
//tmp->next=t
tmp->pre=t;
tmp->next=t->next;
t->next=tmp;


	}
	void search(int element){
		node *tmp;
		int flag=0;
		tmp=head;
		while(tmp!=NULL){
			if(tmp->data==element){
				
				cout<<"found the element ";
				flag=0;
				break ;
			}
			else{
				//tmp=tmp->next;
				//out<<"ot dou";
				flag=1;
			}
			tmp=tmp->next;
			
		}
		if(flag==1){
			cout<<"not found ";
		}
	}
	void reverse(){
		
	}
	void display(){
		node *tmp;
		tmp=head;
		while(tmp!=0){
		
		cout<<tmp->data<<"	";
		tmp=tmp->next;	
	}
	}
};
int main(){
	doubly d;
	d.front(3);
	d.end(2);
	d.insert(1,3);
	cout<<endl;
		d.display();
cout<<endl;
	d.search(8);
	//d.display();
}
