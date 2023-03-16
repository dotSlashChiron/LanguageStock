#include <iostream>
#include <cmath>
#define one 1.0f
#define fixedRate 3.0f
#define hundred 100.0f
class Bank
{
    std::string name_of_the_depositor;
    static float currentBalance;
    float principal;
    int years;
    float rate;

public:
    float interest;
    float return_amount;
    Bank()
    {
        name_of_the_depositor = "Guest User";
        currentBalance = 0;
    }
    void setName(std::string name);
    void depositMoney(float principal, int years);
    void depositMoney(int principal, int years);
    float calculateCompInt(float principal, float rate, int years);
    float calculateCompInt(int principal, int rate, int years);
    float calculateSimpInt(float principal, float rate, int years);
    float calculateSimpInt(int principal, float rate, int years);
    int swap(int &a, int &b);
    void swap(Bank &, Bank &);
    float showInterest(float principal)
    {
        interest = return_amount - principal;
        return interest;
    }
    inline void refundFD(void)
    {
        currentBalance = 0;
        std::cout << "Your money was refunded" << std::endl;
    }
};
void Bank::setName(std::string name)
{
    name_of_the_depositor = name;
}
void Bank::depositMoney(float principal, int years)
{
    std::cout << "The rate is fixed that is 3% per year" << std::endl;
    return_amount = principal * pow((one + fixedRate / 100), float(years));
    std::cout << "You shall get $" << return_amount << " after " << years << "years" << std::endl;
}
void Bank::depositMoney(int principal, int years)
{
    std::cout << "The rate is fixed that is 3% per year" << std::endl;
    return_amount = float(principal) * pow((one + fixedRate / hundred), years);
    std::cout << "You shall get $" << return_amount << " after " << years << "years" << std::endl;
}
float Bank::calculateCompInt(float principal, float rate, int years)
{
    return_amount = principal * pow((one + rate / hundred), years);
    return return_amount;
}
float Bank::calculateCompInt(int principal, int rate, int years)
{
    return_amount = float(principal) * pow((one + float(rate) / hundred), years);
    return return_amount;
}
float Bank::calculateSimpInt(float principal, float rate, int years)
{
    return_amount = (principal * rate * years) / 100;
    return return_amount;
}
float Bank::calculateSimpInt(int principal, float rate, int years)
{
    return_amount = (float(principal) * rate * years) / 100;
    return return_amount;
}
void Bank::swap(Bank &a, Bank &b)
{
    int temp = a.principal;
    a.principal = b.principal;
    b.principal = temp;
}

float Bank::currentBalance;

int kyamain()
{
    int x;
    float principal, rate;
    short years;
    std::cout << "Type 1) for Calculating Compund Interest" << std::endl;
    std::cout << "Type 2) for Calculating Simple Interest" << std::endl;
    std::cout << "Type 3) for Checking Your Current Balance" << std::endl;
    std::cout << "Type 4) for Depositing some Money" << std::endl;
    std::cout << "Type 5) for refunding your money" << std::endl;
    std::cin >> x;
    Bank a, b;
    if (x == 1)
    {
        std::cin >> principal;
        std::cin >> rate;
        std::cin >> years;
        std::cout << "Your Amount is " << a.calculateCompInt(principal, rate, years) << "\n";
        std::cout << "Your Interest is " << a.interest << std::endl;
    }
    else if(x == 2)
    {
        std::cin>>principal;
        std::cin>>rate;
        std::cin>>years;
        std::cout << "Your Amount is " << a.calculateSimpInt(principal,rate,years);
        std::cout<<"Your Interest is "<< a.interest << std::endl;
    } //So on....

    return 0;
}