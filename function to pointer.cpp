#include<iostream>
using namespace std;
int main(){
	void (*funptr)(int,int);
	
	
	
	void add(int a,int b)
	{
		cout<<a<<"+"<<b<<"= "<<a+b<<endl;
	}
	void subtract(int i,int j){
		cout<<i<<"-"<<j<<"= "<<i-j<<endl;
	}
}
int main(){
	funptr ptr; // ptr is object of pointer function
	ptr=&add;
	ptr(3,2);
	cout<<endl;
	ptr=&subract;
	ptr(4,5);
}
