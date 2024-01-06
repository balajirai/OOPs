#include <bits/stdc++.h>
using namespace std;

class MyClass {
public:
    // Constructor with an initialization list
    MyClass(int x, double y) : intValue(x), doubleValue(y) {
        cout<<"constructor with initialization list is called"<<endl;
    }

    void displayValues() {
        cout << "intValue: " << intValue << ", doubleValue: " << doubleValue << std::endl;
    }

private:
    int intValue;
    double doubleValue;
};

int main() {
    // Creating an object with initialization values
    MyClass myObject(42, 3.14);
    myObject.displayValues();

    return 0;
}
