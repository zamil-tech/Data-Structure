#include<iostream>
using namespace std;
class dummy{
	private:
		int a,b;
		int *p;
	public:
		dummy(){
			p=new int;// it is new variable it stores a garbage value
		}
		void set_data(int x,int y,int z){
			a=x;
			b=y;
			*p=z;
			
		}
		void show(){
			cout<<"a= "<<a;
			cout<<endl;
			cout<<"B= "<<b;
		}
		// Shallow Copy : Data jo variable m hai wo as it is copy hn not pointers
		//deep copy krwane k lia copy constructor khud banana parega
		dummy(dummy &d){
			a=d.a;
			b=d.b;
			p=new int;
			*p=*(d.p); //Now this data is of pointer is also copied
		}
		//for to free memory we have to call destructor
		~dummy(){
			delete p;
		}
};
int main(){
	dummy s1;
	s1.set_data(2,3,5);
	s1.show();
	dummy s2=s1; // Agr hean assan Hik class ja Object kha un class ja be Object san initilize karayon t copy constructor by default complier ja tran call the wendo
	//dummy s2;
	//s2=s1; he copy constructor n ahe cho jo hin kha initilize ntha karayon hity assignment operator call hota h

	s2.show();
}
