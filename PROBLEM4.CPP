#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int regular_hrs, overtime_hrs, wage_rate;
	double regular_pay, overtime_pay, weekly_pay;
	cout << "\nregular hours , overtime hours , wage rate : ";
	cin >> regular_hrs;
	cin >> overtime_hrs;
	cin >> wage_rate;
	regular_pay = regular_hrs*wage_rate;
	overtime_pay = overtime_hrs * (wage_rate * 1.5);
	weekly_pay = overtime_pay + regular_pay;
	cout << "Weekly pay is " << weekly_pay;
	getch();

}