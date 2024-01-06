#include <bits/stdc++.h>
using namespace std;

// inheritance (inherit properties of classes) --> build relation
class Human{

    // private member cannot be accessed in any mode of inheritanc (public, protected, private)
    private:
        int age;

    protected:
        int weight;

    public:
        int height;
    
    int getAge(){
        return this->age;
    }
    void setWeight(int weight){
        this->weight = weight;
    }
};

// inheritance mode : public
class Male: public Human{
    // public parents    --> public child
    // protected parents --> protected child
    // private parents   --> Not accessible
    public:
    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};

// inheritance mode : protected
class Gay: protected Human{
    // public parents    --> protected child
    // protected parents --> protected child
    // private parents   --> Not accessible
    public:
    void sleep(){
        cout<<"Gay Sleeping"<<endl;
    }
};

// inheritance mode : private
class Female: private Human{
    // public parents    --> private child
    // protected parents --> private child
    // private parents   --> Not accessible
    public:
    void sleep(){
        cout<<"Female Sleeping"<<endl;
    }
};

int main(){

    Male m;
    // Gay g;
    // Female f;
    
    cout<<"Height (male) : "<<m.height<<endl;
    m.sleep();
    // g.sleep();
    // f.sleep();

    cout<<"Size (Human class) : "<<sizeof(Human)<<endl;
    cout<<"Size (Male class)  : "<<sizeof(Male)<<endl;
    cout<<"Size (Gay class)   : "<<sizeof(Gay)<<endl;
    cout<<"Size (Female class): "<<sizeof(Female)<<endl;

    
    return 0;
}