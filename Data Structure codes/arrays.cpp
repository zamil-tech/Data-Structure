#include<iostream>

using namespace std;
//int main(){
//	float arr[5];
//	cout<<"enter the elements ";
//	for(int i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	cout<<"the elements are ";
//	for(int i=0;i<5;i++){
//		cout<<arr[i]<<endl;
//	}
//}
//cout<<"identity matric ";

int main(){
	int n=3;
	int flag=0;
	int arr[3][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

//			
			for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if ((arr[i][j] != 1) && (arr[j][i] != 0))
            {
                flag = 1;
                break;
            }
        }
			
			
				
			
		
		if(flag==0){
			cout<<"the matric is identity ";
		}
		else
		{
			cout<<"it is nOt identity ";
		}
	}
	
	

