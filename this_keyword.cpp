#include <bits/stdc++.h>
using namespace std;

// this keyword store the address of current object
class Hero{
    private:
    int health;

    public:
    char level;

    // parametrize costructor
    Hero(int health){
        this->health = health;

        cout<<"Health is Assigned : "<<this->health<<endl;
        cout<<"Address of current object (using this) : "<<this<<endl;
    }
};

int main(){

    Hero ramesh(70);

    cout<<"Address of current object (using &ramesh) : "<<&ramesh<<endl;

    return 0;
}