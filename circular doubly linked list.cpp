#include<iostream>
using namespace std;
class node{
	public:
		node *next;
		int data;
		node *pre;
		node(){
			data=0;
			this->next=NULL;
			this->pre=	NULL;
		}
		node(int n){
			data=n;
			this->next=NULL;
		}
};
class circular_double{
	
	public:
		node *head,*tail;
		circular(){
			this->head=NULL;
			this->tail=NULL;
		}
		// Function to insert at the end
	void insertEnd( int n){
	
	if (head == NULL)
	{
		 node* tmp = new node;
		tmp->data = n;
		tmp->next = tmp->pre = tmp;
		head = tmp	;
		return;
	}

	
	node *t = head->pre;

	 node* tmp = new node;
	tmp->data = n;
	tmp->next = head;
	head->pre = tmp;
	tmp->pre = t;
	t->next = tmp;
}

void front(int n) {
    node *tmp = new node;
    tmp->data = n;
    tmp->next =NULL; 
    tmp->next =NULL;
    if(head == NULL) {
      tmp->next = head;
      tmp->pre = head;
    } else {
      node *t = new node;
      t = head;
      while(t->next != head)
        t = tmp->next;
      t->next =tmp ;
      tmp->pre = t;
      tmp->next = head;
      head->pre = tmp;
      head = tmp;
    }    
  }
 //Inserts a new element at the given position 
    void insert_at_position(int element, int index) {
      node* tmp = new node; 
      tmp->data = element;
      tmp->next = NULL;
      tmp->pre = NULL;
      if(index < 1) {
        cout<<"\nposition should be >= 1.";
      } 
	  else if (index == 1) {
        tmp->next = head;
        head->pre = tmp;
        head = tmp;
      } 
	  else {
        node* t = head;
        for(int i = 0; i < index; i++) {
          if(t != NULL) {
            t = t->next;
          }
        }
        if(t != NULL) {
          tmp->next = t->next;
          tmp->pre = t;
          t->next = tmp;
          if(tmp->next != NULL)
            tmp->next->pre = tmp;  
        } else {
          cout<<"\nThe previous node is null.";
        } 
      }
    }



void deleteNode(int key) 
{ 
   
    if (head == NULL) 
        return; 
  
   node *curr=head;
   node *pre_1=NULL;
   
    while (curr->data!= key) 
    { 
        if (curr->next == head) 
        { 
            cout<<"there is no such value = "<<key; 
            return; 
        } 
  
        pre_1 = curr; 
        curr = curr -> next; 
    } 
  
    if (curr -> next == head && pre_1 == NULL) 
    { 
        head= NULL; 
        delete curr; 
        return; 
    } 

    if (curr == head) 
    { 
        pre_1 = head -> pre; 
 		head = head -> next; 
        pre_1 -> next = head; 
        head-> pre = pre_1; 
        delete curr; 
    } 
  
    else if (curr->next == head) 
    { 
        pre_1 -> next = head; 
        head -> pre = pre_1; 
        delete curr; 
        
    } 
    else
    { 
         node *tmp = curr -> next; 
        pre_1 -> next = tmp; 
        tmp -> pre = pre_1; 
        delete curr;
    } 
} 
  








void PrintList() {
      node* tmp = head;
      if(tmp != NULL) {
        cout<<"The list contains: ";
        while(true) {
          cout<<tmp->data<<" ";
          tmp = tmp->next;
          if(tmp == head) 
            break;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.\n";
      }
    }     

};










int main(){
	circular_double cd;
	cd.insertEnd(2);
	cd.front(1);
	cd.insert_at_position(5,2);
	cd.deleteNode(2);
	cd.PrintList();
}
