#include <iostream>
#define pi 3.15
#include "math.h"

using namespace std;
void display(){
    cout << "This is a display function." << endl;
}
int main() {
    cout << "Hello, World!" << endl;
    cout << add(5, 3) << endl; 
    cout << subtract(5, 3) << endl;
    cout << multiply(5, 3) << endl;
    display();
    cout << "Value of pi: " << pi << endl;
    return 0;
}