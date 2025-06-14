#include<iostream>
using namespace std;

class Bank {
public:
    int AcNo;
    string Name;
    float Balance;

    void setDetails(int AcNo, string Name, float Balance) {
        this->AcNo = AcNo;
        this->Name = Name;
        this->Balance = Balance;
    }

    void getDetails() {
        cout << "\nAccount Number: " << AcNo << endl;
        cout << "Name: " << Name << endl;
        cout << "Balance: " << Balance << endl;
    }


};

int main() {
    Bank b[100];
    int cnt = 0;
    int choice;

    while (1) {
        cout << "\n------ Bank Menu ------\n";
        cout << "1. Create Account\n";
        cout << "2. Get Account Detail\n";
        cout << "3. Deposit Amount\n";
        cout << "4. Withdraw Amount\n";
        cout << "5. Exit\n";
        cout << "Enter Your Option: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting Program...\n";
            break;
        }

        switch (choice) {
            case 1: {
                int AcNo;
                string Name;
                float Balance;
                cout << "Enter Account Number: ";
                cin >> AcNo;
                cout << "Enter Name: ";
                cin >> Name;
                cout << "Enter Initial Balance: ";
                cin >> Balance;
                b[cnt].setDetails(AcNo, Name, Balance);
                cnt++;
                break;
            }
			
			case 2: {
				int acno , i;
				cout << "Enter Account Number: ";
                cin >> acno;
                for( i=0;i<cnt;i++){
                	if(b[i].AcNo==acno){
                		b[i].getDetails();
                		break;
					}
					
				}
				if(i==cnt){
					cout<<"Account Not Found !"<<endl;
				}
				break;
			}
        

//            case 2: {
//                int acno,i;
//                cout << "Enter Account Number: ";
//                cin >> acno;
//              
//                for (i = 0; i < cnt; i++) {
//                    if (b[i].AcNo == acno) {
//                        b[i].getDetails();
//                        break;
//                    }
//                }
//                if (i == cnt) {
//                    cout << "Account Not Found!" << endl;
//                }
//                break;
//            }


          
        }
    }

    return 0;
}
