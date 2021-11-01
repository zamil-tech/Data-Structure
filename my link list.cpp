#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(){
		}
		node(int n){
			this->data=n;
			this->next=NULL;
		}
};
class linkedlist{
	public:
		node *head;
		linkedlist(){
			this->head=NULL;
		}
		void display(){
			node *tmp;
		//	tmp=new node;
		tmp=head;
		while(tmp!=NULL){
					cout<<tmp->data<<" "<<endl;
			tmp=tmp->next;
		}}
		void front(int n){
				node *tmp;
				tmp=new node;
			//	if(head==NUll){
			//		head=tmp;
					
				//}
			//	else{
			//		node *p
			//	}
			tmp->data=n;
			tmp->next=head;
			head=tmp;
		}
		
		
//		void update(int data) {
//  
//  node *link=new node;
//
//   link->data = data;
//   link->next = NULL;
//
//
//   if(head==NULL) {
//      head = link;
//      return;
//   }
//
//   current = head;
//   
//   
//   while(current->next!=NULL)
//      current = current->next;
//   
//   
  // current->next = link; 
//}
		
	
		void end(int n){
			node *tmp;
			tmp=new node;
			tmp->data=n;
			tmp->next=NULL;
			if(head==NULL){
				
				head=tmp;
			}
			else{
				node *p;
				p=head;
				while(p->next!=NULL){
					p=p->next;
				}
				p->next=tmp;
			//	tmp->next=NULL;
//			tmp=p;
				
				
			}
		}
		void insert_at_pos(int index,int element){
			node *tmp;
			tmp=new node;
			tmp->data=element;
			node *p;
			p=head;
			for(int i=1;i<index;i++){
				
				p=p->next;
				//tmp=tmp->next;
			//	p=p->next;
				
			}
			tmp->next=p->next;
			p->next=tmp;
		}
		void search(int element){
			node *p;
			p=head;
			//p->data=element;
			while(p!=NULL){
				//p=p->next;
				if(p->data==element){
					cout<<"found ";
				}
			
				p=p->next;
			}
			cout<<"Not found ";
		}
		void reverse(){
			node *pre,*cur,*n;
			pre=NULL;
			cur=head;
			n=NULL;
			while(cur!=NULL){
			//	pre=cur;
				n=cur->next;
				cur->next=pre;
				pre=cur;
				cur=n;
				
			}
			head=pre;
		}
		void sort(){
			node *tmp;
			tmp=head;
			int va;
			node *p;
			while(tmp->next!=NULL){
				p=tmp->next;
				while(p!=NULL){
					if(tmp->data>p->data){
					
					va=tmp->data;
					tmp->data=p->data;
					p->data=va;
						
				}
				p=p->next;}
				tmp=tmp->next;
			}
			cout<<"max= "<<tmp->data<<endl;
			cout<<"min= "<<va;
				
			
		}
		
		
		void count(){
			node *count;
			count=head;
			int n=0;
			while(count!=NULL){
				n++;
				count=count->next;
			}
			cout<<"count "<<n<<endl;
		}
		
		void link(node *head1,node *head2,int k){
			int count=1;
			node *cur=head;
			while(count<k){
				cur=cur->next;
				count++;
			}
			node *tmp=cur->next;
			cur->next=head2;
			while(head2->next!=NULL){
				head2=head2->next;
				
			}
			head2->next=tmp;
			
		}
		
		
		
		
		void dltfront(){
			node *tmp;
			tmp=head;
			head=head->next;
			delete tmp;
		}
		void dltend(){
			node *tmp;
			tmp=head;
//			if(tmp==NULL){
//				tmp=head;
//				delete 
//			}
			node *t;
			while(tmp->next!=NULL){
				t=tmp;
				tmp=tmp->next;
			}
			t->next=NULL;
			delete tmp;
			
		}
		
};
int main(){
	linkedlist l1;
//	l1.front(2);
	l1.end(1);
	l1.end(3);
	//l1.insert_at_pos(2,5);
//l1.reverse();	l1.count();
//l1.dltfront();
//l1.dltend();
	l1.display();
	//	l1.count();
	//		l1.search(1);
			l1.sort();
//			l1.count();
//			l1.display();
//	 node* a = NULL;
//	 node* b = NULL;
//	int k = 2;
//	link(a,b,2);
//	


}
