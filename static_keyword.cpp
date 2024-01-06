#include <bits/stdc++.h>
using namespace std;

// static members--> independent of class (can be access without creating object)
class Hero{
    public:
    int health;
    char level;
    static int timeToComplete;

    // static funtion (can only access static memebers & NO concept of 'this' as it doesn't point to object)
    static int fun(){
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;

int main(){

    cout<<"static int memeber (timeToComplete) : "<<Hero::timeToComplete<<endl;
    cout<<"calling static funtion : "<<Hero::fun()<<endl;
    return 0;
}