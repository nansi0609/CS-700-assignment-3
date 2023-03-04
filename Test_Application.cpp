#include<iostream>//for including input-output stream to display output to console.
#include<string>//for including the string functions.
#include<sstream>//for including the string stream functions.
#include"bank.cpp"//Bank Header File.


using namespace std;

int main()

{
    char ch;
    Bank b;
    do {

        cout << "\n\n0:Add Account\n1:Make Deposit \n2:Make Withdrawal\n3:Check Account\n4:Exit" << endl;
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch) {

        case '0': b.add_account();
            break;
        case '1': b.make_deposit();
            break;
        case '2': b.make_withdrawal();
            break;
        case '3': b.get_account();
            break;
        case '4': cout << "Thank you for banking with us. Have a great Day!" << endl;
            break;
        default:
            cout << "Wrong Option" << endl;
        }
    } while (ch != '4');


    return 0;
}
