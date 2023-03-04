This is a banking program that simulates the operation of a local bank. The program is written in C++ and consists of several classes that interact with each other to perform various banking operations.

Classes
The following classes are included in the program:

Account
This class represents a bank account and has the following data fields:

customer (type Customer)
balance
account_number
transactions array (type transaction*)
The class has the following member functions:

create_Account()
get_account_number()
get_balance()
get_customer()
to_string()
set_customer()
set_balance()
Savings_Account
This class extends the Account class and has the following member functions:

deposit()
withdraw()
add_interest()
Checking_Account
This class extends the Account class and has the following member functions:

deposit()
withdraw()
add_interest()
Customer
This class represents a bank customer and has the following data fields:

name
address
age
telephone_number
customer_number
The class has accessors and modifiers for data fields.

Senior, Adult, Student
These classes extend the Customer class and have the following constant data fields:

SAVINGS_INTEREST
CHECK_INTEREST
CHECK_CHARGE
OVERDRAFT_PENALTY
These values define the values for customers of that type.

Bank
This class represents a bank and has the following data field:

array accounts (type Account*)
The class has the following member functions:

add_account()
make_deposit()
make_withdrawal()
get_account()
Transaction
This class represents a bank transaction and has the following data fields:

transaction_type
amount
balance
type Date2
The class has the following member functions:

to_string()
Usage
To use the program, you should create an instance of the Bank class and then open several accounts using the add_account() function. You can then enter several transactions using the make_deposit() and make_withdrawal() functions.


Github link for the following repository is as follows:- 