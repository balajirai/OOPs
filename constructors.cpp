#include <bits/stdc++.h>
using namespace std;

// constructor (NO return type)
class Hero{
    private:
    int health;

    public:
    char level;

    // default constructor
    Hero(){
        cout<<"\ndefault constructor is called"<<endl;
    }

    // parametrized costructor
    Hero(int h){
        cout<<"\nparametrized constructor is called"<<endl;
        health = h;
        cout<<"Health is Assigned : "<<health<<endl;
    }

    // copy costructor
    Hero(Hero &temp){
        cout<<"\ncopy constructor is called"<<endl;
        this->health = temp.health;
        cout<<"Health of new object : "<<this->health<<endl;
    }
};

int main(){

    Hero ramesh;
    Hero manoj(70);
    Hero suresh(manoj);

    // Default copy constructor --> Shallow Copy
    // User define copy constructor --> Deep Copy

    return 0;
}