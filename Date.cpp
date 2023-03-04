#ifndef DATE_H_
#define DATE_H_
/**
    CS-700 Assignment 3
    @file Date.h
    @author Dishant Shah
*/


#include<iostream>
#include<string>
#include<sstream>
#include <math.h>

using namespace std;
/**
     * a Constant variable.
     * Constant Days of the month.
*/

const int monthDays[12] = { 31, 59, 90, 120, 151, 181, 212, 243,
273, 304, 334, 365 };
/**
    @brief Count the Leap Year Days.
    @param date array.
    @author tutorialspoint "https://www.tutorialspoint.com/find-number-of-days-between-two-given-dates-in-cplusplus"
    @return leap year days

*/
int countLeapYearDays(int d[]) {
    int years = d[2];
    if (d[1] <= 2)
        years--;
    return ((years / 4) - (years / 100) + (years / 400));
}
/**
    @brief Return Number of Days between two Date store in array.
    @param varOne date1 stored in array.
    @param varTwo date2 stored in array.
    @return Number of Days.
    @author tutorialspoint "https://www.tutorialspoint.com/find-number-of-days-between-two-given-dates-in-cplusplus"

*/
int countNoOfDays(int date1[], int date2[]) {
    long int dayCount1 = (date1[2] * 365);
    dayCount1 += monthDays[date1[1]];
    dayCount1 += date1[0];
    dayCount1 += countLeapYearDays(date1);
    long int dayCount2 = (date2[2] * 365);
    dayCount2 += monthDays[date2[1]];
    dayCount2 += date2[0];
    dayCount2 += countLeapYearDays(date2);
    return (abs(dayCount1 - dayCount2));
}
/**
    @brief Return Number of Days between two Date store in array.
    @param varOne date1 stored in string.
    @param varTwo date2 stored in string.
    @author Dishant Shah
*/

int getdays(string date_string, string date1_string)
{
    size_t pos1 = date_string.find('-');
    size_t pos2 = date_string.find('-', pos1 + 1);
    string year_string = date_string.substr(0, pos1);
    string month_string = date_string.substr(pos1 + 1, pos2 - pos1 - 1);
    string day_string = date_string.substr(pos2 + 1);

    size_t pos3 = date1_string.find('-');
    size_t pos4 = date1_string.find('-', pos3 + 1);
    string year1_string = date1_string.substr(0, pos3);
    string month1_string = date1_string.substr(pos3 + 1, pos4 - pos3 - 1);
    string day1_string = date1_string.substr(pos4 + 1);
    int date1[3] = { atoi(day_string.c_str()),atoi(month_string.c_str()),atoi(year_string.c_str()) };
    int date2[3] = { atoi(day1_string.c_str()),atoi(month1_string.c_str()),atoi(year1_string.c_str()) };
    return countNoOfDays(date1, date2);
}

#endif // DATE_H_
