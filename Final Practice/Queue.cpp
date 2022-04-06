#include<iostream>
#define N 6
using namespace std;
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int data){
	if(rear==N-1){
		cout<<"Overflow ";
	}
	else{
		rear++;
		queue[rear]=data;
	}
}
void dequeue(){
	if(front==-1&&rear==-1){
		cout<<"underflow ";
	}

	else{
				front++;

		cout<<"deleted element is "<<queue[front];
	}
	
}
void sort(){
	int agyon;
	while(front+1!=rear){
		agyon=front+1;
		while(agyon!=rear){
			if(queue[front]>queue[agyon]){
				swap(queue[front],queue[agyon]);
			}
			agyon++;
		}
		front++;
	}
}
void display(){
	while(front!=rear){
		front++;
		cout<<queue[front]<<" ";
	}
}
int main(){
	enqueue(5);
	enqueue(3);
	enqueue(4);
	
	enqueue(7);
//	dequeue();
	cout<<endl;
	sort();
	display();
//	display();
	
}
