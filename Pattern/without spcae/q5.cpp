#include<iostream>
using namespace std;

main(){
	
	int i , j ;
	
	for(i=5; i>=1;i--){
		
		for(j=1; j<=i; j++){
			
//			cout<<j<<" ";
			
			if(j%2==0){
				cout<<"0 ";
			}
			else{
				cout<<"1 ";
			}
			
		}
		cout<<"\n";
	}
	
}
