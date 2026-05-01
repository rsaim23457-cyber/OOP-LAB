# include <iostream>
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
	Account a1 ("12345", 5000.50);
	Account a2 ("67890", 3000.25);
	
	cout<<"First Account:"<<endl;
	a1.display();
	cout<<"second Account:"<<endl;
	a2.display();
	
	Account a3 = a1 + a2;
	cout<<"combine Account:"<<endl;
	a3.display();
	return 0;
}
