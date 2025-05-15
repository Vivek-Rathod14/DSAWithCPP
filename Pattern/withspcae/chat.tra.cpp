#include<iostream>
using namespace std;

main(){
	
	int i ,j,s;
	
	for(int i=1;i<=5;i++){
		for(int s=5;s>i;s--){
			
			cout<<" ";	
			
		}
		for(int j=1;j<=5;j++){
			
			if(i==1 && j==1  || (i==2 && (j==1 || j==2)) || (i==3 && (j==1 || j==3)) || (i==4 && (j==1 || j==4)) || (i==5 && (j==1 || j==5))){
					cout<<"* ";
			}
			else{
				cout<<"  ";
			}
			
		}
		cout<<"\n";
		
	}
		
	for(int i=4;i>=1;i--){
		for(int s=5;s>i;s--){
			
			cout<<" ";	
			
		}
		for(int j=1;j<=5;j++){
			
			if(i==1 && j==1  || (i==2 && (j==1 || j==2)) || (i==3 && (j==1 || j==3)) || (i==4 && (j==1 || j==4)) || (i==5 && (j==1 || j==5))){
					cout<<"* ";
			}
			else{
				cout<<"  ";
			}
			
		}
		cout<<"\n";
		
	}
	    


	
	
}
