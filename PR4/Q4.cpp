#include<iostream>
using namespace std;

main(){
	
	int i,j;
	int row,col;
	
	cout<<"\n**Row & Col Sum**\n\n";
		
	cout<<"Enter Your Row size :";
	cin>>row;
	cout<<"Enter Your Colsize :";
	cin>>col;
	
	
	int a[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout << "a[" << i << "][" << j << "] :- ";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Row sum \n";

	for(int i = 0; i < row; i++){
	   	
	   		int sum=0;
    for(int j = 0; j < col; j++){
        		cout<<a[i][j]<<" ";
           		sum=sum+a[i][j];		
    }
        cout << "=> Row " << i << " sum: " << sum << endl;
	}
	
	
	cout<<"Col sum \n";


	for(int j = 0; j < row; j++){
	   	
	   	int sum=0;
        for(int i = 0; i < col; i++){
        	cout<<a[i][j]<<" ";
           	sum=sum+a[i][j];		
        }
        cout << "=> col " << j << " sum: " << sum << endl;
	}
	
}
