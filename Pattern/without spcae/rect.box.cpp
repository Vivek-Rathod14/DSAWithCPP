#include<iostream>
using namespace std;

main(){
	
	int i,j;
	
	for(i=1;i<=6;i++){
		
		for(j=1;j<=6;j++){
			
			if(i == 1 || i == 6 || j == 1 || j == 6){
				
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
	
}
