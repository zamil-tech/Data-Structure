#include<iostream>
#include<list>
using namespace std;
class hashing{
	public:
		int bucket; // bucket is no of hashtable;
		list<int>* table;
		hashing(int x){
			bucket=x;
			
		}
		int hashfunction(int key){
			return (key%bucket);
			table=new list<int>[bucket];
		}
		void insert(int key){
			int index=hashfunction(key);
			table[index].push_back(key);
		}
		void display(){
			for(int i=0;i<bucket;i++){
				cout<<i;
				for(auto x: table[index])
				cout<<x;
				cout<<endl;
			}
		}
};

int main(){
	hashing h;
	h.insert(23);
	h.display();
}
