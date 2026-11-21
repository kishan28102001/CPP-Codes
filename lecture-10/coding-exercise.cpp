#include <iostream>
using namespace std;
long rolltotal=1;
class Student {
    private:
        string name;
        string addr;
        int age;
        double marks;
        long roll=rolltotal;

    public:

    string getname(){
        return this->name;
    }
    void setname(string name){
        this->name=name;
    }


    double getmarks(){
        return this->marks;
    }
    void setmarks(double marks){
        if (marks>=0){
            this->marks=marks;
        }
        else{
            cout << "Marks out of range" << endl;
        }
    }

    string getaddr(){
        return this->addr;
    }
    void setaddr(string addr){
        this->addr=addr;
    }

    int getage(){
        return this->age;
    }
    void display(){
        cout << "name = " << this->name << endl;
        cout << "age = " << this->age << endl;
        cout << "address = " << this->addr << endl;
        cout << "marks = " << this->marks << endl;
        cout << "roll = " << this->roll << endl;
    }

    Student (string name, int age, string addr){ // constructor
        rolltotal++;
        this->name=name;
        this->age=age;
        this->addr=addr;
        this->marks=0;
    }


};

int main() 
{
    Student S1("john doe",23,"some address");
    S1.setmarks(-20);
    S1.setmarks(10);
    S1.display();

    Student S2("main stud",27,"address new");
    S2.display();

    S1.display();

    return 0;

}