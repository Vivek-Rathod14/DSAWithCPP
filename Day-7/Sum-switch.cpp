#include<iostream>
using namespace std;

main(){
	
	int a,b;
	char choice;
	
	cout<<"Enter Of Number A: "<<endl;
	cin>>a;
	
	cout<<"Enter Of Number B: "<<endl;
	cin>>b;
	
	
	cout<<"Enter Your Choice Sine (+ , - , * , / , %): "<<endl;
	cin>>choice;
	
	switch (choice){
		
		case '+': 
				a=a+b;
				cout<<"Sum :"<<a<<endl;
		break;
		
		case '-': 
				a=a-b;
				cout<<"Sub :"<<a<<endl;
		break;
		
		case '*': 
				a=a*b;
				cout<<"Adi :"<<a<<endl;
		break;
		
		case '/': 
				a=a/b;
				cout<<"Dev :"<<a<<endl;
		break;
		
		case '%': 
				a=a%b;
				cout<<"Mod :"<<a<<endl;
		break;
		
		default :
			cout<<"Invalide Choice"<<endl;
	
	}
	
	
	return 0;
}
