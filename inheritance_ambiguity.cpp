#include <bits/stdc++.h>
using namespace std;

// ambiguity in  inheritance (multiple classes have function with same name)
class Father{
    public:
        int height;
    void care(){
        cout<<"Father's care"<<endl;
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

    // son.care();   //ambiguos

    // using scope resolution
    son.Father::care();
    son.Mother::care();

    return 0;
}