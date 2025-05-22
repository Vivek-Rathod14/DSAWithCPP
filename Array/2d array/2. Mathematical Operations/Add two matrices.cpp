#include<iostream>
using namespace std;

main(){
	
	
	int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;
	
	
	int a[rows][cols],b[rows][cols],i,j,sum=0;
	
	
	for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }
	
	
	cout<<"**Matrix A.**"<<endl;
	
	for(int i=0 ;i<rows;i++){
		
		for(int j=0;j<cols;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n";
		cout<<"**Matrix B.**"<<endl;
	for(int i=0 ;i<rows;i++){
		
		for(int j=0;j<cols;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n";
	
	cout<<"**Add two matrices.**"<<endl;
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			
			sum=a[i][j]+b[i][j];
			cout<<sum<<" ";
		}
		cout<<endl;
	}
}
