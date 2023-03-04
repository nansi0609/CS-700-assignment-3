/**

@file student.h
@brief Defines the Student class, which is a subclass of Customer.
@details This class stores customer information such as savings interest,
checking interest, check charge, and overdraft penalty for student customers.
@author Nansi Thakkar
*/
#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include "customer.h"

/**

@class Student

@brief Class for storing information of student customers.

@details This class is used to store customer information like Saving interest,

Check Interest, Check charge, and Overdraft penalty for Student Customer.
*/
class Student : public Customer
{
public:
/**
@brief A constructor.
@details Initializes the Customer type with default values.
@param str The name of the student customer
*/
Student(string str) :Customer(str) {}
/**

@brief A public constant variable.
@details Constant for Saving Account Interest Rate.
*/
const float SAVINGS_INTEREST = 0.04;
/**

@brief A public constant variable.
@details Constant for Checking Account Interest Rate.
*/
const float CHECK_INTEREST = 0.01;
/**

@brief A public constant variable.
@details Constant for Check Charge.
*/
const float CHECK_CHARGE = 0.02;
/**

@brief A public constant variable.
@details Constant for Overdraft Penalty.
*/
const float OVERDRAFT_PENALTY = 25.0;
/**

@brief Returns the savings interest rate for student customers.
@return Savings interest rate for student customers.
@note This function overrides the virtual function in the base class.
@see Customer::get_SavingsInterest()
*/
float get_SavingsInterest() override;
/**

@brief Returns the checking interest rate for student customers.
@return Checking interest rate for student customers.
@note This function overrides the virtual function in the base class.
@see Customer::get_CheckingInterest()
*/
float get_CheckingInterest() override;
/**

@brief Returns the check charge for student customers.
@return Check charge for student customers.
@note This function overrides the virtual function in the base class.
@see Customer::get_CheckCharge()
*/
float get_CheckCharge() override;
/**

@brief Returns the overdraft penalty for student customers.
@return Overdraft penalty for student customers.
@note This function overrides the virtual function in the base class.
@see Customer::get_OverdraftPenalty()
*/
float get_OverdraftPenalty() override;
};
#endif // STUDENT_H_INCLUDED



