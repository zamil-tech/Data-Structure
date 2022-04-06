#include<iostream>
using namespace std;
int main(){
//	int *ptr=new int;  // new intger
//	int *ptr1=new int[5]; //new array 
//	int *arr{new int[4]{}};
//	int *array{new int [4]{2,3,4,5}};
//	for(int i=0;i<4;i++){
//		cout<<*(arr+i)<<endl;
//	}
//cout<<"----- Dynamic 2d Array ";
//int n,m;
//cout<<"enter the n and m ";
//cin>>n>>m;
//
//int **arr=new int*[n];
//for(int i=0;i<n;i++){
//	arr[i]=new int[m];
//}

int tmp;
int *arr{new int[10]{1,23,4,5,6,7,8,9,0,10}};
cout<<"elements before sorting are ";
for(int i=0;i<10;i++){
	cout<<*(arr+i)<<" ";
}
for(int i=0;i<10;i++){
	for(int j=i+1;j<10;j++){
		if(arr[i]<arr[j]){
			tmp=arr[i]	;
			arr[i]=arr[j];
			arr[j]=tmp;
		}
	}
}

cout<<endl;
cout<<"elements after sorting in decending order  are ";
for(int i=0;i<10;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"elements after sorting in ascending order are ";
for(int i=0;i<10;i++){
	for(int j=i+1;j<10;j++){
		if(arr[i]>arr[j]){
			tmp=arr[i]	;
			arr[i]=arr[j];
			arr[j]=tmp;
		}
	}
}
for(int j=0;j<10;j++){
	cout<<arr[j]<<" ";
}
	
	
	
}
