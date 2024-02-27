#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float weight, deli_charge;
	cout << "\nEnter Weight : ";
	cin >> weight;
	if(weight < 2.5)
		deli_charge = weight * 3.5;
	else if(weight <= 5)
		deli_charge = weight * 2.85;
	else if(weight > 5)
		deli_charge = weight * 2.45;
	cout << "\nDeli charge : $" << deli_charge;
	getch();
}
