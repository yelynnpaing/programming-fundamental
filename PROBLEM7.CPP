#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int int1, int2, sum, diff, product, quotient;
	cout << "\nEnter int1 and int2 : ";
	cin >> int1;
	cin >> int2;
	sum = int1 + int2;
	cout << "Sum : " << sum << endl;
	diff = int1 - int2;
	cout << "Difference : " << diff << endl;
	product = int1 * int2;
	cout << "Product : " << product << endl;
	if(int2 != 0){
		quotient = int1 / int2;
		cout << "Quotient : " << quotient;
	}
	getch();
}