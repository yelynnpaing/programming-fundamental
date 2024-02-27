#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char char1, char2, char3, temp;
	cout <<"Enter three characters....";
	cin >> char1 >> char2 >> char3;
	if(char1 > char2)
	{
		temp=char1;
		char1=char2;
		char2=temp;
	}
	if(char2 > char3)
	{
		temp=char2;
		char2=char3;
		char3=temp;
	}
	if(char1 > char2)
	{
		temp=char1;
		char1=char2;
		char2=temp;
	}

	cout << "\nThe sorted character are ...." << char1 <<" "<<char2<< " "<<char3;
	getch();

}