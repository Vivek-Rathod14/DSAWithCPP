#include<iostream>
using namespace std;

main(){
	
	int i,n=5,a[50]={10,20,30,40,50};
	
	int index=2,value=25;
	
	
	for(i=n;i>index;i--){
		a[i]=a[i-1];
		
	}
	a[index]=value;
	n++;
	
	for(i=0;i<n;i++){
		
		cout<<a[i]<<" ";
	}

	
}
