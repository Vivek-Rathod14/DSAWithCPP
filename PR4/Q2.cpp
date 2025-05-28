#include<iostream>
using namespace std;

main(){
	
	int i,j;
	int row,col;
	
	cout<<"\n**Large Value Print**\n\n";
	
	cout<<"Enter Your Row size :";
	cin>>row;
	cout<<"Enter Your Col size :";
	cin>>col;
		
	int a[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			 cout << "a[" << i << "][" << j << "] :- ";
			 cin>>a[i][j];
		}
	}

	cout<<"Large Value Print";

	int large=a[0][0];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(large<a[i][j]){
				large=a[i][j];
			}
		}
	}
	cout<<"large :"<<large;

}
