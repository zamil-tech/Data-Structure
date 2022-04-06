#include<iostream>
#define n 5
using namespace std;
class Queue{
	//public:
		int front;
		int rear;
		public:
			int arr[n];
		Queue(){
			front=-1;
			rear=-1;
		}
		void enquue(int data){
			if(rear>n)		{
				cout<<"overflow ";
			}
			else{
				if(front<0){
					front=0;
					
				}
				rear++;
				arr[rear]==data;
				cout<<"inserted element is "<<arr[rear];
			}
		}
		void dequue(){
//			int element=arr[front];
			if(front==-1 && rear==-1){
				cout<<"oops Dear stck is empty ";
			}
			else{
			 int element = arr[front];
      if (front >= rear) {
        front = -1;
        rear = -1;
      } /* Q has only one element, so we reset the queue after deleting it. */
      else {
        front++;
      }
      cout << endl
         << "Deleted -> " << element << endl;
      //return (element);
		}
	
		}
		void display(){
			if(rear<0){
				cout<<"stack is empty ";
			}
			else{
				for(int i=front;i<=rear;i++){
					cout<<arr[i]<<" ";
				}
			}
		}
		
};
int main(){
	Queue q;
	q.enquue(879);
	q.enquue(23254);
	q.enquue(1);
	q.display();
	//q.dequue();
}
