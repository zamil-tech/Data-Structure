#include<iostream>
#include<list>
using namespace std;
class hash{
	public:
		int bucket;
		list<int>* table;
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
				cout<<"-------->"<<x;
				cout<<endl;
			}
		}
};
int main(){
	hash h;
	h.insert(123);
}
