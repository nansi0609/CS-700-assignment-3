#include "checking_account.h"
#include "Date.cpp"

    void Checking_Account::deposit(float amount, string date)
    {
        balance += amount;
        transaction[a] = new Transaction("   DEP", date, (double)amount, (double)balance);
        a++;

    }

    void Checking_Account::withdrawl(float amount, string date)
    {
        string date1 = transaction[a - 1]->get_date();
        int days_difference = getdays(date1, date);
        add_interest(days_difference, date);
        if (balance < amount)
        {
            cout << "Not have enough balance to withdraw." << endl;
            balance -= overdraft_penalty;
            transaction[a] = new Transaction("O_PLTY", date, (double)amount, (double)balance);
            a++;
        }
        else
        {
            balance -= amount;

        }
        transaction[a] = new Transaction("   WD", date, (double)amount, (double)balance);
        a++;
        balance -= check_charge;
        transaction[a] = new Transaction("CHKCRG", date, (double)check_charge, (double)balance);
        a++;
    }

    void Checking_Account::add_interest(int days, string date)
    {
        float amount = (balance * interest * days) / 365;
        balance += amount;
        transaction[a] = new Transaction("INT CR", date, (double)amount, (double)balance);
        a++;
    }

