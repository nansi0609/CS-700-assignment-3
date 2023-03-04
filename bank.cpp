 #include"bank.h"

    void Bank::add_account()
    {
        string name, addr;
        int age, phone, custnum;
        cout << "Enter Name> ";
        cin.ignore();
        getline(cin, name, '\n');
        cout << "Enter  Address> ";
        cin.ignore();
        getline(cin, addr, '\n');
        cout << "Enter  Age in (in numbers only)> ";
        cin >> age;
        cout << "Enter Phone Number> ";
        cin >> phone;
        int f, g;
        float a, b, c;
        cout << "Select from below:-" << endl;
        cout << "0: Senior" << endl;
        cout << "1: Adult" << endl;
        cout << "2: Student" << endl;
        cin >> f;
        cout << "Select from below:-" << endl;
        cout << "0: Checking" << endl;
        cout << "1: Savings" << endl;
        cin >> g;

        if (f == 0)
        {
            Customer* cust = new Senior("Senior");

            if (g == 0)
            {
                a = cust->get_CheckingInterest();
                b = cust->get_CheckCharge();
                c = cust->get_OverdraftPenalty();
                account[acc] = new Checking_Account(acc, a, b, c);
                account[acc]->set_customer(cust);
                account[acc]->create_Account(name, addr, age, phone, custnum);
                cout << "Account " << acc << " is added." << endl;
                acc++;
            }
            else
            {
                a = cust->get_SavingsInterest();
                c = cust->get_OverdraftPenalty();
                account[a] = new Savings_Account(acc, a, c);
                account[a]->set_customer(cust);
                account[a]->create_Account(name, addr, age, phone, custnum);
                cout << "Account " << acc << " is added." << endl;
                acc++;
            }
        }
        else if (f == 1)
        {
            Customer* cust = new Adult("Adult");

            if (g == 0)
            {
                a = cust->get_CheckingInterest();
                b = cust->get_CheckCharge();
                c = cust->get_OverdraftPenalty();
                account[a] = new Checking_Account(acc, a, b, c);
                account[a]->set_customer(cust);
                account[a]->create_Account(name, addr, age, phone, custnum);
                cout << "Account " << acc << " is added." << endl;
                acc++;
            }
            else
            {
                a = cust->get_SavingsInterest();
                c = cust->get_OverdraftPenalty();
                account[a] = new Savings_account(acc, a, c);
                account[a]->set_customer(cust);
                account[a]->create_Account(name, addr, age, phone, custnum);
                cout << "Account " << acc << " is added." << endl;
                acc++;
            }
        }
        else if (f == 2)
        {
            Customer* cust = new Student("Student");

            if (g == 0)
            {
                a = cust->get_CheckingInterest();
                b = cust->get_CheckCharge();
                c = cust->get_OverdraftPenalty();
                account[a] = new Checking_Account(acc, a, b, c);
                account[a]->set_customer(cust);
                account[a]->create_Account(name, addr, age, phone, custnum);
                cout << "Account " << acc << " is added." << endl;
                acc++;
            }
            else
            {
                a = cust->get_SavingsInterest();
                c = cust->get_OverdraftPenalty();
                account[acc] = new Savings_Account(acc, a, c);
                account[acc]->set_customer(cust);
                account[acc]->create_Account(name, addr, age, phone, custnum);
                cout << "Account " << acc << " is added." << endl;
                acc++;
            }
        }

    }


    void Bank::make_deposit()
    {
        int a;
        float b;
        string date;
        cout << "Enter Account Number> ";
        cin >> a;
        cout << "Enter The Amount> ";
        cin >> b;
        cout << "Enter the date yyyy-mm-dd> ";
        cin >> date;
        account[a]->deposit(b, date);
        cout << "Deposit in " << a << " amount: $ " << fixed << setprecision(2) << (double)b << " on " << date << " new balance: " << "$ " << fixed << setprecision(2) << double(account[a]->get_balance()) << endl;

    }

    void Bank::make_withdrawal()
    {
        int a;
        float b;
        string date;
        cout << "Enter Account Number> ";
        cin >> a;
        cout << "Enter The Amount> ";
        cin >> b;
        cout << "Enter the date yyyy-mm-dd> ";
        cin >> date;
        account[a]->withdrawl(b, date);
        cout << "Withdraw from " << a << " amount: $ " << fixed << setprecision(2) << (double)b << " on " << date << " new balance: " << "$ " << fixed << setprecision(2) << double(account[a]->get_balance()) << endl;
    }

    void Bank::get_account()
    {
        int a;
        cout << "Enter Account Number> ";
        cin >> a;
        cout << account[a]->to_string();
        cout << account[a]->get_transaction() << "\n";
    }

