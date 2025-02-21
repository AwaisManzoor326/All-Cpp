#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
	private:
		int accountnum;
		string ownername;
		double balance;
	public:
		BankAccount(int acn, string name, double initialbalance)
		{
			accountnum=acn;
			ownername=name;
			balance=initialbalance;
		}	//constructor
		void deposit(int ammount)
		{
			if(ammount>0)
			{
				balance+=ammount;
				cout<<"Deposit SuccessFull.....Your new Balance is "<<balance<<endl;
			}
			else
				cout<<"Invalid Amount......"<<endl;
		}
		void withdraw(int wdam)
		{
			if(wdam>0&&wdam<=balance)
			{
				balance-=wdam;
				cout<<"WithDrawl SuccessFull......New balance is "<<balance<<endl;
			}
			else
				cout<<"Invalid ammount.....Or low Balance....."<<endl;
		}
		void displayinfo()
		{
			cout<<"Account Details: "<<endl;
			cout<<"Owner name: "<<ownername<<endl;
			cout<<"Account number: "<<accountnum<<endl;
			cout<<"Balance: "<<balance<<endl;
		}
};
int main()
{
	BankAccount acc1(8658326,"Awais Manzoor",50000);
	acc1.deposit(30000);
	acc1.withdraw(45000);
	acc1.displayinfo();
}
