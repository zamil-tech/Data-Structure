#include<iostream>
using namespace std;
int main()
{
// char *s="hello";
// while(*s!='\0')
//  {
//  printf("%c --> %d\n",*s,*s);
//  s++;
//  }
// return 0;

char *s="Thought";
int sum=0;
while(*s!='\0'){
	cout<<*s<<"--------> "<<int(*s)<<endl;
	sum=sum+int(*s);
	s++;
}
int rollno=200108;
int sum1=0;
while(rollno>0){
	int r=rollno%10;
//		cout<<rollno<<" ";
//sum=m+rollno;
	cout<<r<<" ";
	sum1=sum1+r;

	rollno=rollno/10;
//	cout<<rollno<<" ";
	//sum=sum+rollno;

//	cout<<rollno<<" ";
//	int r=rollno/10;
}
cout<<endl;
cout<<sum1<< " "<<endl;


}
