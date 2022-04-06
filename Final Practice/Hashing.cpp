#include<iostream>
#include<list>
using namespace std;
class hash{
	public:
		int bucket;  // size of hash table
		list<int>*table;
		hash(int x){
			bucket=x;
			table=new list<int>[bucket];
		}
		int hashfunction(int key){
			return (key%bucket);
		}
		void insert(int key){
			int index=hashfunction(key);
			table[index].push_back(key);
		}
		void display(){
			for(int i=0;i<bucket;i++){
			
				cout<<i;
				for(auto x:table[i])
					cout<<"---->"<<x;
					cout<<endl;
				
			
		}}
		
		void deletion(int key){
			int index=hashfunction(key);
			list<int>::iterator i;
			for(i=table[index].begin();i!=table[index].end();i++){
				if(*i==key){
					break;
				}
			}
			if(i!=table[index].end())
			table[index].erase(i);
		}
};
int main(){
	hash h;
	int arr[4]={34,4,2,44};
	for(int i=0;i<4;i++)
	h.insert(arr[i]);
	h.display();
}
