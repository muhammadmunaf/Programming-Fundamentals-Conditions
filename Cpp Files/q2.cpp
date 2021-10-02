#include <iostream>

using namespace std;

int main()
{
	int num1,num2,num3;
	
	cout << "Enter 3 non-negative integers\n";
	cin >>num1>>num2>>num3;
	
	if ((num1>=0&&num2>=0)&&num3>=0) //to check whether each number entered is non-negative or not
	{
		if (
		(num1%10==num2%10)||(num2%10==num3%10) || (num1%10==num3%10) //to check if any of the entered numbers have the same last digit
		)
			cout << "True\n";
	}
	else
		cout<<"The numbers entered are not non-negative integers\n";
	
	return 0;
}
