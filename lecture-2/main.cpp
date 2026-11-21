#include <iostream>
using namespace std;

int globalVar = 10;
int globalUninitialized;
int display(){
    cout << "diplay"<< endl;
}
int main()
{
    int localVar = 20;
    int* ptr = new int(30);

    cout << "globalVar          : " << &globalVar << endl;
    cout << "globalUninitialized: " << &globalUninitialized << endl;
    cout << "localVar           : " << &localVar << endl;
    cout << "ptr (stack)        : " << &ptr << endl;
    cout << "*ptr (heap)        : " << ptr << endl;
    display();
    delete ptr;
}