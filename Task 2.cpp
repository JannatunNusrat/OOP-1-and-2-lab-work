#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;

    void area() {
        cout << "Area: " << length * breadth << endl;
    }

    void perimeter() {
        cout << "Perimeter: " << 2 * (length + breadth) << endl;
    }
};

int main() {
    Rectangle r;
    cout << "Enter length and breadth: ";
    cin >> r.length >> r.breadth;

    r.area();
    r.perimeter();

    return 0;
}

