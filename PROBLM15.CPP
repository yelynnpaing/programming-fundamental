#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int roll_no, ex_score, total_score = 0, total_std = 0;
	float ava_score;
	cout << "\nEnter Roll no. and exam score : ";
	cin >> roll_no;
	if(roll_no < 999)
		cin >> ex_score;
	while(roll_no < 999)
	{
	 total_std++;
	 total_score += ex_score;
	 cout << "\nEnter Roll No. and exam score : ";
	 cin >> roll_no;
	 if(roll_no < 999)
		cin >> ex_score;
	}
	if(total_std != 0)
	{
		ava_score = total_score / total_std;
		cout << "\nAvarage score is : " << ava_score;
	}else{
		cout << "No total exam score and no student is here!";
	}
	getch();
}