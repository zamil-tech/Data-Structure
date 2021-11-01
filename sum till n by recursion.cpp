#include<iostream>
using namespace std;
int recursion(int n){
	int x;
	if(n==1){
		return 1;
	}
	 
	return n+recursion(n-1);
	
//	cout<<x<<endl;
//cout<< n+x<<endl	;
}
int main(){
	cout<<recursion(100);
}

