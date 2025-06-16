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

    void deposit(float amount) {
        Balance += amount;
        cout << "Amount Deposited Successfully. New Balance: " << Balance << endl;
    }

    void withdraw(float amount) {
        if (amount > Balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            Balance -= amount;
            cout << "Amount Withdrawn Successfully. New Balance: " << Balance << endl;
        }
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
                cout << "Account Created Successfully!\n";
                break;
            }

            case 2: {
                int acno, i;
                cout << "Enter Account Number: ";
                cin >> acno;
                for (i = 0; i < cnt; i++) {
                    if (b[i].AcNo == acno) {
                        b[i].getDetails();
                        break;
                    }
                }
                if (i == cnt) {
                    cout << "Account Not Found!" << endl;
                }
                break;
            }

            case 3: {
                int acno;
                float amount;
                cout << "Enter Account Number: ";
                cin >> acno;
                cout << "Enter Amount to Deposit: ";
                cin >> amount;
                int i;
                for (i = 0; i < cnt; i++) {
                    if (b[i].AcNo == acno) {
                        b[i].deposit(amount);
                        break;
                    }
                }
                if (i == cnt) {
                    cout << "Account Not Found!" << endl;
                }
                break;
            }

            case 4: {
                int acno;
                float amount;
                cout << "Enter Account Number: ";
                cin >> acno;
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;
                int i;
                for (i = 0; i < cnt; i++) {
                    if (b[i].AcNo == acno) {
                        b[i].withdraw(amount);
                        break;
                    }
                }
                if (i == cnt) {
                    cout << "Account Not Found!" << endl;
                }
                break;
            }

            default:
                cout << "Invalid Option. Please try again.\n";
        }
    }

    return 0;
}
