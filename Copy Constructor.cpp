#include<iostream>
using namespace std;
class student{
	private:
		int marks;
		int rollno;
	public:
		student(int r,int m){
			rollno=r;
			marks=m;
		}
		void show(){
			cout<<"Roll No "<< rollno<<endl;
			cout<<"Marks "<<marks<<endl;
		}
		student(const student &obj);
};
student::student(const student &obj){
	rollno=obj.rollno;
	marks=obj.marks;
}
int main(){
	student s1(2,3);
	s1.show();
	
	student s2(s1);
	s2.show();
	
	
}
