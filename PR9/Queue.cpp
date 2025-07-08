#include<iostream>
using namespace std;

class Queue {
private:
    int *arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    bool Full() {
        return rear == capacity - 1;
    }

    bool empty() {
        return front > rear;
    }

    void FULL() {
        if (Full()) {
            cout << "Queue is full." << endl;
        } else {
            cout << "Queue is not full." << endl;
        }
    }

    void EMPTY() {
        if (empty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue is not empty." << endl;
        }
    }

    void enqueue(int value) {
        if (Full()) {
            cout << "Queue Overflow! Cannot enqueue " << value << endl;
        } else {
            arr[++rear] = value;
            cout << value << " enqueued to Queue." << endl;
        }
    }

    void dequeue() {
        if (empty()) {
            cout << "Queue Underflow! Cannot dequeue." << endl;
        } else {
            cout << arr[front] << " dequeued from Queue." << endl;
            front++;
        }
    }

    void showFront() {
        if (empty()) {
            cout << "Queue is empty. No front element." << endl;
        } else {
            cout << "Front Element: " << arr[front] << endl;
        }
    }

    void display() {
        if (empty()) {
            cout << "Queue is empty. Nothing to display." << endl;
        } else {
            cout << "Queue Elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int choice, value, size;

    cout << "Enter size of queue: ";
    cin >> size;

    Queue q(size);

    while (1) {
        cout << "\n========= Queue Menu =========" << endl;
        cout << "1. Enqueue Element" << endl;
        cout << "2. Dequeue Element" << endl;
        cout << "3. Show Front Element" << endl;
        cout << "4. Display All Elements" << endl;
        cout << "5. Check if Queue is Empty" << endl;
        cout << "6. Check if Queue is Full" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.showFront();
            break;
        case 4:
            q.display();
            break;
        case 5:
            q.EMPTY();
            break;
        case 6:
            q.FULL();
            break;
        case 0:
            cout << "Exiting... Thank you!" << endl;
            return 0;
        default:
            cout << "Invalid Choice! Try again." << endl;
        }
    }

    return 0;
}
