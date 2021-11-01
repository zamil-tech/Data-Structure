#include<iostream>
using namespace std;
int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int *p;
	//p=&arr[0][0];
	p=arr[0];
	cout<<*p;
	return 0;
}
