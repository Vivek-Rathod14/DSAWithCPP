#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter Any Number 1: ";
    cin >> a;
    cout << "Enter Any Number 2: ";
    cin >> b;

    cout<<"After Swaping\n";
  	cout<<"a="<<a;
  	cout<<"\nb="<<b;

    a = a + b;
    b = a - b;
    a = a - b;


	cout<<"Befor Swaping\n";
  	cout<<"a="<<a;
  	cout<<"\nb="<<b;
  	
  	
    return 0;
}

