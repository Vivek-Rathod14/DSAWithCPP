#include<iostream>
using namespace std;

main(){
	
	char alpha ,i=97 ,z=122;
	
	do{
		
		if(i !=97 && i!=101 && i!=105   && i!=109   && i!=113   && i!=117   && i!=121 ){
			cout<<i<<" ";
		}	
	
		i++;
	}while (i<=z);
	
	   return 0;
}
