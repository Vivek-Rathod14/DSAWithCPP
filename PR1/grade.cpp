#include<iostream>
using namespace std;

main(){
	
	int grade;
	
	cout<<"Enter Your 12 Marks :"<<endl;
	cin>>grade;
	
	
	if(grade>=90 && grade<=100) {
		cout<<"A Grade"<<endl;
	}
	else if(grade>=80 && grade<=89){
			cout<<"B Grade"<<endl;
	}
	else if(grade>=70 && grade<=79){
			cout<<"C Grade"<<endl;
	}
	else if(grade>=60 && grade<=69){
			cout<<"D Grade"<<endl;
	}
	else if(grade>=50 && grade<=59){
			cout<<"E Grade"<<endl;
	}
	else if(grade>=40 && grade<=49){
			cout<<"F Grade"<<endl;
	}
	else {
		cout<<"You Are Fail !"<<endl;
	}
	  return 0;
}
