#include<iostream>
#define n 4
using namespace std;
class stack{
	int top;
	public:
		int arr[n];
	stack(){
		top=-1;
		
	}
	bool push(int data){
		if(top>n){
			cout<<"Stack is Full ";
		}
		else{
			top++;
			arr[top]=data;
		}
		
	}
	int pop(){
		int deleted;
		if(top<0){
			cout<<"Stack is empty ";
		}
		else{
			cout<<"deleted element is "<<arr[top];
			top--;
		}
	}
	void display(){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
	void sort(){
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]>arr[j]){
					swap(arr[i],arr[j]);
				}
			}
		}
	}
	void 
};
int main(){
	stack s;
	s.push(3123);
	s.push(123334);
	s.push(5242);
	s.display();
	s.pop();
	cout<<endl;
	cout<<"After srting "<<endl;
	s.sort();
	s.display();
}
