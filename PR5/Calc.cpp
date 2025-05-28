#include<iostream>
using namespace std;
float calc(float num1 , float num2 , char op );

float calc(float num1 , float num2 , char op ){
	
	float result;
	switch (op) {
		    case '+':
		        result = num1 + num2;
		        break;
		
		    case '-':
		        result = num1 - num2;
		        break;
		
		    case '*':
		        result = num1 * num2;
		        break;
		
		    case '/':
		        if (num2 != 0)
		            result = num1 / num2;
		        else {
		            cout << "Error: Division by zero!" << endl;
		            result = 0;
		        }
		        break;
		
		    case '%':
		        case '%': result = num1 % num2; 
				break;
		
		    default:
		        cout << "Invalid operator!" << endl;
		        result = 0;
	}

	 return result;
}

void usr(float &num1, float &num2, char &op) {
    cout << "Enter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;

    cout << "Enter Operator (+,-,*): ";
    cin >> op;
}

main(){
		float num1, num2;
		char op;
		
		for (;;){
			usr(num1, num2, op);
	
			if(op=='0'){
			    cout << "Exiting program." << endl;
            break;
			}
			else{
				float result = calc(num1, num2, op);
				cout << "Result: " << result<<endl;
			}
		}
}
