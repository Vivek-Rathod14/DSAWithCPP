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
	
		for(i=0;i<size;i++){
			cout<<a[i]<<endl;;
			sum=sum + a[i];
		}
	
		cout<<sum;
	
}
