#include <bits/stdc++.h>
using namespace std;

// Destructor (NO return type & NO input parameter)
class Hero{
    public:
    int health;

    // constructor
    Hero(){
        cout<<"constructor is called"<<endl;
    }

    // destructor
    ~Hero(){
        cout<<"destructor is called"<<endl;
    }
};

int main(){
    // static allocation (automatically call destructor)
    Hero h1;

    // dynamic allocation (manually call destructor)
    Hero *h2 = new Hero;
    delete h2;
    


    cout<<"Size (static)  : "<<sizeof(h1)<<endl;
    cout<<"Size (dynamic) : "<<sizeof(h2)<<endl;
    return 0;
}