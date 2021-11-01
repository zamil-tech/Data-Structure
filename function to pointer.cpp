#include<iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int main(){
	int (*fuptr)(int ,int);
	fuptr=add;
	int s=fuptr(3,4);
	cout<<*fuptr;
//	cout<<"address"<<&add;
}
