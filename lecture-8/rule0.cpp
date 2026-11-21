#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
    string name;
    vector<int> marks;

public:
    Student(string n)
        : name(std::move(n))
    {
    }

    void addMark(int mark)
    {
        marks.push_back(mark);
    }

    void print() 
    {
        cout << "Name: " << name << "\nMarks: ";

        for (int mark : marks)
            cout << mark << " ";

        cout << endl;
    }
};

int main()
{
    Student s1("John Doe");

    s1.addMark(90);
    s1.addMark(95);
    Student s2 = s1;      
    Student s3 = std::move(s1); 
    Student s4("Marry Jane");
    
    s4.addMark(80);
    s4.addMark(85);
    s1.print();
    s1=move(s4); 
    s2.print();
    s3.print();
    s1.print();
}