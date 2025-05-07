#include<iostream>
using namespace std;

main(){
	
	int r,n;
	
	cout<<"Enter Your Number :";
	cin>>n;
	
	while(n!=0){
		
		r=n%10;
		cout<<r;
		n=n/10;		
	}
}
