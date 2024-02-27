#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double acc_balance , total_withdrawls, tot_deposit,
	new_balance, tot_transitions, federal_tax, final_balance;
	cout << "Enter Acc balance : ";
	cin >> acc_balance;
	cout << "Enter total_withdrawls : ";
	cin >> total_withdrawls;
	cout << "Enter total_deposit : ";
	cin >> tot_deposit ;
	new_balance = (acc_balance-total_withdrawls)+tot_deposit;
	tot_transitions = total_withdrawls + tot_deposit;
	federal_tax = tot_transitions * 0.01;
	final_balance = new_balance + federal_tax;
	cout<<"Final Acc balance is " << final_balance;
	getch();


}