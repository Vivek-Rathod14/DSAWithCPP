#include<iostream>
using namespace std;

main(){
	
	int n,d,i,sum=0;
	
	cout<<"Enter Your Number : ";
	cin>>n;
	
	
		while (n!=0){
			
			d=n%10;
			sum=d+sum;	
			n=n/10;	
		}
	
  		 cout << "Final sum of digits = " << sum << endl;

	
	   return 0;
}
