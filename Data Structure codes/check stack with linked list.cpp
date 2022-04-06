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
	
};
class stack{
	public:
		node *top;
		stack(){
			this->top=NULL;
		}
		void push(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			tmp->next=top;
			top=tmp;
		}
		void pop(){
			node *tmp;
			tmp=top;
			if(top==0){
				cout<<"there is no element ";
			}
			else{
			
			top=top->next;
			delete tmp;}
		}
		void peek(){
			node *tmp;
			tmp=top;
			if(top==0){
				cout<<"is empty ";
			}
			else{
			
			cout<<tmp->data<<endl;}
		}
		void display(){
			node *tmp;
			tmp=top;
			if(top==0){
				cout<<"empty "<<endl;
			}
			else{
				while(tmp!=0){
					cout<<tmp->data<<" ";
					tmp=tmp->next;
				}
			}
		}
		
};
int main(){
	stack s;
	s.push(34);
	s.peek();
	s.push(234);
	s.push(123);
	s.push(67);
	//s.pop();
	//s.peek();
	s.display();
}
