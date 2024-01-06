#include <bits/stdc++.h>
using namespace std;

// multi-level inheritance (parents of parents)
class Animal{
    public:
        int age;
        int weight;
    
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{

};

class GermanShepherd : public Dog{

};

int main(){
    Animal a;
    cout<<"Animal : ";
    a.speak();

    Dog d;
    cout<<"Dog    : ";
    d.speak();

    GermanShepherd g;
    cout<<"German : ";
    g.speak();

    return 0;
}