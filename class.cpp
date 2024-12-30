#include<iostream>

class BankAccount
{
public: //access specifier are accesable outside this class
    std::string id_name;
    int balance;

    void withdraw(int amount)
    {
        balance = balance - amount;
    }
    void print ()
    {
        std::cout << id_name << " has "<< balance << " taka"<< std::endl;
    }
};

int main()
{
    BankAccount account1;
    account1.id_name = "Niloy";
    account1.balance = 50000;

    std::cout << account1.id_name << " has " << account1.balance << "taka"<< std::endl;

    account1.print();

    BankAccount account2;
    account2.id_name ="boni";
    account2.balance = 1000;

    std::cout << account2.id_name << " has " << account2.balance << "taka" << std::endl;

    account2.balance = account2.balance - 500;

    std::cout << account2.id_name << " has " << account2.balance << "taka"<<std::endl;

    account2.withdraw(100);

    std::cout << account2.id_name << " has " << account2.balance << "taka"<< std::endl;

    return 0;
}
