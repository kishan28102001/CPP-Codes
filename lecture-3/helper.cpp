#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptrA = &a;

    cout<<"After changing value of a using pointer"<<endl;
    *ptrA = 30;
    cout << "After:-Value of a: " << a << endl;
    a=40;
    cout << "After:-Value of ptrA: " << *ptrA << endl;
}
