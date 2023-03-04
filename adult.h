#ifndef ADULT_H_INCLUDED
#define ADULT_H_INCLUDED

/**
 * @file adult.h
 * @brief CS-700 Assignment 3 header file for the Adult class
 * @author
 *      Nansi Thakkar
 */

#include "customer.h"

/**
 * @class Adult
 * @brief A subclass of Customer for storing information specific to adult customers.
 * @details This class stores information such as savings interest rate, checking interest rate,
 * check charge, and overdraft penalty for adult customers.
 * @see Customer
 */
class Adult : public Customer {
public:
    /**
     * @brief Constructor for Adult class.
     * @param str A string containing the customer's name.
     */
    Adult(string str) : Customer(str) {}

    /**
     * @brief Constant variable for savings interest rate.
     */
    const float SAVINGS_INTEREST = 0.03;

    /**
     * @brief Constant variable for checking interest rate.
     */
    const float CHECK_INTEREST = 0.01;

    /**
     * @brief Constant variable for check charge.
     */
    const float CHECK_CHARGE = 0.03;

    /**
     * @brief Constant variable for overdraft penalty.
     */
    const float OVERDRAFT_PENALTY = 25.0;

    /**
     * @brief Returns the savings interest rate for an adult customer.
     * @return The savings interest rate as a float.
     */
    float get_SavingsInterest();

    /**
     * @brief Returns the checking interest rate for an adult customer.
     * @return The checking interest rate as a float.
     */
    float get_CheckingInterest();

    /**
     * @brief Returns the check charge for an adult customer.
     * @return The check charge as a float.
     */
    float get_CheckCharge();

    /**
     * @brief Returns the overdraft penalty for an adult customer.
     * @return The overdraft penalty as a float.
     */
    float get_OverdraftPenalty();
};

#endif // ADULT_H_INCLUDED
