#include <iostream>
using namespace std;














void sub(string str1, string str2);
int main()
{
    int num1;
    cin>>num1;
string str1[num1] = {"game","learning","reinforcement","applications","media","markov decision process","model based","dynamic"};

    for (int i = 0; i < num1; i++)
    {
        string p;
        getline(cin >> ws, p);
        str1[i] = p;

    }

    for (int i = 0; i < num1; i++)






    {
        for (int j = i+1; j < num1; j++)








        {
            if(str1[i] > str1[j]){



            swap(str1[i], str1[j]);


            }

        }
        
    }


    

int num2;
cin>>num2;
 string str2[num2] ={}; 

for (int i = 0; i < num2; i++)
{
    string value;
    getline(cin >> ws, value);
    str2[i] = value;
}





for (int i = 0; i < num1; i++)
{
    cout<<str1[i]<<" ";
    for (int j = 0; j < num2; j++)
    {
        string line;
        line = str2[j];
        sub(str1[i],line);
    }
        cout<<endl;
    
}



return 0;
}
void sub(string str1, string str2)
{
	
	int _M = str1.length();
int N = str2.length();

for (int i = 0; i <= N - _M; i++) {
int _j;

    for (_j = 0; _j < _M; _j++)
        if (str2[i + _j] != str1[_j])
            break;
            
            
            
    if (_j == _M){
        string _word = "";
        
    for (auto _x : str2) 
    
    {
    
		    if (_x == ' ')
        {
            cout << _word<<" ";
            _word = "";

            break;
        }
        else {
            _word = _word + _x;


        }
    }
        }
}


}
