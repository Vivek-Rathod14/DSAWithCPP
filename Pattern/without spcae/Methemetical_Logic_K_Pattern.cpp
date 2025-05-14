#include <iostream>
using namespace std;

main(){
	int i,j;
	for(i=1 ; i<=7 ; i++){
		for(j=1 ; j<=5 ; j++){
			if(j==1 || (i<=4 && j==6-i) || (i>=5 && j==i-2)){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
}
