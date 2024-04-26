#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Queue {
  private:
    int front;
    int rear;
    int arr[MAX_SIZE];

  public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == MAX_SIZE - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        arr[++rear] = value;
        cout << value << " enqueued to the queue." << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        int dequeuedValue = arr[front++];
        cout << dequeuedValue << " dequeued from the queue." << endl;
    }
};

int main() {
    Queue queue;
    queue.enqueue(5);
    queue.enqueue(10);
    queue.dequeue();
    queue.dequeue();

    return 0;
}
