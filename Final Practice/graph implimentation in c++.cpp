#include<iostream>
using namespace std;
class node{
	public:
		int vertex_no;
		node *next;
};
class graph{
	public:
		int vertex; // graph has vertex 
		int edge;// graph has edges;
		node *adj;// node type adj 
		graph *adjlist_of_graph(){
			int i,x,y;
			node *temp;
			graph *g;
			g=new graph;
			cout<<"enter the number of vertices and edges ";
			cin>>g->vertex>>g->edge; 	
			g->adj=new node;
			for(int j=0;j<g->vertex;j++){
				g->adj[j]->vertex_no=j;
			}
			//g->adj=g->adj*g->vertex;
			
		}
};
