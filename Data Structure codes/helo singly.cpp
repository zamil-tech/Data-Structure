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
		node(int n){
			data=n;
			this->next=NULL;
		}
};
class linked{
	public:
		node *head;
		linked(){
			this->head=NULL;
		}
		void front(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			if(head==NULL){
				head=tmp;
				
			}
			else{
				tmp->next=head;
				head=tmp;
			}
		}
		void end(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			if(head==NULL){
				head=tmp;
			}
			else{
				node *t;
				t=head;
				while(t->next!=0){
					t=t->next;
				}
				t->next=tmp;
				tmp->next=NULL;
			}
		}
		void insert_at_any_position(int element,int index){
			node *tmp;
			node *t;
			tmp=new node;
			tmp->data=element;
			for(int i=0;i<index;i++){
				t=t->next;
			}
			tmp->next=t->next;
			t->next=tmp;
			
		}
		void search(int element){
			node *tmp;
			tmp=head;
			int flag=0;
			while(tmp!=0){
				if(tmp->data==element){
					flag=1;
					break;
				}
				tmp=tmp->next;
			}
			if(flag==0){
				cout<<"element is not found "<<endl;
			}
			else{
				cout<<"element is found "<<endl;
			}
		}
		void sorting(){
			node *tmp;
			tmp=head;
			int item;
			node *t;
			while(tmp!=0){
				t=tmp->next;
				while(t!=0){
					if(tmp->data>t->data){
						item=tmp->data;
						tmp->data=t->data;
						t->data=item;	
					}
					t=t->next;
				}
				tmp=tmp->next;
			//	cout<<tmp->data<<" ";
			}
		}
		void count_(){
			node *tmp;
			tmp=head;
			int count=0;
			while(tmp!=0){
				count++;
				tmp=tmp->next;
			}
			cout<<"total nodes are "<<count<<endl;
		}
		void display(){
			node *t;
			t=head;
			//if(head==NULL){
				
			//}
			while(t!=0){
				cout<<t->data<<" ";
				t=t->next;
				
			}
		}
		
};
int main(){
	linked l;
	l.front(84);
	l.end(76);
	l.insert_at_any_position(45,1);
	//l.search(34);
	l.display();
	//l.sorting();
	cout<<"After sorting the elements are ";
	l.sorting();
		l.display();
		l.count_();

}
