#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int cust_no, tax_code;
	double purch_amt, sales_tax, total_amt;
	cout << "\nEnter cust_no : ";
	cin >> cust_no;
	cout << "Enter tax_code : ";
	cin >> tax_code;
	cout << "Enter purchase amount : ";
	cin >> purch_amt;
	if(tax_code == 0)
		sales_tax=0;
	else if(tax_code == 1)
		sales_tax = purch_amt * 0.03;
	else if(tax_code == 2)
		sales_tax = purch_amt * 0.05;
	else
		sales_tax = purch_amt * 0.07;
	total_amt = purch_amt + sales_tax;
	cout << "Sales Tax is " << sales_tax << endl;
	cout << "Total Amount is " << total_amt;
	getch();
}