#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char code;
	double price, new_price, dis_amount;
	cout << "\nEnter Article Price : ";
	cin >> price;
	cout << "\nEnter Pricing code : ";
	cin >> code;
	switch(code)
	{
		case 'H' : dis_amount = price * 0.5;
			break;
		case 'F' : dis_amount = price * 0.4;
			break;
		case 'T' : dis_amount = price * 0.33;
			break;
		case 'Q' : dis_amount = price * 0.25;
			break;
		case 'Z' : dis_amount = price * 0.0;
			break;
		default  :
			cout << "\nInvalid pricing code" << endl << endl;
	}
	new_price = price - dis_amount ;
	cout << "Original price : " << price << endl;
	if(code == 'H'|| code == 'F'|| code == 'T' || code == 'Q'|| code == 'Z')
		cout << "Discount amount : " << dis_amount << endl;
	cout << "New Price : " << new_price ;
	getch();
}