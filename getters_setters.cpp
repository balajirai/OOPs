#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

    // getters
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    // setters
    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){

    Hero ramesh;

    ramesh.setHealth(70);
    ramesh.setLevel('A');

    cout<<"Health is : "<<ramesh.getHealth()<<endl;
    cout<<"Level  is : "<<ramesh.getLevel()<<endl;

    // why size = 8 and not 4+1 i.e 7 (Reason : Padding and Greedy Alignment)
    cout<<"Size : "<<sizeof(ramesh)<<endl;
    return 0;
}