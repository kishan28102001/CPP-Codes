#include <iostream>
using namespace std;

class Buffer
{
private:
    int* data;
    size_t size;

public:

    // Constructor
    Buffer(size_t n)
    {
        size = n;
        data = new int[size];

        cout << "Constructor\n";
    }

    // Destructor
    ~Buffer()
    {
        delete[] data;

        cout << "Destructor\n";
    }

    // Copy Constructor
    Buffer(const Buffer& other)
    {
        cout << "Copy Constructor\n";

        size = other.size;
        data = new int[size];

        for (size_t i = 0; i < size; i++)
            data[i] = other.data[i];
    }

    // Copy Assignment
    Buffer& operator=(const Buffer& other)
    {
        cout << "Copy Assignment\n";

        if (this != &other)
        {
            delete[] data;

            size = other.size;
            data = new int[size];

            for (size_t i = 0; i < size; i++)
                data[i] = other.data[i];
        }

        return *this;
    }

    // Move Constructor
    Buffer(Buffer&& other)
    {
        cout << "Move Constructor\n";

        size = other.size;
        data = other.data;

        other.data = nullptr;
        other.size = 0;
        
    }

    // Move Assignment
    Buffer& operator=(Buffer&& other)
    {
        cout << "Move Assignment\n";

        if (this != &other)
        {
            delete[] data;

            size = other.size;
            data = other.data;

            other.data = nullptr;
            other.size = 0;
        }

        return *this;
    }
};

int main()
{
    Buffer b1(5);

    cout << "-----------------\n";

    Buffer b2 = b1;                  // Copy Constructor

    cout << "-----------------\n";

    Buffer b3 = std::move(b1);       // Move Constructor

    cout << "-----------------\n";

    Buffer b4(3);

    b4 = b2;                         // Copy Assignment

    cout << "-----------------\n";

    b4 = std::move(b2);              // Move Assignment
}