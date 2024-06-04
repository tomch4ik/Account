#include <iostream>
#include "Account.h"
using namespace std;

unsigned int Account::s_createdObjects = 0U;
unsigned int Account::s_liveObjects = 0U;

Account::Account(const char* surname, const unsigned int check, double procent, double summ)
	: number_of_check(check), procent(procent), summ(summ)
{
	this->surname = new char[strlen(surname) + 1];
	strcpy_s(this->surname, strlen(surname) + 1, surname);
	++s_createdObjects;
	++s_liveObjects;
}

Account::~Account()
{
	delete[] surname;
	--s_liveObjects;
}

void Account::InfoAboutObjects()
{
	cout << "Created objects: " << s_createdObjects << endl;
	cout << "Live objects: " << s_liveObjects << endl;
}

void Account::Show()
{
	cout << "Surname: " << surname << "\n" << "Check: " << number_of_check << "\t" << "Procent: " << procent 
		<< "\n" <<"Summ of money: " << "\n" << summ << endl << endl;
}

void Account::Change_Owner(const char* new_surname)
{
	delete[] surname;
	surname = new char[strlen(new_surname) + 1];
	strcpy_s(surname, strlen(new_surname) + 1, new_surname);
}

void Account::Money_Withdraw(double withdraw)
{
	summ -= withdraw;
}

void Account::Money_Deposit(double deposit)
{
	summ += deposit;
}

void Account::Procent()
{
	summ += summ * (procent / 100);
}

void Account::Dollar()
{
	summ += summ / 41;
	cout << "Summ convert to dollars" << endl;
}

void Account::Euro()
{
	summ += summ / 45;
	cout << "Summ convert to euros" << endl;
}

