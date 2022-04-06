#include<iostream>
using namespace std;
class node{
	public:
		node *next;
		int data;
		node(){
			this->next=NULL;
			data=0;
		}
};
class singly{
	public:
		node *head;
		singly(){
			this->head=NULL;
		}
		void insert_at_front(int data){
			node *tmp;
			tmp=new node;
			tmp->data=data;
			if(head==NULL){
				head=tmp;
				tmp->next=NULL;
			}
			else{
				tmp->next=head;
				head=tmp;
				
			}
		}
	//	void min(){
			
	//	}
		
		void sort(){
			
			node *curr;
			node *tmp;
			curr=head;
			int temp;
			int t;
			tmp=curr->next;
			while(curr->next!=NULL){
			//	tmp=curr;
				while(tmp!=NULL){
					if(curr->data>tmp->data){
						temp=curr->data;
						curr->data=tmp->data;
					tmp->data=temp;
					t=tmp->data;
				//	cout<<tmp->data<< " ";
					}
					tmp=tmp->next;
				}
				//	cout<<"its min "<<tmp->data; 
				curr=curr->next;
			}
			cout<<"its max "<<curr->data<<"  ";
			cout<<endl;
			//cout<<"its min "<<t; 
		
			
		}
		// midle element
		void count(){
			node *tmp;
			int count=0;
			tmp=head;
			while(tmp!=NULL){
				count++;
				tmp=tmp->next;
			}
			cout<<"Total nodes are: "<<count;
			count=count/2;
			node *t=head;
			for(int i=1;i<count;i++){
				t=t->next;
			}
			cout<<endl;
			cout<<"middle element is: "<<t->data;
		}
		
		void duplicate(){
			node *tmp;
			node *t;
			tmp=head;
			while(tmp->next!=NULL){
				t=tmp->next;
				while(t!=NULL){
					if(tmp->data==t->data){
						
						tmp->next=t->next;
					//	delete t;
						
						
						//delete t;
					//	break;
						
					}
					//else{
						t=t->next;
					//}
				}
				tmp=tmp->next;
			}
		}
		void reverse(){
			node *curr,*pre,*next;
			curr=head;
			pre=NULL;
			next=NULL;
			while(curr!=NULL){
				next=curr->next;
				curr->next=pre;
				pre=curr;
				curr=next;
				
			}
			head=pre;
		}
		void deletion_at_front(){
			
			node *tmp;
			tmp=head;
			if(head==NULL){
				return;
			}
			else{
				//tmp=head->next;
				head=tmp->next;
				
				cout<<"deleted element is "<<tmp->data;
				delete tmp;
				
				
				
			}
		}
		void insertion_at_end(int data){
			node *tmp;
			tmp=new node;
			tmp->data=data;
			if(head==NULL){
				head=tmp;
				tmp->next=NULL;
				
			}
			else{
				node *t;
				t=head;
				
				while(t->next!=NULL){
					t=t->next;
				}
				t->next=tmp;
				tmp->next=NULL;
				
			}
		}
		//Delete Middle element
		void deletion_of_middle(){
			node *tmp;
			tmp=head;
			int count=0;
			while(tmp!=NULL){
				count++;
				tmp=tmp->next;
			}
			cout<<tmp->data<<" ";
			count=count/2;
			node *t;
			t=head;
		while(count>1){
			t=t->next;
			count--;
		}
			t->next=t->next->next;
		}
		void searching(int element){
			node *tmp;
			int flag=0;
			tmp=head;
			while(tmp!=NULL){
				if(tmp->data==element){
					flag=1;
					break;
				}
				else{
					flag=0;
				}
				tmp=tmp->next;
			}
			if(flag==1){
				cout<<"element found ";
			}
			else{
				cout<<"element nOt fouNd ";
			}
		}
		void deletion_at_end(){
			node *tmp;
			node *t;
			if(head==NULL){
				return;
		}
		else{
			t=head;
			while(t!=NULL){
				tmp=t;
				t=t->next;
			}
	//	t=t->next;
			tmp->next=NULL;
			cout<<"deleted element from end is "<<tmp->data;
			delete tmp;
			
		}
		}
		//check loop exist or not
		bool checing_loop(){
			if(head==NULL){
				return false;
			}
			node *high=head; // high is incremented by 2
			node *low=head; //low is incremented by 1
			//unordered_map<node *,int> m;
			while(high!=NULL && high->next!=NULL){
				low=low->next;
				
				high=high->next->next;
				if(low==high){
					cout<<"LOop exist ";
					return true;
				}
				}
				return false;
			
			}
		
		
		
		// Display Function
		void display(){
			node *tmp;
			tmp=head;
			while(tmp!=NULL){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
		}
};
int main(){
	singly s;
	s.insert_at_front(12);
	s.insert_at_front(11);
	s.insertion_at_end(21);
	s.insertion_at_end(44);
	s.insert_at_front(11);
	
//	

//cout<<endl;
	cout<<"---------------------counting the nodes and finding the middle element-----------:";
	cout<<endl;
	s.count();

		cout<<endl;
		cout<<"--------------------------Before sorting------------ "<<endl;
		s.display();
		cout<<endl;
		cout<<"-----------------------after sorting------------------------ "<<endl;
		s.sort();
		s.display();
		cout<<endl;
			s.duplicate();
	cout<<"-------------after deleting duplicate element----------------------"<<endl;
	s.display();
	cout<<endl;
		cout<<"------------------------after reversing the data ---------------------"<<endl;
		s.reverse();
		s.display();
		cout<<endl;
		cout<<"------------------------deletion at fron----------------------"<<endl;
	s.deletion_at_front();
	cout<<endl;
	cout<<"---------------------------after deleting Linked list--------------"<<endl;
		s.display();
		cout<<endl;
		cout<<"-------------------------insertion at end----------------------"<<endl;
		s.insertion_at_end(34);
	s.display();
	cout<<endl;
cout<<"-----------------------------searching in singly linked list-------------"<<endl;
	s.searching(34);
	cout<<endl;
	cout<<"---------------------Deleting in singly Linked list from end ------"<<endl;
	s.deletion_at_end();
	cout<<endl;
	cout<<"---------------------Deleting middle element---------------------------"<<endl;
//	s.deletion_of_middle();
//	cout<<"-------------after deleting middle element----------------------"<<endl;
//	s.display();
cout<<"--------------------------checking lOOP-------------------------------------"<<endl;
s.checing_loop();
}
