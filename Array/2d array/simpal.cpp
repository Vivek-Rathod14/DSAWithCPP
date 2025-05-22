#include<iostream>
using namespace std;

int main(){
	
	int row,col;
	
	cout<<"Enter Row : ";
	cin>>row;
	
	cout<<"Enter Col : ";
	cin>>col;
	
	int a[row][col];
	
	for(int i=0;i<row;i++){
		
		for(int j=0;j<col;j++){
			
			   cout << "a[" << i << "][" << j << "] :- ";
			cin>>a[i][j];
		}
		cout<<"\n";
	}
	
	
	   for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

	
	
	
	
}
