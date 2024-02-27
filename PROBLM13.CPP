#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float loan_amount, deposit;
	cout << "\nEnter Loan amount : ";
	cin >> loan_amount;
	if(loan_amount < 25000)
		deposit = loan_amount * 0.05;
	else if(loan_amount < 50000)
		deposit = 1250 + ((loan_amount - 25000) * 0.1);
	else if(loan_amount <= 100000)
		deposit = 5000 + ((loan_amount - 50000) * 0.25);
	else
		cout << "Loan amount does not allow over $1000000";
	if(loan_amount <= 100000)
		cout << "Deposit : $" << deposit;
	getch();
}