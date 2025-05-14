#include<iostream>
using namespace std;

main(){
	
	int i,j,s;
	
	for(i=1;i<=5;i++){
		
		
		for(j=1;j<=8;j++){
			
			if(i==1 && j==4 || (i==2 && (j==3 || j==5)) || (i==3 && (j==2 || j==6))  || (i==4 && (j==1 || j==7)) || i==5   ){
				
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
	
}
