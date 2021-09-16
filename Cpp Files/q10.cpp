/*Muhammad Munaf Ul Hassan 20i-0891*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int input; // this variable is used to select options from the user through out the code
    double cost=0; //variable to calculate the bill

    cout << "----------Welcome to Create Your Taste----------" << endl;
    cout << "FOLLOW THE INSTRUCTIONS TO CREATE YOUR TASTY BURGER\n";

    cout << "Choose your bun\n" 
    << "Press 1 to select Toasted Brioche Style Bun\n" 
    << "Press 2 to select Baker's Bun\n" 
    << "Press 3 to select No Bun Lettuce Wrap\n";
    cin >> input;

    if (input!=1 && input!=2 && input!=3) //check to make sure user select a bun or program ends
    {
        cout << "You've entered an incorrect value\n";
        cout << "Program will now end\n";
    }
    else
    {
        cost = cost = 0.72; //adding bun cost to bill

        //Make it cheesy code
        cout << endl << "You can select twice from this category\n";
        cout << "Make It Cheesy\n" 
        << "Press 1 to select Cheddar Cheese\n" 
        << "Press 2 to select Swiss Cheese\n" 
        << "Press 3 to select Colby Jack Cheese\n"
        << "Press 4 to select McDonald's Classic Cheese\n" 
        << "Press 5 to select Shaved Parmesan\n" 
        << "Press 0 for no cheese\n";
        cin >> input;

        switch(input)
        {
            case 1 ... 5: // taking range from 1 to 5 as the result for all would be same
                cost=cost+0.5; // adding cheese cost to bill
                cout << "Cheese added\n";
                break;
            case 0:
                cout << "No cheese added\n";
                break;
            default:
                cout << "Incorrect value entered\n";
                exit(0);
                break;
        }

        cout << endl << "Press 1 to select Cheddar Cheese\n" 
        << "Press 2 to select Swiss Cheese\n" 
        << "Press 3 to select Colby Jack Cheese\n"
        << "Press 4 to select McDonald's Classic Cheese\n" 
        << "Press 5 to select Shaved Parmesan\n" 
        << "Press 0 for no cheese\n";
        cin >> input;

        switch(input)
        {
            case 1 ... 5: // taking range from 1 to 5 as the result for all would be same
                cost=cost+0.5; //adding cheese cost to bun
                cout << "Cheese added\n";
                break;
            case 0:
                cout << "No cheese added\n";
                break;
            default:
                cout << "Incorrect value entered\n";
                exit(0);
                break;
        }

        //Turn up the taste code

        cout << endl << "Turn Up The Taste\n" 
        << "Press 1 to select Rasher Bacon\n" 
        << "Press 2 to select Crispy Bacon\n" 
        << "Press 3 to select Egg\n"
        << "Press 4 to select 113g Angus Beef Party\n" 
        << "Press 5 to select Guacamole\n" 
        << "Press 6 to select Tortilla Strips\n" 
        << "Press 7 to select Grilled Mushrooms\n"
        << "Press 8 to select Grilled Pineapple\n";
        cin >> input;

        if (input!=1 && input!=2 && input!=3 && input!=4 && input!=5 && input!=6 && input!=7 && input!=8) //check to make sure user add item from turn up the taste or program ends
        {
            cout << "Incorrect value entered\n";
            cout << "Program will now end\n";
        }
        else
        {
            cost = cost + 1.2; //adding turn up the taste cost to bill

        //Fresh'in it up code

            cout << endl << "You can select thrice from this category\n";
            cout << "Fresh'in It Up\n" 
            << "Press 1 to select Whole Leaf Lettuce\n" 
            << "Press 2 to select Tomato\n" 
            << "Press 3 to select Caramelised Grilled Onions\n"
            << "Press 4 to select Sliced Beetroot\n" 
            << "Press 5 to select Red Onion\n" 
            << "Press 6 to select Long Sliced Pickle\n" 
            << "Press 7 to select Jalapenos\n"
            << "Press 0 for none\n";
            cin >> input;

            switch(input)
            {
                case 1 ... 7: // taking range from 1 to 7 as the result for all would be same
                    cost = cost +0.2; //adding fresh'in it up cost to bill
                    cout << "This Fresh'in It Up item has been added\n";
                    break;
                case 0:
                    cout << "No item is added\n";
                    break;
                default:
                    cout << "Incorrect value entered\n";
                    exit(0);
                    break;
            }

            cout << endl << "Press 1 to select Whole Leaf Lettuce\n" 
            << "Press 2 to select Tomato\n" 
            << "Press 3 to select Caramelised Grilled Onions\n"
            << "Press 4 to select Sliced Beetroot\n" 
            << "Press 5 to select Red Onion\n" 
            << "Press 6 to select Long Sliced Pickle\n" 
            << "Press 7 to select Jalapenos\n"
            << "Press 0 for none\n";
            cin >> input;

            switch(input)
            {
                case 1 ... 7: // taking range from 1 to 7 as the result for all would be same
                    cost = cost +0.2; //adding fresh'in it up cost to bill
                    cout << "This Fresh'in It Up item has been added\n";
                    break;
                case 0:
                    cout << "No item is added\n";
                    break;
                default:
                    cout << "Incorrect value entered\n";
                    exit(0);
                    break;
            }

            cout << endl << "Press 1 to select Whole Leaf Lettuce\n" 
            << "Press 2 to select Tomato\n" 
            << "Press 3 to select Caramelised Grilled Onions\n"
            << "Press 4 to select Sliced Beetroot\n" 
            << "Press 5 to select Red Onion\n" 
            << "Press 6 to select Long Sliced Pickle\n" 
            << "Press 7 to select Jalapenos\n"
            << "Press 0 for none\n";
            cin >> input;

            switch(input)
            {
                case 1 ... 7: // taking range from 1 to 7 as the result for all would be same
                    cost = cost +0.2; //adding fresh'in it up cost to bill
                    cout << "This Fresh'in It Up item has been added\n";
                    break;
                case 0:
                    cout << "No item is added\n";
                    break;
                default:
                    cout << "Incorrect value entered\n";
                    exit(0);
                    break;
            }

            //Get saucy code

            cout << endl << "You can select thrice from this category\n";
            cout << "Get Saucy\n" 
            << "Press 1 to select Ketchup\n" 
            << "Press 2 to select Tomato Chilli Jam\n" 
            << "Press 3 to select BBQ\n"
            << "Press 4 to select Dijonnaise\n" 
            << "Press 5 to select Big Mac Special Sauce\n" 
            << "Press 6 to select Aioli\n" 
            << "Press 7 to select Herb Aioli\n"
            <<  "Press 8 to select Chipotle Mayo\n" 
            << "Press 0 for none\n";
            cin >> input;

            switch(input)
            {
                case 1 ... 8: // taking range from 1 to 8 as the result for all would be same
                    cost = cost + 0.3; //adding sauce cost to bill
                    cout << "Item added\n";
                    break;
                case 0:
                    cout << "No item added\n";
                    break;
                default:
                    cout << "Incorrect value entered\n";
                    exit(0);
                    break;
            }

            cout << endl << "Press 1 to select Ketchup\n" 
            << "Press 2 to select Tomato Chilli Jam\n" 
            << "Press 3 to select BBQ\n"
            << "Press 4 to select Dijonnaise\n" 
            << "Press 5 to select Big Mac Special Sauce\n" 
            << "Press 6 to select Aioli\n" 
            << "Press 7 to select Herb Aioli\n"
            <<  "Press 8 to select Chipotle Mayo\n" 
            << "Press 0 for none\n";
            cin >> input;

            switch(input)
            {
                case 1 ... 8: // taking range from 1 to 8 as the result for all would be same
                    cost = cost + 0.3; //adding sauce cost to bill
                    cout << "Item added\n";
                    break;
                case 0:
                    cout << "No item added\n";
                    break;
                default:
                    cout << "Incorrect value entered\n";
                    exit(0);
                    break;
            }

            cout << endl << "Press 1 to select Ketchup\n" 
            << "Press 2 to select Tomato Chilli Jam\n" 
            << "Press 3 to select BBQ\n"
            << "Press 4 to select Dijonnaise\n" 
            << "Press 5 to select Big Mac Special Sauce\n" 
            << "Press 6 to select Aioli\n" 
            << "Press 7 to select Herb Aioli\n"
            <<  "Press 8 to select Chipotle Mayo\n" 
            << "Press 0 for none\n";
            cin >> input;

            switch(input)
            {
                case 1 ... 8: // taking range from 1 to 8 as the result for all would be same
                    cost = cost + 0.3; //adding sauce cost to bill
                    cout << "Item added\n";
                    break;
                case 0:
                    cout << "No item added\n";
                    break;
                default:
                    cout << "Incorrect value entered\n";
                    exit(0);
                    break;
            }

            cout << "Order completed!\n" << "Total cost of this burger is $" << setprecision(2) << fixed << showpoint << cost << endl;

        }

    }

    return 0;
}
