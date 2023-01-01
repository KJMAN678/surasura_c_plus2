class AccountEx : public Account
{
protected:
    std::string name;

public:
    std::string getName();
    AccountEx(std::string number, std::string name, int balance);
};