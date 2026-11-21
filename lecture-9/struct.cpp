#include <iostream>
using namespace std;
struct Student{
    string name;
    int age;
    double marks;
    Student(){
        cout<<"Default Constructor called"<<endl;
    }
    Student(string name, int age, double marks){
        cout<<"Constructor called for "<<name<<endl;
        this->name=name;
        this->age=age;
        this->marks=marks;
    }
    void print(){
        cout<<"Name: "<<name<<", Age: "<<age<<", Marks: "<<marks<<endl;
    }
    ~Student(){
        cout<<"Destructor called for "<<name<<endl;
    }
};

int main(){
    Student s1("John", 20, 85.5);
    Student s2;
    s2.name="Doe";
    s2.age=21;  
    s1.print();
    cout<<"End"<<endl; 
}