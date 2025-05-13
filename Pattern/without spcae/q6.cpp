#include<iostream>
using namespace std;

main(){
	
	int i,j;
	
	for(i=5;i>=1;i--){
		
		for(j=i;j<=5;j++){
			
			if(j%2==0){
				cout<<"1 ";
			}
			else{
				cout<<"0 ";
			}
			
			
		}
		cout<<"\n";
	}
	
}
