#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#pragma once
#include"customer.h"
#include"transaction.h"
class Account
{
private:
    int account_number;
public:
    int acc=0;
    float balance;
    Account(int j) : account_number(j), balance(0) {}
    virtual ~Account() {}
    Customer* customer;
    Transaction* transaction[100];
    virtual void deposit(float, string) = 0;
    virtual void withdrawl(float, string) = 0;
    virtual void add_interest(int, string) = 0;
    virtual void create_Account(string str1, string str2, int b, int c, int d);
    virtual int get_account_number();
    virtual float get_balance();
    virtual string get_customer();
    virtual string to_string();
    virtual string get_transaction();
    virtual void set_customer(Customer* j);
    virtual void set_balance(float balance);


};

#endif // ACCOUNT_H_INCLUDED
