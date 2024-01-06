#include <bits/stdc++.h>
using namespace std;

// hierarchical inheritance (multiple child of a parent)
class Parent{
    public:
        int height;
    void discipline(){
        cout<<"Father's discipline";
    }
    void care(){
        cout<<"Mother's care";
    }
};


// son is inheriting parent
class Son : public Parent{
    // gets properties of parents
};

// daughter is inheriting parent
class Daughter : public Parent{
    // gets properties of parents
};

int main(){
    Son s;
    Daughter d;

    cout<<"Son is getting      : ";
    s.discipline();
    cout<<" & ";
    s.care();

    cout<<"\nDaughter is getting : ";
    d.care();
    cout<<" & ";
    s.discipline();

    return 0;
}