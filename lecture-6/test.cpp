#include <iostream>
using namespace std;

void process()
{
    int* ptr = new int(10);

    throw runtime_error("Error");

    delete ptr;
}

int main()
{
    process();
}