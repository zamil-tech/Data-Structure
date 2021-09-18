
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char *output[] ){
//	cout<<"argc= "<<argc;
//	cout<<"argv= "<<argv;
ifstream fin;
     fin.open(output[1]);//Opening of first file
     ofstream fout;
     fout.open(output[2]);//opening of second file where data is to be pasted
     char ch;
     while(!fin.eof()) 
     {
          fin.get(ch);
         
          fout<<ch;
     }
     cout<<endl;
     
     cout<<" file is Copied"<<endl;
     cout<<"Done";
     fin.close();
     fout.close();
return 0;
}

