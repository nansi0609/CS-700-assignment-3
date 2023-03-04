#include"customer.h"

   string Customer::get_name()
    {
        return name;
    }

    string Customer::get_address()
    {
        return address;
    }

    void Customer::set_name(string name)
    {
        this->name = name;
    }

    void Customer::set_address(string address)
    {
        this->address = address;
    }

    void Customer::set_age(int age)
    {
        this->age = age;
    }

    void Customer::set_telephone_number(int telephone_number)
    {
        this->telephone_number = telephone_number;
    }

    int Customer::get_age()
    {
        return age;
    }

    int Customer::get_telephone_number()
    {
        return telephone_number;
    }

    void Customer::set_customer_number(int customer_number)
    {
        this->customer_number = customer_number;
    }

    int Customer::get_customer_number()
    {
        return customer_number;
    }

    string Customer::get_Customer_type()
    {
        return Customer_type;
    }


