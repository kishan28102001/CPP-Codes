#include <iostream>
using namespace std;
class BankAccount
{

private:
    double balance; //data hiding 
    

public:
    string name;
    string address;

public:

    BankAccount(string name, string address)
    {
        this->name = name;
        this->address = address;
        balance = 0;
    }

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
        }else{
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount)
    {
        if(amount <= balance)
        {
            balance -= amount;
        }else{
            cout << "Insufficient funds." << endl;
        }
    }

    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    BankAccount account("John Doe", "123 Main St");
    account.deposit(1000);
    cout << "Balance after deposit: " << account.getBalance() << endl;//1000
    account.deposit(-500); // Attempt to deposit a negative amount
    account.withdraw(500);//500
    cout << "Balance after withdrawal: " << account.getBalance() << endl;

    account.withdraw(600); // Attempt to withdraw more than balance
    cout << "Balance after withdrawal: " << account.getBalance() << endl;
    return 0;
}