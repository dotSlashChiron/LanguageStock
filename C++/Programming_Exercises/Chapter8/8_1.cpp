#include "8_1.h"
#include <iostream>
#include <cmath>
#include <string>
#include <random>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
bank::bank(int _starter)
{
    this->bank_balance = _starter;
}
cur_acct::cur_acct()
{
    std::cout << "Dear " << this->bank_account_no << ", your current account has been successfully opened! \n";
    std::cout << "Your current balance is " << this->showBalance() << "\n";
}
cur_acct::cur_acct(int _amount) : bank(_amount)
{
    std::cout << "Dear " << this->bank_account_no << ", your current account has been successfully opened! \n";
    std::cout << "You've deposited some money and the extra has been refunded! \n";
    this->update_bank_balance(_amount);
    std::cout << "Your current balance is " << this->showBalance() << "\n";
}
sav_acct::sav_acct()
{
    std::cout << "Dear " << this->bank_account_no << ", your saving account has been successfully opened! \n";
    std::cout << "Your current bank balance is " << this->showBalance() << "\n";
}
void bank::chargeFine(int _fine)
{
    this->bank_balance = this->bank_balance - _fine;
    std::cout << "$ " << _fine << " were fined due to balance below " << this->min_balance << std::endl;
}
void bank::chargeFine(int _fine, std::string _reason)
{
    this->bank_balance = this->bank_balance - _fine;
    std::cout << "$ " << _fine << " were fined due to balance below " << this->min_balance << std::endl;
    std::cout << "Reason: ";
    for (auto &c : _reason)
    {
        std::cout << c;
    }
    std::cout << "\n";
}
float bank::calclate_compound_interest(float _principal, int _years)
{
    return float(_principal * pow(1 + rate / 100, _years));
}
float bank::calculate_compound_interest(int _principal, int _years)
{
    return float(float(_principal) * pow(1 + rate / 100, _years));
}
bool bank::checkBalance()
{
    if (this->bank_balance > this->min_balance)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void cur_acct::generate_cheque(int _amount)
{
    if (this->checkBalance())
        std::cout << "You've recieved cheque of $" << _amount << " successfully!" << std::endl;
    else
        std::cout << "Sorry the check could not be withdrawed because your balance is below $ 10,000" << std::endl;
}
void bank::update_bank_balance(int _amount)
{
    this->bank_balance += _amount;
}
void user::getUserInfo()
{
    srand(time(0));
    std::string name;
    std::cout << "Enter your name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    int a = strlen(this->username);
    for (int i = 0; i < a; i++)
    {
        username[i] = name[i];
    }
    this->account_no = rand();
    std::cout << "Your id is " << this->account_no << std::endl;
    this->bank_account_no = this->account_no;
}
int bank::showBalance()
{
    return this->bank_balance;
}
void user::displayUserInfo()
{
    std::cout << "Your name is : ";
    for (int i = 0; i < strlen(username); i++)
    {
        std::cout << username[i];
    }
    std::cout << std::endl;
    std::cout << "Your bank balance is: " << this->showBalance() << std::endl;
    std::cout << "Your Bank ID is: " << this->account_no << std::endl;
}
void sav_acct::deposit_money(int _amount)
{
    std::cout << "Enter period: ";
    int period;
    std::cin >> period;
    float result = calculate_compound_interest(_amount, period);
    std::cout << "Congrats! Your deposit was successful! \n";
    std::cout << "You'll recieve " << result << " after " << period << " years.\n Your interest will be $" << result - _amount << "\n";
}
int sabmain()
{
    user u;
    u.getUserInfo();
    int g_amount;
    std::cout << "Please Enter an amount to deposit as starting deposit: ";
    std::cin >> g_amount;
    bank b(g_amount);
    std::cout << "\n1) Add Balance\n2) Display Balance and Info\n3) Open Account\n";
    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        int amount;
        std::cout << "Enter a amount: ";
        std::cin >> amount;
        b.update_bank_balance(amount);
        break;
    case 2:
        u.displayUserInfo();
        break;
    case 3:
        std::cout << "What type of bank do you wanna open? \ni) Current Account\nii) Savings Account\n";
        int choose;
        std::cout << "Write (1/2): ";
        std::cin >> choose;
        if (choose == 1)
        {
            char u_choice_4;
            std::cout << "Do you want to deposit some money for your current account? (Y/N): ";
            std::cin >> u_choice_4;
            u_choice_4 = tolower(u_choice_4);
            if (u_choice_4 == 'y')
            {
                int c_amount;
                std::cout << "Enter a amount: ";
                std::cin >> c_amount;
                cur_acct c(c_amount);
            }
            else
            {
                cur_acct c_def;
            }
        }else{
            sav_acct s;
        }
        break;
    default:
        std::cout << "Either under progress or not available! \n";
        break;
    }
    return 0;
};