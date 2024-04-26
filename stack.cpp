#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
  private:
    int top;
    int arr[MAX_SIZE];

  public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed to stack." << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        int poppedValue = arr[top--];
        cout << poppedValue << " popped from stack." << endl;
    }
};

int main() {
    Stack stack;
    stack.push(5);
    stack.push(10);
    stack.pop();
    stack.pop();

    return 0;
}
    