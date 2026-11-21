#include <iostream>
using namespace std;
class Student {
    public:
        string name;
        string address;
        int age;
        Student(string address){
            this->address = address;
        }
        
        Student(int age){
            this->age = age;
        }
        Student(string name1, int age1) {
            name = name1;
            age = age1;
        }
        void display() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};
int main(){
    Student s1("John", 20);
    Student s2("Doe", 21);
    Student s3("Bob",22);
    Student s4("Alice");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
}
