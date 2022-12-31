class Account
{
protected:
    std::string number;
    int balance;

public:
    std::string getNumber();
    int getBalance();
    void setBalance(int balance);
    Account(std::string number, int balance);
};