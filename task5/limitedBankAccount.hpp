#include"BankAccount.hpp"
class limitedBankAccount : public BankAccount
{
private:
	double limit;
public:
	limitedBankAccount(string name,double limit);
	void setLimit(double limit);
	double getLimit();
	string getType();
};
