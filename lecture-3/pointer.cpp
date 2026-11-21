#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int* ptrA = &a;
    int* ptrB = &b;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptrA: " << ptrA << endl;
    cout << "Value pointed by ptrA: " << *ptrA << endl;
    *ptrA = 30; // Changing the value of a using pointer
    cout << "New value of a after changing through ptrA: " << a << endl;
    cout<<endl;
    cout<<endl;
    cout << "Value of b: " << b << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Value of ptrB: " << ptrB << endl;
    cout << "Value pointed by ptrB: " << *ptrB << endl;

    return 0;
}