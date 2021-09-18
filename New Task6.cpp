#include<iostream>
#include<cstring>
using namespace std;
//Class
class student{
	public:
		int id;
		//int n=5;
		//char name[n]
		char name[20];
		//string name;
		
		};
	
int main(){
	student *s=new student;
	
	//s[1].id;
	int i,j,value;
/*	cout<<"enter names of 5 students ";
	for(int i=0;i<5;i++){
		cin>>s[i].name;
	}*/


//	}
	cout<<"enter the id`s and names of 5 students ";
	for( i=0;i<5;i++){
		cin>>s[i].id>>s[i].name;
	
	}
	
			for( i=0;i<5;i++)
	{		
		for(j=i+1;j<5;j++)
		{
			if(s[i].id>s[j].id)
			{
				value  =s[i].id;
				s[i].id=s[j].id;
				s[j].id=value;
			}
		}
	}
	
	//Sorted elements
	cout<<"After sorting Array elements are:"<<endl;
	for(int i=0;i<5;i++){
	
		cout<<s[i].id<<endl;}
	cout<<endl;
	}
	
