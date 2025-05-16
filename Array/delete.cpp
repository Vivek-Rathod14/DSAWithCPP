#include<iostream>
using namespace std;

main(){
	
	int i,n=5,a[50]={10,20,30,40,50};
	
	int delet=2;
	
	
	for(i=n;i<delet;i++){
		a[i+1]=a[i];
		
	}
	a[delet];
	n--;
	
	for(i=0;i<n;i++){
		
		cout<<a[i]<<" ";
	}

	
}
