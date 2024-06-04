#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account person("Smith", 1234, 4.4, 943.4);
    person.Show();
    Account::InfoAboutObjects();
    
    person.Change_Owner("Johnson");
    person.Show();
    Account::InfoAboutObjects();

    person.Money_Withdraw(300);
    person.Show();
    Account::InfoAboutObjects();

    person.Money_Deposit(800);
    person.Show();
    Account::InfoAboutObjects();

    person.Procent();
    person.Show();
    Account::InfoAboutObjects();

    person.Dollar();
    person.Show();
    Account::InfoAboutObjects();

    person.Change_Owner("Silva");
    person.Show();
    Account::InfoAboutObjects();
}
