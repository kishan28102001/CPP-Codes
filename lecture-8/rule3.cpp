#include <iostream>
using namespace std;

class Buffer
{
private:
    int* data;

public:

    // Constructor
    Buffer(int value)
    {
        data = new int(value);
        cout << "Constructor Called\n";
    }

    // Copy Constructor
    Buffer(const Buffer& other)
    {
        cout << "Copy Constructor Called\n";

        data = new int(*other.data);
    }

    // Copy Assignment Operator
    Buffer& operator=(const Buffer& other)
    {
        cout << "Copy Assignment Operator Called\n";

        if (this != &other)
        {
            delete data;

            data = new int(*other.data);
        }

        return *this;
    }

    // Destructor
    ~Buffer()
    {
        cout << "Destructor Called\n";
        delete data;
    }

    void setValue(int value)
    {
        *data = value;
    }

    void print() const
    {
        cout << *data << endl;
    }
};

int main()
{
    cout << "Creating b1\n";
    Buffer b1(10);

    cout << "\nCreating b2 using Copy Constructor\n";
    Buffer b2 = b1;

    cout << "\nChanging b1\n";
    b1.setValue(100);

    cout << "b1 = ";
    b1.print();

    cout << "b2 = ";
    b2.print();

    cout << "\nCreating b3\n";
    Buffer b3(50);

    cout << "\nUsing Copy Assignment\n";
    b3 = b1;

    cout << "b3 = ";
    b3.print();

    cout << "\nProgram Ends\n";
}