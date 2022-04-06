#include<iostream>
using namespace std;
void maxHeap(int arr[],int n,int value){
	int parent;
	int i;
	n++;
	i=n;
	while(i>1){
		parent=i/2;
		if(arr[parent]<arr[i]){
			swap(arr[parent],arr[i]);
			i=parent;
		}
		else{
			return;
		}
	}
	;
}
void deletion(int arr[],int n){
	cout<<"deleting element  :"<<arr[1]<<endl;
	arr[1]	=arr[n];
	n--;
	int i=1;
	while(2*i<n || 2*i+1<n){
		if(2*i >= 2*i+1){
			swap(arr[i],arr[2*i]);
			i=2*i;
		}
		else{
			swap(arr[i],arr[2*i+1]);
			i=2*i+1;
		}
	}

}
int main(){
	int n;
	cout<<"enter the value of N ";
	cin>>n;
	int arr[n];
	cout<<"enter the values of array ";
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
//int arr[] = {INT_MIN, 3, 2, 5, 6, 7, 9, 8, 2, 4};
//     n = sizeof(arr) / sizeof(int);
//    n = n - 1;
int k=0;
//	for(int i=1;i<=n;i++){
//		maxHeap(arr,k,arr[i]);
//		k++;
//		
//	}
	cout<<"max Heap of array iz ";
	
	for(int i=1;i<n;i++){
		cout<<arr[i]<<" ";
	}
	 k=n;
	 cout<<endl;
	for(int i=1;i<=n;i++){
		
		deletion(arr,k);
		k--;
	}
	
}


