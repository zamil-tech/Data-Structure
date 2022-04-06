#include<iostream>
using namespace std;
class node{
	public:
		node *next;
		int data;
		node(){
			data=0;
			this->next=NULL;
		}
};
class graph{
	public:
		void read_graph(node *ad[],int no_of_vertex){
			node *new_node;
			int no_of_neighbours;	
			int value;
			int k;
			for(int i=0;i<no_of_vertex;i++){
				node *last=NULL;
				cout<<"enter the num of neighbours "<<i+1;
				cin>>no_of_neighbours;
				for(int  j=0;j<k;j++){
					cout<<"enter the value for  "<<j+1<<"of neighbour "<<i+1;
					cin>>value;
					new_node=new node;
					new_node->data=value;
					new_node->next=NULL;
					if(ad[i]==NULL) 	//IF FIRST ELEMENT IS null{
			{
				ad[i]=new_node;
					}		
					else{
						
						last->next=new_node;
						last=new_node;
					}
			}
			}
		}
		node *print_graph(node *ad[],int no_of_vertex){
			
		}
};

