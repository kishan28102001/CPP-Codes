#include <iostream>
#include <cstdio>
using namespace std;
class FileHandler
{
private:

    FILE* file;

public:

    FileHandler(const char* name)
    {
        file = fopen(name, "w+");
        if (file)
            std::cout << "File Opened\n";
        else
            std::cout << "Failed to open file\n";
    }
    void write(const char* text)
    {
        if (file)
        {
            fputs(text, file);
            std::cout << "Data Written\n";
        }
    }
    void printTxt()
    {
        if (file)
        {
            cout << "Printing file contents:\n";
            rewind(file);
            int c;
            while ((c = fgetc(file)) != EOF)
            {
                cout << static_cast<char>(c);
            }
        }
    }
    ~FileHandler()
    {
        cerr << "Destructor Entered\n";
        if(file)
        {
            fclose(file);

            std::cout << "File Closed\n";
        }
    }
};
int main()
{
    FileHandler f("data.txt");
    f.write("Hello World");
    throw runtime_error("Error");
    f.printTxt();
}