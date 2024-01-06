#include <bits/stdc++.h>
using namespace std;

// 2. Run time polymorphism (dynamic & inheritance dependent)
// function/method overriding
class Animal{
    public:

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{
    public:

    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Dog g;
    g.speak();
    return 0;
}