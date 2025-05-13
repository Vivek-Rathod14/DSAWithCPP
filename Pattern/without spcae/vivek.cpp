#include<iostream>
using namespace std;

main(){
	
	int i,j;
	
	for(i=1;i<=5;i++){
		
		for(j=1;j<=9;j++){
			
			if( j==i || j==10-i ){
				cout<<"* ";
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
		
	}
	
	for(i=1;i<=6;i++){
		
		for(j=1;j<=6;j++){
			
			if(i==1  || i==6 || j==6 ){
				cout<<"* ";
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
		
	}
		
		
	for(i=1;i<=5;i++){
		
		for(j=1;j<=9;j++){
			
			if( j==i || j==10-i ){
				cout<<"* ";
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
		
	}	
		
		
	for(i=1;i<=7;i++){
		
		for(j=1;j<=6;j++){
			
			if(i==1  || j==1 || i==7 || i==4 ){
				cout<<"* ";
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
		
	}
	
	
	
//			*		*      
//			 *     * 
//			  *   *  
//			   * *   
//			    *    
	
}
