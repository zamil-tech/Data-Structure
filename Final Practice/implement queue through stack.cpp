#include<iostream>
#include<queue>
using namespace std;
class stack{
	queue<int>q1,q2; // two queues
	int curr_size;
	public:
		stack(){
			curr_size==0;
		}
		void push(int data){
			curr_size++;
			q2.push(data);
			while(!q1.empty()){
				q2.push(q1.front());
				q1.pop();
			}
		
		queue<int>q=q1;
		q1=q2;
		q2=q;
		}
		void pop(){
			if(q1.empty()){
				return;
			}
			q1.pop();
			curr_size--;
		}
		int top(){
			if(q1.empty()){
				return -1;
			}
			else{
				return q1.front();
			}
		}
		
		
		
};
int main(){
	stack s;
	s.push(1);
	s.push(2);
	cout<<s.top();
	s.pop();
}
