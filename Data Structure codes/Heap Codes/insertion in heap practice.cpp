#include<iostream>
using namespace std;
class heap{
	public:
	
		void insert(int arr[],int n,int value){
			int parent;
			int i;
			n++;
			i=n;
			while(i>0){
				parent=i/2;
				if(arr[parent]<arr[i]){
					swap(arr[parent],arr[i]);
					i=parent;
				}
				else{
					return;
				}
			}
			
		}
		void delete_heap(int arr[],int n){
			cout<<"delted element "<<arr[1]<<endl;
			arr[1]=arr[n];
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
		void display(int n,int arr[]){
			//int i=0;
			for(int i=1;i<=n;i++){
				cout<<arr[i]<<" ";
			}
		}
};
int main(){
	heap x;
	int n;
	cout<<"enter value of n ";
	
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	x.insert(arr,n,23);
	x.display(n,arr);
	cout<<endl;
	int k=n;
	for(int i=0;i<n;i++){
	x.delete_heap(arr,k);
		k--;
	}
}
