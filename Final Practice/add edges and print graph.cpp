#include<iostream>
using namespace std;
class graph{
	public:
		void addedge(vector<int> adj[],int v,int u){
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		void printgraph(vector<int> adj[],int v){
			for(int i=0;i<v;i++){
				cout<<i;
				for(auto x: adj[i]){
					cout<<"----->"<<x;
				}
				cout<<endl;
			}
		}
};
int main(){
	graph g;
	int v=5;
	vector<int>adj[v];
	g.addedge(adj,0,1);
	g.addedge(adj,0,2);
	g.addedge(adj,0,3);
	g.printgraph(adj,v);
}
