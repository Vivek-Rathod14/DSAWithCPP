#include<iostream>
using namespace std;

main(){
	
	int size,i,a[size];
	
	cout<<"\n**Negetive Value Print**\n\n";
	
	cout<<"Enter your size :";
	cin>>size;
	
	for(i=0;i<size;i++){
		 cout << "a[" << i << "] :- ";
		cin>>a[i];
	}
	
	
	
	
	
	for(i=0;i<size;i++){
		if(a[i]<0){
				cout<<a[i];
				break;
		}
		else{
			cout<<"No Negetive Value!";
			break;
		}
		cout<<endl;
	}
	
	
	
}
