#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    Student()
    {
        cout << "Constructor Called\n";
    }

    void display()
    {
        cout << "Display Function\n";
    }

    ~Student()
    {
        cout << "Destructor Called\n";
    }
};

int main()
{
    cout << "Before Object\n";
{ 
    Student s1;

    cout << "Object Created\n";

    s1.display();
}
    cout << "End of main\n";
}