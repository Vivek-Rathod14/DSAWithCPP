#include<iostream>
using namespace std;

main(){


	
	
	int i,j,s;
	
	for(i=5;i>=1;i--){
		
		for(s=1;s<i;s++){
			cout<<"  ";
		}
		for(j=5;j>=i;j--){
			
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	
}
