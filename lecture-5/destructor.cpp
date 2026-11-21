#include <iostream>
using namespace std;

class Student
{
public:

    Student()
    {
        cout << "Constructor\n";
    }

    ~Student()
    {
        cout << "Destructor\n";
    }
};

int main()
{
    string s("Hello");
cout << s;
    string t = std::move(s);

    cout << s;
    {
        Student s;
    }
    cout << "End of main\n";
}