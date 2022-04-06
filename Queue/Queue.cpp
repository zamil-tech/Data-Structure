#include<iostream>
# define N 4
using namespace std;
int queue[N];
int front=-1;
int rear=-1;
void enqueue (int x){
	if(rear==N-1){
		cout<<"Overflow ";
	}
	
	else{
		rear++;
		queue[rear]=x;
	//	cout<<queue[rear];
		
	}
}
void display(){
	while(front!=rear){
				front++;

		cout<<queue[front]<<" ";
		//front++;
		
		
	}
}
void dequeue(){
	if(front==-1&&rear==-1){
		cout<<"UnderFlow ";
	}
	else
	{
				front++;

		cout<<"Delted element is "<<queue[front];
//		front++;
		
	}
}

bool isfull(){
	if(rear>=N){
		return true;
	}
	else{
	return false;
	}
}

int main(){
	enqueue(1);
	enqueue(2);
	enqueue(23);
	enqueue(233);
	isfull();
	enqueue(231);
	//dequeue();
	cout<<endl;
	display();
}
