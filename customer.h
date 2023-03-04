#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

/**

@file Customer.h
This file contains the declaration of the Customer class.
*/
#include <string> // for including the string functions.

using namespace std;

/**

    @brief This class is used for storing customer information like name, address, age,
    telephone number, customer number, and customer type.
    @author Nansi Thakkar
*/
class Customer {
private:
string name; ///< a private variable for name.
string address; ///< a private variable for address.
int age; ///< a private variable for age.
int telephone_number; ///< a private variable for telephone number.
int customer_number; ///< a private variable for customer number.
public:
string Customer_type; ///< a public variable for customer type.


/**
 * @brief A constructor that sets the customer type.
 * @param s - the customer type
 */
Customer(string s) : Customer_type(s) {}

/**
 * @brief A virtual destructor.
 */
virtual ~Customer() {}

/**
 * @brief Returns the savings interest according to the customer type.
 * @return the savings interest.
 */
virtual float get_SavingsInterest() = 0;

/**
 * @brief Returns the checking interest according to the customer type.
 * @return the checking interest.
 */
virtual float get_CheckingInterest() = 0;

/**
 * @brief Returns the check charge according to the customer type.
 * @return the check charge.
 */
virtual float get_CheckCharge() = 0;

/**
 * @brief Returns the overdraft penalty according to the customer type.
 * @return the overdraft penalty.
 */
virtual float get_OverdraftPenalty() = 0;

/**
 * @brief Returns the name of the customer.
 * @return the name of the customer.
 */
virtual string get_name();

/**
 * @brief Returns the address of the customer.
 * @return the address of the customer.
 */
virtual string get_address();

/**
 * @brief Sets the name of the customer.
 * @param name - the name of the customer.
 */
virtual void set_name(string name);

/**
 * @brief Sets the address of the customer.
 * @param address - the address of the customer.
 */
virtual void set_address(string address);

/**
 * @brief Sets the age of the customer.
 * @param age - the age of the customer.
 */
virtual void set_age(int age);

/**
 * @brief Sets the telephone number of the customer.
 * @param telephone_number - the telephone number of the customer.
 */
virtual void set_telephone_number(int telephone_number);

/**
 * @brief Returns the age of the customer.
 * @return the age of the customer.
 */
virtual int get_age();

/**
 * @brief Returns the telephone number of the customer.
 * @return the telephone number of the customer.
 */
virtual int get_telephone_number();

/**
 * @brief Sets the customer number of the customer.
 * @param customer_number - the customer number of the customer.
 */
virtual void set_customer_number(int customer_number);

/**
 * @brief Returns the customer number of the customer.
 * @return the customer number of the customer.
 */
virtual int get_customer_number();

/**
 * @brief Returns the type of customer.
 * @return the type of customer.
 */
virtual string get_Customer_type();
};

#endif // CUSTOMER_H_INCLUDED
