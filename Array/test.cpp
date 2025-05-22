#include<iostream>
using namespace std;

int main() {
    int size ,i;

    cout << "Enter your size: ";
    cin >> size;

   																	// 0 1 2 3 4 
																   //  1 2 3 4 5	

    int a[size]={};
	int index=2; 



    for(int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }
    
    
    	
	for(int i=index;i<size-1;i++){
		
		a[i]=a[i+1];
		
		
	}

	size--;
    
    
    
    for(int i=0;i<size;i++){
    	
    	cout<<a[i]<<" ";
	}


  
}

