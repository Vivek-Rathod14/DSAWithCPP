#include<iostream>
using namespace std;


void pali(){
		
	int no,rev=0;

	
	cout<<"Enter Your Number :";
	cin>>no;
	int dub=no;
	while(no!=0){
		
		rev = rev * 10 + (no % 10);
		no=no/10;
	}
	cout<<endl;

  	if(dub == rev) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

}

main(){
	
	
	
	pali();
	return 0;

}




