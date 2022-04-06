#include<iostream>
using namespace std;
class node{
	public:
		node *next;
		int data;
		node(){
			this->next=NULL;
			data=0;
		}
};
class stack{
	public:
		node *top;
		stack(){
			this->top=NULL;
		}
		bool push(int data){
			node *tmp;
			tmp=new node;
			tmp->data=data;
			if(top==NULL){
				top=tmp;
				top->next=NULL;
			}
			else{
				tmp->next=top;
				top=tmp;
				
			}
		}
		int pop(){
			node *tmp;
			tmp=top;
			top=top->next;
			cout<<"deleted element "<<tmp->data<<" ";
			delete tmp;
		}
		
		void display(){
			node *tmp;
			tmp=top;
			while(tmp!=NULL){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
			
		}
		void sort(){
			node *Next;
			node *curr;
			curr=top;
			while(curr->next!=NULL){
				Next=curr;
				while(Next!=NULL){
					if(curr->data>Next->data){
						swap(curr->data,Next->data);
					
					}
									//cout<<"min "<<Next->data;

					Next=Next->next;
					
					
					
				}

				curr=curr->next;
			}
						//	cout<<"min "<<Next->data;
						//	cout<<endl;
						//	cout<<"max "<<curr->data;

		}
		void search(int data){
			node *tmp;
			tmp=top;
			int flag=0;
			while(tmp!=NULL){
				if(tmp->data==data){
					flag=1;
					break;
				}
				tmp=tmp->next;
			}
			if(flag==1){
				cout<<"element is present "<<endl;
			}
			else{
				cout<<"Element is Not present "<<endl;
			}
		}
		
};

int main(){
	stack s;
	s.push(123);
	s.push(11);
	s.push(133);
	s.push(34);
	s.pop();
	cout<<endl;
	cout<<"---------------------------------------------traversing the stack elements---------------------------------------------"<<endl;
	s.display();
	cout<<endl;
	cout<<"------------------------------------------------Sorted eLements---------------------------------------------------------"<<endl;
	s.sort();
	s.display();
	cout<<endl;
	s.search(11);
}
