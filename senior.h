#ifndef SENIOR_H_INCLUDED
#define SENIOR_H_INCLUDED

/**
 * @file senior.h
 * @brief CS-700 Assignment 3 - Senior class header file.
 *
 * This file defines the Senior class, which is used for storing customer information such as saving
 * interest, checking interest, check charge, and overdraft penalty for senior customers.
 *
 * @author Nansi Thakkar
 */

#include "Customer.h"

//! Senior class.
/*!
 * This class inherits from the Customer class and provides methods for returning savings interest,
 * checking interest, check charge, and overdraft penalty for senior customers.
 */
class Senior : public Customer
{
public:
    /**
     * @brief Constructs a Senior object with the specified name.
     *
     * This constructor sets the Customer type with all default values.
     *
     * @param str The name of the senior customer.
     */
    Senior(string str) :Customer(str) {}

    /**
     * @brief Constant saving account interest rate.
     */
    const float SAVINGS_INTEREST = 0.04;

    /**
     * @brief Constant checking account interest rate.
     */
    const float CHECK_INTEREST = 0.01;

    /**
     * @brief Constant check charge.
     */
    const float CHECK_CHARGE = 0.01;

    /**
     * @brief Constant overdraft penalty.
     */
    const float OVERDRAFT_PENALTY = 25.0;

    /**
     * @brief Returns the savings interest for senior customers.
     *
     * @return Savings interest.
     * @author
     */
    float get_SavingsInterest();

    /**
     * @brief Returns the checking interest for senior customers.
     *
     * @return Checking interest.
     */
    float get_CheckingInterest();

    /**
     * @brief Returns the check charge for senior customers.
     *
     * @return Check charge.
     */
    float get_CheckCharge();

    /**
     * @brief Returns the overdraft penalty for senior customers.
     *
     * @return Overdraft penalty.
     */
    float get_OverdraftPenalty();
};

#endif // SENIOR_H_INCLUDED
