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
		
		cout<<"Ascending  Numbers :"<<endl;
		
		int Ascen=a[0];
// size= 0 1 2 3 4 
//value= 1 2 3 4 5
	
		for(i=0;i<size;i++){
			
			if(Ascen<a[i]){
				Ascen=a[i];
				cout<<Ascen;
			}
	
		}	
		
}
