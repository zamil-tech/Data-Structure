#include<iostream>
using namespace std;
class stack{
	int top;
	//int ax;
	public:
		//int max;
		int arr[6];
		stack(){
			top=-1;
			//ax=5;
		}
		bool push(int n){
			if(top>=5){
				cout<<"stack overflow ";
				return false;		
			}
			else{
				arr[++top]=n;
				cout<<n<<" is pushed into stack \n ";
				return true;
				
				
			}
		}
		int pop(){
		if(top<0){
			cout<<"underflow ";
			return 0;
		}
		else{
			int n=arr[--top];
			return n; 
			
		}}
		int peek(){
			if(top<0){
				cout<<"stack is empty ";
				return 0;
			}
			else{
				int n=arr[top];
				return n;
			}
		}
		bool isempty(){
			return (top<0);
		}
		
		
};
int main(){
	stack s;
	int n;
	cout<<"enter the value of n ";
	cin>>n;
	for(int i=0;i<n;i++){
		s.push(i);
	//	s.peek();
	//	s.pop();
	}
}
