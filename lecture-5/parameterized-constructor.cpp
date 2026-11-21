#include <iostream>
using namespace std;

class Student
{

    private:
    string name;
     int age;
     string address;
    public:
    Student(string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
    }
    void display()
    {
        cout << name << ", " << age << ", " << address << endl;
    }
    public:
    ~Student()
    {
        cout << "Destructor Called\n";
    }
};

int main()
{   
    {
        Student s1 =  Student("John Doe", 20, "123 Main St");

        s1.display();
    }
    cout<< "End of Scope\n";
}