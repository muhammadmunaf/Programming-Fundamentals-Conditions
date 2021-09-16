/*Muhammad Munaf Ul Hassan 20i-0891*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int bill=0, input; //the variable 'input' is used to take input of the values for switch cases in the entire code
	float discount=0;
	
	cout << "***********welcome to our menu***********" << endl << endl;
	cout << "Press 0 to select TAKEAWAY\n" << "Press 1 to select DINE IN\n" << "Press 2 to select DELIVERY\n";
	cout << "which catergory you want to choose: ";
	cin >> input;
	cout << endl;
	
	switch(input)
	{
		case 0:
			cout << "***********welcome to takeaway menu***********\n" << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}
			
			cout <<endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			cout <<endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			cout << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			cout << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			break;
			
		case 1:
			cout << "***********welcome to dine in menu***********\n" << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}
			
			cout << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			cout << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			cout << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			cout << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			break;
		case 2:
			cout << "***********welcome to delivery menu***********\n" << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}
			
			cout << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			cout << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			cout << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);
					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}

			cout << endl
			<<"_____PRESS 0 FOR BURGER_____\n"
			<<"_____PRESS 1 FOR PARATHA ROLL_____\n"
			<<"_____PRESS 2 FOR PAKISTANI FOOD_____\n"
			<<"_____PRESS 9 TO GET BILL_____\n";
			cout << "which category you want to choose: ";
			cin >> input;
			cout << endl;
			
			switch(input)
			{
				case 0:
					cout << "Select burger type:\n"
					<< "\t 1)  Mack____________699\n"
					<< "\t 2)  Zinger____________599\n"
					<< "\t 3)  Hot____________449\n"
					<< "\t 4)  Patty Burger____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+699;
							cout << "Mack is added to the bill\n";
							break;
						case 2:
							bill=bill+599;
							cout << "Zinger is added to the bill\n";
							break;
						case 3:
							bill=bill+449;
							cout << "Hot is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Patty Burger is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 1:
					cout << "Select paratha roll type:\n"
					<< "\t 1)  Platter____________299\n"
					<< "\t 2)  Cheese____________349\n"
					<< "\t 3)  Crispy____________399\n"
					<< "\t 4)  Double trouble____________699\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+299;
							cout << "Platter is added to the bill\n";
							break;
						case 2:
							bill=bill+349;
							cout << "Cheese is added to the bill\n";
							break;
						case 3:
							bill=bill+399;
							cout << "Crispy is added to the bill\n";
							break;
						case 4:
							bill=bill+699;
							cout << "Double trouble is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					
					break;
				case 2:
					cout << "Select Pakistani food type:\n"
					<< "\t 1)  Haleem____________199\n"
					<< "\t 2)  Nihaari____________199\n"
					<< "\t 3)  Daal____________149\n"
					<< "\t 4)  Ghosht____________249\n";
					cout << "which catergory do you want to choose: ";
					cin >> input;
					
					switch(input) //in this, it'll add the selected item's price to the bill
					{
						case 1:
							bill=bill+199;
							cout << "Haleem is added to the bill\n";
							break;
						case 2:
							bill=bill+199;
							cout << "Nihaari is added to the bill\n";
							break;
						case 3:
							bill=bill+149;
							cout << "Daal is added to the bill\n";
							break;
						case 4:
							bill=bill+249;
							cout << "Ghosht is added to the bill\n";
							break;
						default:
							cout << "Invalid option selected\n";
							exit(0);
							break;
					}
					break;
				case 9:
					if (bill<=1000)
						discount=0.95;
					else if (bill<=1500)
						discount=0.9;
					else if (bill<=2000)
						discount=0.85;
					else if (bill<=2500)
						discount=0.8;
					else if (bill<=3000)
						discount=0.7;
					else 
						discount=0.5;
	
					cout << "Total bill is " << (bill*discount) << endl;
					
					exit(0);

					break;
				default:
					cout << "Invalid option selected\n Program will now end\n";
					exit(0);
					break;
			}
			
			break;
		default:
			cout << "Invalid input.\n Program will now end.\n";
			exit(0);
			break;
	}
	
	bill:
	
	if (bill<=1000)
		discount=0.95;
	else if (bill<=1500)
		discount=0.9;
	else if (bill<=2000)
		discount=0.85;
	else if (bill<=2500)
		discount=0.8;
	else if (bill<=3000)
		discount=0.7;
	else 
		discount=0.5;
	
	cout << "Total bill is " << (bill*discount) << endl;

	return 0;
}
