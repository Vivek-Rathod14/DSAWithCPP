#include<iostream>
using namespace std;

int main() {
    int mark;
    char grade;

    cout << "Enter your marks: ";
    cin >> mark;


    (mark >= 90 && mark<=100) ? grade ='A':
    (mark >= 80 && mark<=89) ? grade ='B' :
    (mark >= 70 && mark<=79) ? grade ='C' :
    (mark >= 60 && mark<=69) ? grade ='D' :
	(mark >= 50 && mark<=59) ? grade ='E' :
	(mark >= 33 && mark<=49) ? grade ='F' : 'N'
	;




    switch(grade) {
        case 'A':
            cout << "A Grade. Excellent work!" << endl;
            break;
            
        case 'B':
            cout << "B Grade. Well done!" << endl;
            break;
            
        case 'C':
            cout << "C Grade. Good job!" << endl;
            break;
            
        case 'D':
            cout << "D Grade. You Passed, but you could do better." << endl;
            break;
            
        case 'E':
        cout << "E Grade. You Passed, but you could do better." << endl;
        break;
        
        case 'F':
        cout << "F Grade. You Passed, but you could do better." << endl;
        break;
        
        case 'N':
        cout << "You Are Fail" << endl;
        break;
      
        default:
            cout << "Invalid Grade." << endl;
            
    }
    
    
    
      if(grade !='F') {
        	cout << "You are eligible for the next level." << endl;
      } else {
        	cout << "Please try again next time." << endl;
  	  }

    return 0;
}

