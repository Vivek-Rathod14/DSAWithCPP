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
		
		cout<<"Negetive Numbers :"<<endl;
	
		for(i=0;i<size;i++){
			
			if(a[i]<0){
				cout<<a[i]<<endl;
			}
	
		}	
}
