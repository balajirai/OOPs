#include <bits/stdc++.h>
using namespace std;

// implementation hiding
class BMI{
    public:
        double height;
        double weight;

    BMI(double height, double weight){
        this->height = height;
        this->weight = weight;
    }

    void calculate(){
        double bmi = this->weight / pow(this->height, 2);
        cout<<"Your BMI is : "<<bmi<<endl;
    }
    
};
int main(){
    // You just pass your height and weight
    BMI ironman(1.74, 78);

    // You get your BMI without worrying about how it is calculated (hiding implementation)
    ironman.calculate();
    return 0;
}