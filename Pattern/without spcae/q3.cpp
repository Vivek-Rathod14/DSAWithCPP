#include<iostream>
using namespace std;

main(){
	
	int i ,j ;
	
	for(i=1 ; i<=5 ; i++){
		
	  for ( j = 0; j < 2 * i - 1; j++) {
		  cout << ((j % 2 == 0) ? '1' : '0');
		}
		
		cout<<"\n";
		
	}
	
	
}
