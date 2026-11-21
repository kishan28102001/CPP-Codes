#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int& refA = a;
    int& y = a;
    int& z = a;
    cout << "Value of a: " << a << endl;
    cout<<"value of refA: "<< refA << endl;
    cout<<"value of y: "<< y << endl;
    cout<<"value of z: "<< z << endl;
    y=60;
    cout << "After changing value of refA to b:-Value of refA: " << refA << endl; 
    cout << "After changing value of refA to b:-Value of a: " << a << endl;
    cout<<"After changing value of refA to b:value of y: "<< y << endl;
    cout<<"After changing value of refA to b:value of z: "<< z << endl;
}