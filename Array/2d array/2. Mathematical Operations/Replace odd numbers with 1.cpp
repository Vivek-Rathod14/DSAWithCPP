#include<iostream>
using namespace std;

main(){
	
	
	int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;
	
	
	int a[rows][cols],i,j,mul=1;
	
	
	for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of Matrix B:\n";
  
	
	cout<<"**Matrix A.**"<<endl;
	
	for(int i=0 ;i<rows;i++){
		
		for(int j=0;j<cols;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n";

	
	cout<<"**Replace odd numbers with 1.**"<<endl;
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			
			if(a[i][j]%2!=0){
				cout<<"1";
			}
			else{
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
