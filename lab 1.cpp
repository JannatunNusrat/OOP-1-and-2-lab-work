
#include <iostream>

using namespace std;

class MyClass {

private:
    int privateValue;

public:
    int publicValue;

    void publicFunction() {
     cout    << "Public function called!" << endl;
    }
};

int main() {

    MyClass obj;

    obj.publicValue = 10;

    cout << "Public Value: " << obj.publicValue << endl;

    obj.publicFunction();

    return 0;
}
