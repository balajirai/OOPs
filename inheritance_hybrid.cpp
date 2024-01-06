#include <bits/stdc++.h>
using namespace std;

// hybrid inheritance (more than 1 type of inheritance)
class Father{
    public:
        int height;
    void discipline(){
        cout<<"Father's discipline";
    }
};

class Mother{
    public:
        int weight;
    void care(){
        cout<<"Mother's care";
    }
};

// child is inheriting both mother and father (multiple)
class Child : public Father, public Mother{

};

// step child is inheriting father but not current mother (single)
class StepChild: public Father{

};

int main(){
    Child daugher;
    cout<<"Daugher is getting     : ";
    daugher.care();
    cout<<" & ";
    daugher.discipline();

    StepChild stepSon;

    cout<<"\nStep Son is getting    : ";
    stepSon.discipline();

    return 0;
}