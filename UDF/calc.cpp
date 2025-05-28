#include<iostream>
using namespace std;



float clac( float a , float b , char op) {
	
		switch (op){
			
			case '+' : return a+b;
			break;
			
			case '-' :return  a-b;
			break;
			
			case '/' : return a/b;
			break;
			
			case '*' :return  a*b;
			break;
			
		
			
			

		}
	
	
}

main(){
	
		float a,b;
		char op;
		
		cout<<"Enter Your Number :";
		cin>>a;
		cout<<"Enter Your Number :";
		cin>>b;
		
		cout<<"Enter (+,-,/,*):";
		cin>>op;
		
		
		cout<<"Result : "<<clac(a,b,op);
	
	
}
