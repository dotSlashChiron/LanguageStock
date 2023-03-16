#include <iostream>
class user;
class bank{
    private:
    const int min_balance = 10000;
    const float rate = 1.25;
    static int bank_balance;
    protected:    
    int extra_bal;
    int bank_account_no;
    bool checkBalance();
    void chargeFine(int);
    void chargeFine(int,std::string);
    float calclate_compound_interest(float,int);
    float calculate_compound_interest(int,int);
    public:
    bank(){};
    bank(int _starter);
    int showBalance();
    void update_bank_balance(int);
};
class cur_acct:private bank{
    protected:
    void generate_cheque(int);
    public:
    cur_acct();
    cur_acct(int _amount);
};
class sav_acct:protected bank{
    public:
    sav_acct(void);
    void deposit_money(int _amount);
};
class user:private bank{
    private:
    char* username;
    int account_no;
    protected:
    public:
    void getUserInfo();
    void displayUserInfo();
};
int bank::bank_balance;