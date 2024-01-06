#include <bits/stdc++.h>
using namespace std;

// By default things are private in class
class Hero{
    public:
    int health;
    char level;
};

int main(){

    Hero ramesh;

    ramesh.health = 70;
    ramesh.level = 'A';

    cout<<"Health is : "<<ramesh.health<<endl;
    cout<<"Level  is : "<<ramesh.level<<endl;
    return 0;
}