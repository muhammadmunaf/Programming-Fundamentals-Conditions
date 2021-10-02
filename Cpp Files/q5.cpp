#include <iostream>

using namespace std;

int main()
{
    int no_of_people=0, a1_5=0, a5_10=0, a10_15=0, a15_20=0, under_10=0, above_20=0, total_people=0;
    //the variables like 'a1_5' represent the age group 1 to 5 and so on
    
    double total_price=0, hours=0, total_price_discount=0;
    char swings_check;

    cout << "How many people will be going to the park?\n";
    cin >> no_of_people;

    cout << "How many of them are below the age of 10?\n";
    cin >> under_10;

    cout << "How many are between the age 10-15 (including 15)?\n";
    cin >> a10_15;

    cout << "How many are between the age 15-20 (including 20)?\n";
    cin >> a15_20;

    cout << "How many are above 20?\n";
    cin >> above_20;

    total_people = under_10 + a10_15 + a15_20 + above_20;

    if (total_people != no_of_people) //incase number of people entered before more than the ones entered when age groups are asked
    {
        no_of_people = total_people;
    }

    cout << "Will any of these people go to the swings Park?(Y or N)\n";
    cin >> swings_check;

    if  (swings_check == 'Y') // if any of the people will be going to the swings only then their ages will be further asked
    {
        cout << "How many of them are between the age 1-5 (including 5)?\n";
        cin >> a1_5;

        cout << "How many of them are between the age 5-10 (including 10)?\n";
        cin >> a5_10;

    }

    cout << "For how many hours will these people stay inside the park?\n";
    cin >> hours;

    total_price = (a10_15)*(100+10*hours) + (a15_20)*(100+10*hours) + (a1_5)*(50+10*hours) + (a5_10)*(50+10*hours); //calculating cost without discount

    total_price_discount = (a10_15)*(0.9)*(100+10*hours) + (a15_20)*(0.95)*(100+10*hours) + (a1_5)*(0.5)*(50+10*hours) + (a5_10)*(0.75)*(50+10*hours); // calculating cost with discount

    if((a1_5 + a5_10 + a10_15 + a15_20) != no_of_people) //if there are any people who are not allowed in the park, this will display a message for it
    {
        cout << "The people less than age 10 who wanted to go to the park and the ones older than 20 are not allowed\n";
        cout << "The number of people that can go are " << (a1_5+a5_10+a10_15+a15_20) /*this will show the number of people allowed, cutting out those who arent*/ << endl;
    }

    cout << "The total price is " << total_price << endl;
    cout << "The discounted price you have to pay is " << total_price_discount << endl;

    return 0;

}
