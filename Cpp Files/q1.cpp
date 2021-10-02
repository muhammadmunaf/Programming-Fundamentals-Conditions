#include <iostream>

using namespace std;

int main()
{
	int year;
	
	cout << "Enter the year you want to check\n";
	cin >> year;
	
	if (year%4==0) // to check if it's divisible by 4
	{
		if (year%100==0) // to check if it's a century year
			{
			if (year%400==0) // to check if it's a century year divisble by 400
				cout << "The year " << year << " is a leap year.\n";
			else
				cout << "Not a leap year\n";
			}
		else
			cout << "The year " << year << " is a leap year.\n";
	}
	else 
		cout << "Not a leap year\n";
	
	return 0;
}
