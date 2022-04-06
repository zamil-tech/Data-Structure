

#include <bits/stdc++.h>
using namespace std;

int maxheap(int arr[], int n, int value)
{
    n++;
    arr[n] = value;  // putting value in newly created box 
    int i = n; //pointig to last index
    int parent;
   while (i > 1)  //checking if i is greater than 1 to continue loop this is because at 1 positon there will be root node
    {
        parent = i/2;    // we will have to comparre with it thats why we i/2 coz every parent  has two chld`s
        if(arr[parent] < arr[i])  // swaping if newly puted element is larger than parrent node data
        {
            swap(arr[parent],arr[i]);
            i = parent;  // now i will points to parent
        }   
        else
        {
            return 0;
        }
        
    }
    return 0;
}


int dele(int arr[],int n)
{
    cout<<"\ndeleting the element  :  "<<arr[1];
    arr[1] = arr[n];
    n--;
    int i =1;
    while (2*i <n || (2*i)+1 <n)
    {
        if(arr[i] < arr[2*i]  || arr[i] < arr[2*i+1])
        {
            if(arr[2*i] >= arr[2*i+1])
            {
                swap(arr[i],arr[2*i]); i= 2*i;
            }
            else
            {
                swap(arr[2*i+1],arr[i]); i = 2*i+1;
            }
        }
    }
    return 0;
    
}

int main()
{
    int arr[] = {INT_MIN, 3, 2, 5, 6, 7, 9, 8, 2, 4};
    int n = sizeof(arr) / sizeof(int);
    n = n - 1;
    int k = 0;
    for (int i = 1; i <=n; i++)
    {
        maxheap(arr, k,arr[i]);
        k++;
    }
    cout<<"the max heap of the arr is   :   ";
    for(int i =1;i<=n;i++)
    {
        cout<<arr[i]<<"   ";
    }
    k =n;
    for(int i =1;i<=n;i++)
    {
        dele(arr,k);
        k--;
    }
    return 0;
}
