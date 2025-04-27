#include<iostream>
using namespace std;

main(){
	
	int a,b , c,d,e,f;
	
	cout<<"Enter No A : "<<endl;
	cin>>a;
	cout<<"Enter No B :"<<endl;
	cin>>b;
	cout<<"Enter No C :"<<endl;
	cin>>c;
	cout<<"Enter No D :"<<endl;
	cin>>d;
	cout<<"Enter No E :"<<endl;
	cin>>e;
	cout<<"Enter No F :"<<endl;
	cin>>f;
	
	
	if(a==b && b==c && c==d && e==f ){
		cout<<"All Are Some"<<endl;
		
		
	}
	else{
		if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					if(a>f)
					{
						cout<<"A is max"<<endl;
					}
					else {
							cout<<"F is max"<<endl;
					}
				}
				else{
						cout<<"E is max"<<endl;
				}
			}
			else{
					cout<<"D is max"<<endl;
			}
			
			
			
		}
		else {
				cout<<"C is max"<<endl;
		}
	}


	else {
		
		if(b>c){
			if(b>d){
				if(b>e){
					if(b>f){
							cout<<"B is max"<<endl;
					}
					else {
							if(e>f){
								cout<<"E is max"<<endl;
							}
							else{
								cout<<"F is max"<<endl;
							}
					}
				}
				else {
						cout<<"E is max"<<endl;
				}
			}
			else {
					if(d>e){
						if(d>f){
							cout<<"D is max"<<endl;
						}
						else{
							cout<<"F is max"<<endl;
						}
					}
					else{
						cout<<"E is max"<<endl;
					}
			}
		}
		else{
				if(c>d){
					if(c>e){
						if(c>f){
							cout<<"C is max"<<endl;
						}
						else{
							cout<<"F is max"<<endl;
						}
					}
					else{
						cout<<"E is max"<<endl;
					}
				}
				else{
					cout<<"D is max"<<endl;
				}
		}
	}
	}

	


	
		
		




}

