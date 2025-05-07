#include<iostream>
using namespace std;

main(){
	
	int  n; 
	
	cout<<"Enter Your Number  :";
	cin>>n;
	
	int r,r1;
	
	r=n%10; /// 122   =  2
	
	while(n>=10){	
		n=n/10;  // 122 =  12
	}
	

	
	cout<<"Sum :"<<r+n<<endl;
		
	   return 0;
}
