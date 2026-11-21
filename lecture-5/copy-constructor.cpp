#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    string name;

    Student(string n,int age)
    {
        name = n;
        this->age = age;
    }
    Student (const Student& other){
        name = other.name;
        age = other.age;
    }
    ~Student()
    {
        cout<<"Destructor Called\n";
    }
    
};

int main()
{
    Student s1=Student("John Doe",25);

    Student s2 = s1;
    cout<<s2.name;
    cout<<s2.age;
    cout<<endl;
}