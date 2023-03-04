// Include guard to prevent multiple includes of this header file
#ifndef TRANSACTION_H_INCLUDED
#define TRANSACTION_H_INCLUDED

/**

@file transaction.h
@brief Header file for the Transaction class, used for storing account transactions.
@author Nansi Thakkar
*/
#include <string> // Header file for string functions
#include <iostream> // Header file for input-output stream to display output to console
#include <sstream> // Header file for string stream functions
#include <iomanip> // Header file for outputting data with precision

using namespace std;

//! Transaction class.
/*!

Classname : Transaction

Author : Nansi Thakkar

Superclasses : None

Subclasses : None

Description : This class is used to store transactions of an account, including the type of transaction, amount, balance, and date.
*/
class Transaction {
private:

/**
@brief The type of transaction (e.g. deposit, withdrawal).
*/
string t_type;
/**

@brief The amount of the transaction.
*/
double amt;
/**

@brief The balance of the account after the transaction.
*/
double balance;
/**

@brief The date of the transaction.
*/
string date;
public:
/**
* @brief A constructor.
* @param trans The type of transaction
* @param d The date of the transaction
* @param amount The amount of the transaction
* @param balance The balance of the account after the transaction
* @note Sets the type of transaction, date, amount, and balance of the account.
*/
Transaction(string trans, string d, double amount, double balance) :
t_type(trans), date(d), amt(amount), balance(balance) {}


/**
 * @brief Returns the date of the transaction.
 * @return The date of the transaction as a string.
 * @note This function overrides the virtual function in the base class.
 */
virtual string get_date();

/**
 * @brief Returns a string representation of the transaction.
 * @return A string containing the type of transaction, amount, balance, and date.
 * @note This function overrides the virtual function in the base class.
 */
virtual string to_string();
};

#endif // TRANSACTION_H_INCLUDED
