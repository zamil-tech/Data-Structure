#include<iostream>
#define n 9
using namespace std;
class stack{
	int top;
	public:
		int arr[n];
		stack(){
			top=-1;
		}
		
		bool push(int data){
			if(top>n-1){
				//cout<<"staack is overflowing ";
				return false;
			}
			else{
				top++;
				arr[top]=data;
				return true;
			}
		}
		int peek(){
			if(top>n-1){
				cout<<"stack overflow ";
			}
			else{
				cout<<arr[top]<<" ";
				
			}
		}
		int pop(){
			if(top<0){
				cout<<"Stack is empty ";
				return 0;
			}
			else{
				--top;
				int data=arr[top];
				return data;
			}
		}
		bool isfull(){
		return(top>n);
		}
		bool isempty(){
			return(top<0);
		}
};
int main(){
	stack s1;

	
	s1.push(12);
	s1.push(24);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(8);
	s1.push(7);
	s1.push(6);
	s1.push(9);
//	s1.push(90);
//	s1.push(7);
//	s1.push(6);
	s1.push(9);
	s1.push(90);
//	s1.isfull();
	for(int i=0;i<11;i++){
		s1.peek();
		s1.pop();
	}
	
}
