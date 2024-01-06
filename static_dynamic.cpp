#include <bits/stdc++.h>
using namespace std;


class Hero{
    public:
    int health = 10;
};

int main(){
    
    // static allocation
    Hero h1;
    cout<<"Health (static)  : "<<h1.health<<endl;

    // dynamic allocation
    Hero *h2 = new Hero;
    // cout<<"Health (dynamic) : "<<(*h2).health<<endl;
    cout<<"Health (dynamic) : "<<h2->health<<endl;


    cout<<"Size (static)  : "<<sizeof(h1)<<endl;
    cout<<"Size (dynamic) : "<<sizeof(h2)<<endl;
    return 0;
}