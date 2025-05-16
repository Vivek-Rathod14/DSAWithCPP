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
		
		cout<<"Mini Numbers :"<<endl;
	
	
	int mini=a[0];
		for(i=0;i<size;i++){
			
			if(mini>a[i]){
				mini=a[i];
				
			}
	
		}	
		cout<<mini<<endl;
}
