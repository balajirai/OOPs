#include <bits/stdc++.h>
using namespace std;

// multiple inheritance (multiple parents of a child)
class Father{
    public:
        int height;
    void discipline(){
        cout<<"Father's discipline"<<endl;
    }
};

class Mother{
    public:
        int weight;
    void care(){
        cout<<"Mother's care"<<endl;
    }
};

// child is inheriting both mother and father
class Child : public Father, public Mother{

};

int main(){
    Child son;

    son.discipline();
    son.care();

    return 0;
}