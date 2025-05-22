#include<iostream>
using namespace std;

int main(){
	
//	int row,col;
//	
//	cout<<"Enter Row : ";
//	cin>>row;
//	
//	cout<<"Enter Col : ";
//	cin>>col;
	
	int a[3][3]={
			{10,20,30},
			{40,50,60},
			{70,80,90}
	};
//	
//	for(int i=0;i<row;i++){
//		
//		for(int j=0;j<col;j++){
//			
//			  cout << "a[" << i << "][" << j << "] :- ";
//			cin>>a[i][j];
//		}
//		cout<<"\n";
//	}
	
	
	   for(int j = 0; j < 3; j++){
	   	
	   	int sum=0;
        for(int i = 0; i < 3; i++){
        		
        	cout<<a[i][j]<<" ";
           	sum=sum+a[i][j];
        		
        }
        
        
		cout << "=> Col " << j << " sum: " << sum << endl;
    }

	
	
	
	
}
