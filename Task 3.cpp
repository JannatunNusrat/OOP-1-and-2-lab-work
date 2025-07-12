#include <iostream>
using namespace std;

class Player {
public:
    float height;
    int weight;

    int bmi() {
        float h = height / 100.0;
        return weight / (h * h);
    }
};

int main() {
    Player obj;
    cin >> obj.height >> obj.weight;
    cout << obj.bmi() << endl;
    return 0;
}

