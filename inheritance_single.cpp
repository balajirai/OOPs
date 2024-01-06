#include <bits/stdc++.h>
using namespace std;

// single inheritance (there no parents of parents) ie. only parent-->child
class Animal{
    public:
        int age;
        int weight;
    
    void speak(){
        cout<<"Animal is Speaking"<<endl;
    }
};

class Dog : public Animal{

};

int main(){
    Dog d;
    d.speak();

    return 0;
}