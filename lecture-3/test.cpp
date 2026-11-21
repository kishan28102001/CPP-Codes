#include<iostream>
using namespace std;
int main(){
    int x=10;
    int &refX=x;
    cout << "Value of x: " << x << endl;
    cout << "Value of refX: " << refX << endl;
}