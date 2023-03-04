#include"transaction.h"

   string Transaction:: get_date()
    {
        return date;
    }

   string Transaction::to_string()
    {
        ostringstream result;
        result << transaction_type << "   " << date << "     " << "$ " << fixed << setprecision(2) << amount << "   " << "$ " << fixed << setprecision(2) << balance;
        return result.str();
    }

