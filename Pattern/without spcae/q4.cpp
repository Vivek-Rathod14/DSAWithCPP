#include<iostream>
using namespace std;

main(){
	
	int i , j;
	
	for(i=1 ; i<=11 ; i++){
		
		for(j=i ; j>=1 ; j--){
			
//				cout<<j<<" ";
			
				
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
