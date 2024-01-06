#include <bits/stdc++.h>
using namespace std;

// Encapsulation  (Data Hiding) --> wrapping up data memebers and function in single entity
// when data members are private then its fully encapsulated
class Student{
    private:
        string name;
        int rollno;
    
    public:
        void getDetails(){
            cout<<"Name : "<<this->name<<endl;
            cout<<"Roll : "<<this->rollno<<endl;
        }
        void setDetails(string name, int rollno){
            this->name = name;
            this->rollno = rollno;
        }
};

int main(){
    Student s1;
    s1.setDetails("Balaji", 1);
    s1.getDetails();
    return 0;
}