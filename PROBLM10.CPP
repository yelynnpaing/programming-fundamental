#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int std_no, score;
	cout << "\nEnter Student Number : ";
	cin >> std_no;
	cout << "Enter exam score : ";
	cin >> score;
	if(score >= 90)
		cout << "Student grade is A ";
	else if(score >= 80)
		cout << "Student grade is B ";
	else if (score >= 70)
		cout << "Student grade is C ";
	else if (score >= 60)
		cout << "Student grade is D ";
	else if (score < 60)
		cout << "Student grade is F ";
	getch();
}