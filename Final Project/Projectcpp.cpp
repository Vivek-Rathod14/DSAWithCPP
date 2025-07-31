#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;

void insertLinkedList(int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void displayLinkedList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int arr[100];
int n;

void inputArray() {
    cout << "Enter number of elements in array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void merge(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1];

    while (i <= mid && j <= high) {
        if (a[i] < a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }

    while (i <= mid) temp[k++] = a[i++];
    while (j <= high) temp[k++] = a[j++];

    for (i = low, k = 0; i <= high; i++, k++) {
        a[i] = temp[k];
    }
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int binarySearch(int a[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

void displayArray() {
    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

// Main menu
int main() {
    int choice;

    while (true) {
        cout << "\n===== MENU =====\n";
        cout << "1. Insert into Linked List\n";
        cout << "2. Display Linked List\n";
        cout << "3. Input Array\n";
        cout << "4. Merge Sort Array\n";
        cout << "5. Quick Sort Array\n";
        cout << "6. Binary Search in Array\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int val;
            cout << "Enter value to insert: ";
            cin >> val;
            insertLinkedList(val);
            break;
        }
        case 2:
            displayLinkedList();
            break;

        case 3:
            inputArray();
            break;

        case 4:
            mergeSort(arr, 0, n - 1);
            cout << "Array after Merge Sort: ";
            displayArray();
            break;

        case 5:
            quickSort(arr, 0, n - 1);
            cout << "Array after Quick Sort: ";
            displayArray();
            break;

        case 6: {
            int key;
            cout << "Enter element to search: ";
            cin >> key;
            int result = binarySearch(arr, n, key);
            if (result != -1)
                cout << "Element found at index: " << result << endl;
            else
                cout << "Element not found.\n";
            break;
        }

        case 0:
            cout << "Exiting program.\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
