#include<iostream>
#define n 6
using namespace std;
class Queue{
	public:
		int front=-1;
		int rear=-1;
		int arr[n];
		bool enque(int data){
			if(rear==n-1){
				cout<<"overflow ";
				return false;
			}
			else if(front==-1)
			front=0;
			else {
				rear++;
			//	front++;
			
				arr[rear]=data;
				return true;
			}
		}
		int deque(){
			if(front<0){
				cout<<"underflow ";
			}
//			else if(front==-1)
//			front=0;
			else{
			 		cout<<"delete element "<<arr[front];
				front++;;
							//	cout<<"deleted element 2"<<arr[front];

//				int s;
//				s=a
				
			}
		}
};
int main(){
	Queue q;
	q.enque(34);
	q.enque(23);
//	q.deque();
q.en/que(12);

	q.deque();
}
