#include<iostream>
using namespace std;

int n, arr[100], temp;

void inputArray() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void selection() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Selection Sort Result:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int l, int mid, int r) {
    int i = l, j = mid + 1, k = 0;
    int tempArr[100];

    while (i <= mid && j <= r) {
        if (arr[i] < arr[j]) {
            tempArr[k] = arr[i];
            i++;
        } else {
            tempArr[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        tempArr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r) {
        tempArr[k] = arr[j];
        j++;
        k++;
    }

    for (int x = 0; x < k; x++) {
        arr[l + x] = tempArr[x];
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

void linearSearch() {
    int key;
    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found.\n";
}

void binarySearch() {
    int key, low = 0, high = n - 1, mid;
    cout << "Enter element to search: ";
    cin >> key;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index: " << mid << endl;
            return;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Element not found.\n";
}

void printArray() {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int choice;

    while (choice != 6) {
        cout << "\n----- MENU -----\n";
        cout << "1. Enter Array\n";
        cout << "2. Selection Sort\n";
        cout << "3. Merge Sort\n";
        cout << "4. Linear Search\n";
        cout << "5. Binary Search\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputArray();
                break;

            case 2:
                selection();
                break;

            case 3:
                mergeSort(arr, 0, n - 1);
                cout << "Merge Sort Result:\n";
                printArray();
                break;

            case 4:
                linearSearch();
                break;

            case 5:
                cout << "Note: Make sure the array is sorted before using Binary Search.\n";
                binarySearch();
                break;

            case 6:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
