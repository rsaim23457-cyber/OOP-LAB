 #include <iostream>
using namespace std;
class Account{
	private:
	string accountNumber;
	double balance;
	public:
	Account(string acc, double bal){
	accountNumber = acc;
	balance = bal;
}	
	Account operator + (Account a){
	double newBalance= balance+a.balance;
	string newAcc ="Combine_"+accountNumber;
	return Account (newAcc, newBalance);
}
 void display(){
	cout<<"Account No:"<< accountNumber<<endl;
	cout<<"Balance:"<< balance<<endl;
	cout<<"---------"<<endl;
}
};
int main(){
	string acc1, acc2;
	double bal1, bal2;
	
	cout<<"Enter the first account number:";
	cin>> acc1;
	cout<<"Enter first balance:";
	cin>> bal1;
	
	cout<<"Enter the second account number:";
	cin>> acc2;
	cout<<"Enter second balance:";
	cin>> bal2;
	
	Account a1(acc1, bal1);
	Account a2(acc2, bal2);
	Account a3 = a1 + a2;
	cout<<"\nCombine Account Detail:"<<endl;
	a3.display();
	return 0;
}
