#include<iostream>
int f,r
int main()
{

}
#include <iostream>
using namespace std;

int front = 0, rear = 0;
int* queue;
int maxSize;

bool isFull() {
    return rear == maxSize;
}

bool isEmpty() {
    return front == rear;
}

void enqueue(int data) {
    if (isFull()) {
        cout << "Queue is full\n";
        return;
    } else {
        queue[rear] = data;
        rear++;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    } else {
        for (int i = 0; i < rear - 1; i++) {
            queue[i] = queue[i + 1];
        }
        rear--;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    } else {
        for (int i = front; i < rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter the size of the queue: ";
    cin >> maxSize;
    queue = new int[maxSize]; // Dynamically allocate memory for the queue

    int choice, value;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                delete[] queue; // Free the allocated memory
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}
