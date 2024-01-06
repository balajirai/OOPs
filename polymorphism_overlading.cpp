#include <bits/stdc++.h>
using namespace std;

// 1. Compile time polymorphism (static)
// 1.a) function overloading
class FunctionOverload{
    public:
    
    void fun(){
        cout<<"Hi Balaji"<<endl;
    }

    void fun(string name){
        cout<<"Hello "<<name<<endl;
    }

    void fun(int a, int b, int c = 0, int d = 0){
        cout<< "Sum : "<<a+b+c+d <<endl;
    }

    int fun(char ch){
        return ch;
    }
};

// 1.b) operator overloading
class OperatorOverloading{
    public:
        int a;
        int b;

    void operator+ (OperatorOverloading &obj){
        cout<<"I'm plus operator"<<endl;
    }

    void operator() (){
        cout<<"I'm bracket operator"<<endl;
    }

};


int main(){

    // 1.a) function overloading
    cout<<"------FUNCTION OVERLOADING------"<<endl;
    FunctionOverload obj1;
    obj1.fun();
    obj1.fun("Balaji");
    obj1.fun(2, 3);
    obj1.fun(2, 3, 4);
    obj1.fun(2, 3, 4, 5);
    cout<<"Return : "<<obj1.fun('B')<<endl;

    // 1.b) operator overloading
    cout<<"\n------OPERATOR OVERLOADING------"<<endl;
    OperatorOverloading obj2;
    obj2 + obj2;
    obj2();

    return 0;
}