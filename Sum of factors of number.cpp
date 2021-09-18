#include<iostream>
using namespace std;
int main() {
   int num ;int  i,sum=0;
   cout<<"enter the num ";
   cin>>num;
   cout << "The factors of " << num << " are : ";
   
   for(i=1; i <= num; i++) {
      if (num % i == 0){
	  
      cout << i << " ";
	sum=i+sum;
	  }
   }
         cout<<"sum "<<sum;

   return 0;
}