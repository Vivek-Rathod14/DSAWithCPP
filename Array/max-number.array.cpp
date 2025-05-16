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
		
		cout<<"Max Numbers :"<<endl;
		
		int max=a[0]
	
		for(i=0;i<size;i++){
			
			if(max<a[i]){
				max=a[i];
				
			}
	
		}	
		cout<<max<<endl;
}
