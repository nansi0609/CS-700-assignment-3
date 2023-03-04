#ifndef CHECKING_ACCOUNT_H_INCLUDED
#define CHECKING_ACCOUNT_H_INCLUDED
/**
    CS-700 Assignment 3
    @file checking_account.h
    @brief Contains the declaration of Checking_Account class.
    @details This class calculates the interest, handles deposits and withdrawals for current accounts, and stores transaction information.
    @date 2021-10-05
    @version 1.0
    @author Nansi Thakkar
*/

#include"account.h"
#include"Date.cpp"

/**
 * @brief The Checking_Account class.
 * @details This class calculates the interest, handles deposits and withdrawals for current accounts, and stores transaction information.
 * @inherits Account
 * @author Nansi Thakkar
 */
class Checking_Account : public Account
{

public:
    /**
     * @brief Interest Rate.
     */
    float interest;
    /**
     * @brief Check Charge.
     */
    float check_charge;
    /**
     * @brief Overdraft penalty charge.
     */
    float overdraft_penalty;

    /**
     * @brief Constructor for Checking_Account class.
     * @details Sets the account number, interest, check charge, and overdraft penalty of the account.
     * @param acc The account number.
     * @param a The interest rate.
     * @param b The check charge.
     * @param c The overdraft penalty.
     * @date 2021-10-05
     * @version 1.0
     * @author
     */
    Checking_Account(int acc, float a, float b, float c) : Account(acc), interest(a), check_charge(b), overdraft_penalty(c) {}

    /**
     * @brief Virtual destructor for Checking_Account class.
     * @date 2021-10-05
     * @version 1.0
     */
    virtual ~Checking_Account() {}

    /**
     * @brief Deposit an amount in the account.
     * @param amt The amount to be deposited.
     * @param dt The date of the transaction.
     * @date 2021-10-05
     * @version 1.0
     * @author
     */
    void deposit(float amt, string dt);

    /**
     * @brief Withdraw an amount from the account.
     * @param amt The amount to be withdrawn.
     * @param dt The date of the transaction.
     * @date 2021-10-05
     * @version 1.0
     * @author
     */
    void withdrawl(float amt, string dt);

    /**
     * @brief Add interest to the account.
     * @param days The number of days for which interest is to be calculated.
     * @param dt The date of the transaction.
     * @date 2021-10-05
     * @version 1.0
     * @auhtor Nansi Thakkar
     */
    void add_interest(int days, string dt);
};


#endif // CHECKING_ACCOUNT_H_INCLUDED
