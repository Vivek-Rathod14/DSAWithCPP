#include<iostream>
using namespace std;

main(){
	
	int i ,j,s;
	
				 		
//														*   *  *****  *   *  *****  *   *
//														*   *    *    *   *  *      *  * 
//														*   *    *    *   *  *****  ***  
//														 * *     *     * *   *      *  * 
//														  *    *****    *    *****  *   *
				 		
				 		
	
	
	
	for(int i=1;i<=28;i++){
		for(int s=5;s>i;s--){
			
			cout<<" ";	
			
		}
		for(int j=1;j<=28;j++){
			
			if((i==1 && (j==7 || j==10))  ){
					cout<<"* ";
			}
			else{
				cout<<"  ";
			}
			
		}
		cout<<"\n";
		
	}

	
	
}
