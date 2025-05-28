#include<iostream>
using namespace std;

main(){
	
	int i,j;
	int row,col;
	
	cout<<"\n**Matrix Value Print**\n\n";
	
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
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
}
