#include<iostream>
using namespace std;
class Buffer
{
public:

    int* data;

    Buffer()
    {
        data = new int(10);
    }
    Buffer(const Buffer& b1)
    {
        data = new int(*b1.data);
    }
    ~Buffer()
    {
        delete data;
        cout << "Buffer destructor called" << endl;
    }
};

int main()
{
    Buffer buf1;
    cout << "buf1 data: " << *(buf1.data) << endl;
    Buffer buf2 = buf1; 
    *buf1.data=200;
    cout << "buf1 data: " << *(buf1.data) << endl;
    cout << "buf2 data: " << *(buf2.data) << endl;

    return 0;
}