#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;
class Account{
private:
	string accountNumber;
	double balance;
	public:
	Account (string acc, double bal){
	accountNumber = acc;
	balance = bal;
	}
	Account operator + (Account a){
	double newBalance = balance + a.balance;
	int randomNum = rand() % 90000 + 10000;
	
	char numStr[10];
	sprintf(numStr,"%d", randomNum);
	string newAcc = "ACC" + string(numStr);
	return Account(newAcc, newBalance);
	}
	void display(){
	cout<<"Account No:"<< accountNumber <<endl;
	cout<<"Balance:"<< balance <<endl;
	cout<<"-----"<<endl;

	}
};
int main(){
	srand(time(0));
	
	string acc1, acc2;
	double bal1, bal2;
	
	cout<<"Enter first account number:";
	cin>> acc1;
	cout<<"Enter first balance:";
	cin>> bal1;
	
	cout<<"Enter second account number:";
	cin>> acc2;
	cout<<"Enter second balance:";
	cin>> bal2;
	
	Account a1(acc1, bal1);
	Account a2(acc2, bal2);
	Account a3 = a1 + a2;
	
	cout<<"\nNew Combine Account:"<<endl;
	a3.display();
	return 0;
}
