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
			data=0;
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
	}		}
	void end(int data){
		node *tmp;
		tmp=new node;
		tmp->data=data;
		node *t=head;
		while(t->next!=head){
			t=t->next;
		}
		t->next=tmp;
		tmp->next=head;
	}
		void display(){
			node *tmp;
			if(head==NULL){
				cout<<"linked list is empty ";
			}
			tmp=head;
			while(tmp->next!=head){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
						cout<<tmp->data<<" ";

}	
void sorting(){
	node *tmp;
	tmp=head;
	node *t;
	int temp;
	while(tmp->next!=head){
		t=tmp->next;
		while(t!=head){
			if(tmp->data>t->data){
			//	swap(tmp->data,t->data);
			temp=tmp->data;
			tmp->data=t->data;
			t->data=temp;
			
			
			
			}
			t=t->next;
		}
		tmp=tmp->next;
	}
	cout<<"max= "<<t->data<<endl;
	cout<<"min= "<<tmp->data<<endl;
	
}
bool check(){
	if(head==NULL){
		return true;
	}
	node *tmp=head->next;
	while(tmp!=NULL && tmp!=head){
		tmp=tmp->next;
	}
	
	return (tmp==head);
}
};
int main(){
	circular c;
	c.front(12);
	c.front(11);
	c.end(223);
	
	c.front(123);
	//c.sorting();
	c.display();
	cout<<endl;
	c.sorting();
	c.display();
	if(c.check()){
		cout<<"its circular ";
	}
	else{
		cout<<"it is not ";
	}
}
