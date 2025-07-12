#include <iostream>
using namespace std;

class Student {
public:
    int age;
};

int main() {
    Student s1;
    Student s2;

    s1.age = 10;
    s2.age = 20;

    cout << "Student 1 age: " << s1.age << endl;
    cout << "Student 2 age: " << s2.age << endl;

    return 0;
}
