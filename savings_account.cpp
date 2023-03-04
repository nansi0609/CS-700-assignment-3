 #include"savings_account.h"


    void Savings_Account::deposit(float amount, string date)
    {
        balance += amount;
        transaction[a] = new Transaction("   DEP", date, (double)amount, (double)balance);
        a++;
    }

    void Savings_Account::withdrawal(float amount, string date)
    {
        string date1 = transaction[a - 1]->get_date();
        int days_difference = getdays(date1, date);
        add_interest(days_difference, date);
        if (balance < amount)
        {
            cout << "Not have enough balance to withdraw." << endl;
            balance -= overdraft_penalty;
            transaction[a] = new Transaction("OV_PTY", date, (double)amount, (double)balance);
            a++;
        }
        else
        {
            balance -= amount;
        }
        transaction[a] = new Transaction("   WD", date, (double)amount, (double)balance);
        a++;
    }

    void Savings_Account::add_interest(int days, string date)
    {
        float amount = (balance * interest * days) / 365;
        balance += amount;
        transaction[a] = new Transaction("INT CR", date, (double)amount, (double)balance);
        a++;
    }

