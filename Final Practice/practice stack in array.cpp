#include<iostream>
using namespace std;
class stack{
	int top;
	public:
		//int top;
		int arr[5];
		stack(){
			top=-1;
			
		}
		void push(int data){
			if(top>5){
				cout<<"stack is full ";
			}
			else{
				top++;
				arr[top]=data;
			}
		}
		int pop(){
			if(top<0){
				cout<<"stack is empty ";
			}
			else{
				top--;
				return arr[top];
			}
		}
		int peek(){
			if(top<0){
				return -1;
		}
		else{
			return (arr[top]);
		}
		
		
		}
		void display(){
			while(top>0){
				cout<<arr[top]<<" ";
				top--;
			}
		}
		
};
int main(){
	stack s;
	s.push(11);
	s.push(12);
	s.push(13);
	s.push(15);
	cout<<s.peek();
	cout<<endl;
	s.display();
}
