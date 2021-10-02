#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int number;
	float bill;
	
	cout << "Enter the number of gallons of water consumed\n";
	cin >> number;
	
	if (number>=100)
	{
		bill = 0.45 * 100; //for the first 100 gallons
		number = number - 100;
		
		if (number>=250)
		{
			bill = bill + 0.85*250; //for 250 gallons after the first 100
			number = number - 250;
			
			if (number>=250)
			{
				bill = bill + 1.45*250; //for 250 gallons after the first 350
				number = number - 250;
				
				if (number>0)
					bill = bill + 2.60*number; //for any number of gallons above 600
			}
			else
				bill = bill + 1.45*number; //for 250 gallons after the first 250 (if they are less than 250)
		}
		else 
			bill = bill + 0.85 * number; //for 250 gallons after the first 100 (if they are less than 250)
	}
	else
		bill=0.45*number; //for the first 100 gallons (if they are less than 100)
		
	bill = bill*1.14; //adding service charges
	
	cout << "Your total comsumption bill is $" << setprecision(2) << fixed << showpoint << bill << endl;
	
	return 0;
}
