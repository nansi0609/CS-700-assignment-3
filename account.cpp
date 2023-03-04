#include "account.h"
#include<string>
#include<iostream>
#include<sstream>
#include <iomanip>

using namespace std;

    void Account::create_Account(string name, string addd, int age, int phone, int custnom)
    {
        customer->set_name(name);
        customer->set_address(addd);
        customer->set_age(age);
        customer->set_telephone_number(phone);
        customer->set_customer_number(custnom);
    }

    int Account:: get_account_number()
    {
        return account_number;
    }

    float Account:: get_balance()
    {
        return balance;
    }

    string Account:: get_customer()
    {
        return customer->get_name();

    }

    string Account:: to_string()
    {
        ostringstream o;
        o << "Account Number: " << get_account_number() << "\n"
            << "Owner: " << customer->get_name() << "\n"
            << "Type of Customer: " << customer->get_Customer_type() << "\n"
            << "Balance: " << fixed << setprecision(2) << (double)balance << "\n";

        return o.str();
    }

    string Account:: get_transaction()
    {
        ostringstream transactionnn;
        for (int j = 0; j < a; j++)
        {
            transactionnn << transaction[j]->to_string() << "\n";
        }
        return transactionnn.str();
    }

    void Account:: set_customer(Customer* cust)
    {

        this->customer = cust;

    }

    void Account:: set_balance(float balance)
    {
        this->balance = balance;
    }
