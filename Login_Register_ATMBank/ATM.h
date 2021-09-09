
#ifndef ATM_H
#define ATM_H
#include <string>

class ATM
{
public:
    ATM()          // initializing 
        : balance_(0.0), withdrawal_(0.0), deposit_(0.0),
        pin_(0), routingNumber_(0), accNumber_(0), checkNumber_(0) {}

    // ATM Functions
    void totalBalance();
    void moneyWithdrawal();
    void moneyDeposit();

    // main.cpp functions 
    void displayMenu();
    void processMenuChoices();
    void displaySignInMenu();

private:
    double balance_, withdrawal_, deposit_;
    int pin_, routingNumber_, accNumber_, checkNumber_;
};

class Account
{
public:
    Account()      // initializing 
        : firstName_(""), lastName_(""), emailOne_(""),
        emailTwo_(""), passwordOne_(""), passwordTwo_("") {}

    void signUp();
    void signIn();
    // bool readInFiles(const std::string& signup)

private:
    std::string firstName_, lastName_, emailOne_,
        emailTwo_, passwordOne_, passwordTwo_;
};

#endif // !ATM_H
