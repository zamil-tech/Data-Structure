#include<iostream>
using namespace std;
// n is total number of elements in elements
//i is at which heapify method is called
void maxHeapify(int arr[],int n,int i){
	int largest=i; 
	int l=2*i;
	int r=2*i+1;
	while(l<=n && arr[l]>arr[largest]){
		largest=l;
	}
	while(r<=n && arr[r]>arr[largest]){
		largest=r;
	}
	if(largest!=i){
		swap(arr[i],arr[largest]);
		maxHeapify(arr,n,largest);
	}
	
	
}
int main(){
	int n;
	cout<<"enter n ";
	cin>>n;
	cout<<"enter the elements of array ";
	int arr[n];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	cout<<endl;
//	for(int i=1;i<=n;i++){
//		cout<<arr[i]<<" ";
//	}
	maxHeapify(arr,n,1);
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
}
