#include<iostream>
#include<cstring>
using namespace std;
#define MAX 50
void sortStrings(char arr[][MAX], int n);
int main()
{
    char arr[][MAX] = {"s","o","f","t","w","a","r","e"};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"before sorting elements are : ";
  for(int i=0;i<n;i++){
  	cout<<arr[i];
  }
    sortStrings(arr, n);
  cout<<endl;
  cout<<endl;
  //cout<<endl;
  
    cout<<"Strings after  sorting  are : ";
    for (int i=0; i<n; i++)
        cout<<" "<<arr[i];
    return 0;
}

void sortStrings(char arr[][MAX], int n)
{
    char temp[MAX];
  
    
    for (int j=0; j<n-1; j++)
    {
        for (int i=j+1; i<n; i++)
        {
            if (strcmp(arr[j], arr[i]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
}
