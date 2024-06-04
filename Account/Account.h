#pragma once
class Account
{
private:

    char* surname;
    unsigned int number_of_check;
    double procent;
    double summ;

public:

    static unsigned int s_createdObjects;
    static unsigned int s_liveObjects;

    Account(const char* surname, const unsigned int check, double procent, double summ);

    ~Account();

    static void InfoAboutObjects();
    void Show();
    void Change_Owner(const char* new_surname);
    void Money_Withdraw(double withdraw);
    void Money_Deposit(double deposit);
    void Procent();
    void Dollar();
    void Euro();
};

