#ifndef SAVINGS_ACCOUNT_H_INCLUDED
#define SAVINGS_ACCOUNT_H_INCLUDED
/**
CS-700 Assignment 3
@file savings_account.h
@author Nansi Thakkar
*/

#include "account.h"
#include "Date.cpp"

//! Savings_Account class.
/*!
This class calculates the interest, does deposits and withdrawals, and stores transaction history of savings accounts.
*/
class Savings_Account : public Account
{

public:
/**
* Public variable.
* Interest rate of the savings account.
*/
float interest;


/**
  * Public variable.
  * Overdraft penalty charge of the savings account.
  */
float overdraft_penalty;

/**
  * Constructor.
  * Initializes the account number, interest rate and overdraft penalty of the savings account.
  */
Savings_Account(int acc, float i, float op) :
    Account(acc), interest(i), overdraft_penalty(op) {}

/**
  * Virtual destructor.
  */
~Savings_Account() {}

/**
    Deposit function for savings account.
    @param amt Amount to be deposited.
    @param dt Date of the transaction.
    @author Nansi Thakkar
*/
void deposit(float amt, string dt);

/**
    Withdrawal function for savings account.
    @param amt Amount to be withdrawn.
    @param dt Date of the transaction.
    @exception InsufficientFundsException Thrown when there are insufficient funds to make the withdrawal.
    @exception OverdraftPenaltyException Thrown when a withdrawal causes an overdraft and incurs a penalty charge.
    @exception InvalidWithdrawalException Thrown when the withdrawal amount is negative or zero.
*/
void withdrawal(float amt, string dt);

/**
    Function to add interest to savings account.
    @param days Number of days for which interest is to be calculated.
    @param dt Date of the transaction.
*/
void add_interest(int days, string dt);
};




#endif // SAVINGS_ACCOUNT_H_INCLUDED
