#include<iostream>
using namespace std;

main(){
	
	int n,i,sum=0;
	
	cout<<"Enter Your Number :"<<endl;
	cin>>n;
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			cout<<i<<" ";
			
			sum=sum+i;	
		}
	}
	
	cout<<"Sum : "<<sum;
	
}
