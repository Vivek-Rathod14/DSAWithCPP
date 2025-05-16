#include<iostream>
using namespace std;

main(){
		
		int size,sum;
		
		cout<<"Enter Your size :";
		cin>>size;
		
		int a[size]={},i;
		
		for(i=0;i<size;i++){
			cin>>a[i];   
			
		}
	
		cout<<"\n\n";
		
		cout<<"Reverse Numbers :"<<endl;
		
// size= 0 1 2 3 4 
//value= 5 4 3 2 1 
	
		for(i=size-1;i>=0;i--){
			
			cout<<a[i];
	
		}	
		
}
