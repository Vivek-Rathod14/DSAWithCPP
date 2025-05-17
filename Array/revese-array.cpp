#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter your size: ";
    cin >> size;


    int a[size];

 
    for(int i = 0; i < size; i++) {
        cin >> a[i];
    }

    cout << "\nReverse Numbers:" << endl;
    for(int i = size - 1; i >= 1; i--) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}

