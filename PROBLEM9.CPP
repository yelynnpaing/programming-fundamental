#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int cus_no, tax_code;
	double purch_amt, sales_tax, total_amt;
	cout << "\nEnter Customer no : " ;
	cin >> cus_no;
	cout << "Enter tax code : ";
	cin >> tax_code;
	cout << "Enter Purchase Amount : ";
	cin >> purch_amt;
	switch(tax_code)
	{
		case 0 : sales_tax = 0;
			break;
		case 1 : sales_tax = purch_amt * 0.03;
			break;
		case 2 : sales_tax = purch_amt * 0.05;
			break;
		case 3 : sales_tax = purch_amt * 0.07;
	}
	total_amt = purch_amt + sales_tax;
	cout << "Sales Tax = " << sales_tax << endl;
	cout << "total_amt = " << total_amt ;
	getch();
}