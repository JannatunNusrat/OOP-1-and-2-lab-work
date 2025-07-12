#include <iostream>
using namespace std;

class Calculator {
public:
    int a;
    int b;

    void addition() {
        cout << "Addition: " << a + b << endl;
    }

    void subtraction() {
        cout << "Subtraction: " << a - b << endl;
    }

    void multiplication() {
        cout << "Multiplication: " << a * b << endl;
    }
};

int main() {
    Calculator obj;
    cout << "Enter two numbers: ";
    cin >> obj.a >> obj.b;

    obj.addition();
    obj.subtraction();
    obj.multiplication();

    return 0;
}

