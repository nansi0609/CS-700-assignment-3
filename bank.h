#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

/**
 * @file bank.h
 * @brief CS-700 Assignment 3 header file for the Bank class
 * @details Contains declarations for Bank class and its functions.
 * @author
 *      Nansi Thakkar
 */

#include "account.cpp"
#include "senior.cpp"
#include "adult.cpp"
#include "student.cpp"
#include "customer.cpp"
#include "checking_account.cpp"
#include "savings_account.cpp"

/**
 * @class Bank
 * @brief A class for managing banking operations.
 * @details This class combines all the banking classes and provides functions to perform banking operations
 * in the Application Program.
 */
class Bank {

public:
    /**
     * @brief A public variable for incrementing the account index for adding accounts.
     */
    int acc = 0;

    /**
     * @brief An array of pointers to Account class objects.
     * @details This array holds 150 Account objects.
     */
    Account* account[100];

    /**
     * @brief Adds a new Account to the Bank.
     * @details This function prompts the user for customer information and creates a new Account object
     * of the appropriate type based on the customer's age.
     */
    void add_account();

    /**
     * @brief Makes a deposit to the specified account.
     * @details This function prompts the user for the account number and amount to be deposited,
     * and then adds the amount to the account balance.
     */
    void make_deposit();

    /**
     * @brief Makes a withdrawal from the specified account.
     * @details This function prompts the user for the account number and amount to be withdrawn,
     * and then subtracts the amount from the account balance.
     */
    void make_withdrawal();

    /**
     * @brief Gets the information for the specified account.
     * @details This function prompts the user for the account number and displays the customer information
     * and current balance for the account.
     */
    void get_account();
};

#endif // BANK_H_INCLUDED

