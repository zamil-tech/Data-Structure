#include<iostream>
using namespace std;
class queue{
	int front;
	int rear;
	//int _size;
	public:
		
		queue(int n){
			front=-1;
			rear=-1;
		}
		
		
		int arr[5];
		void enqueue(int data)
		{
			if(rear>5-1){
				//rear++;
				cout<<"queue is full ";
				
			}
//			if(front==-1){
//				front=0;
//			}
			else{
				rear++;
				arr[rear]=data;
			}
		}
		void dequeue(){
			front=0;
			if(rear==-1){
				cout<<"queue is empty ";
			}
			else{
//				cout<<"deleted element is "<<arr[front];
				
//				front++;
			//	cout<<"front "<<front;
								cout<<"deleted element is "<<arr[front]<<endl;
												front++;

					//	return arr[front];
			}
		}
		void display(){
			if(front==-1&&rear==-1){
				cout<<"stack is empty ";
			}
			else{
		//		cout<<front<<" front ";
		//		cout<<arr[front];
				while(front!=rear){
		front++;			
								//front++;

				cout<<arr[front]<<" ";
				//front++;
			}
			}
		}
		
		
};
int main(){
	queue 	q(5);
	q.enqueue(23);
	q.enqueue(13);
	q.enqueue(21);
	q.enqueue(11);
	q.enqueue(134);
	q.enqueue(10);
	q.display();
	cout<<endl;
	q.dequeue();
}
