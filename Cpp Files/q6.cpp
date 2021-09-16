/*Muhammad Munaf Ul Hassan 20i-0891*/

#include <iostream>

using namespace std;

int main()
{
  char input; // this variable is used for the switch case conditions for input

  cout << "Is the scene safe? (Y or N): ";
  cin >> input;

  switch(input)
  {
      case 'Y':
        cout << "***assessing patient***\n" << "***conducting primary survey***\n" << "***providing critical intervention***\n";

        cout << "Is the patient stable now? (Y or N): ";
        cin >> input;
      
        switch(input)
        {
            case 'Y':
                cout << "***take patient history\n" << "***pulling insurance detials***\n" << "***check all vitals of patient***\n" << "***conduct reassessment survey***\n" 
                << "***start the trasport***\n" << "***treating***\n" << "***handling patient over to higher level of care***\n";
                break;

            case 'N':
                cout << "***take patient history\n" << "***start the trasport***\n" << "***check all vitals of patient***\n" << "***conduct reassessment survey***\n" 
                << "***treating***\n" << "***handling patient over to higher level of care***\n";
                break;
        }
        break;

      case 'N':
        cout << "***eliminating harzard***\n" << "Is harzard eliminated? (Y or N): ";
        cin >> input;

        switch(input)
        {
            case 'Y':
            	 cout << "***assessing patient***\n" << "***conducting primary survey***\n" << "***providing critical intervention***\n";
                cout << "Is the patient stable now? (Y or N): ";
                cin >> input;
      
                switch(input)
                {
                    case 'Y':
                        cout << "***take patient history\n" << "***check all vitals of patient***\n" << "***conduct reassessment survey***\n" 
                        << "***start the trasport***\n" << "***pulling insurance detials***\n" << "***treating***\n" << "***handling patient over to higher level of care***\n";
                        break;

                    case 'N':
                        cout << "***take patient history\n" << "***start the trasport***\n" << "***check all vitals of patient***\n" << "***conduct reassessment survey***\n" 
                        << "***treating***\n" << "***handling patient over to higher level of care***\n";
                        break;
                }
                break;

            case 'N':
                cout << "***removing patient from harzard***\n" << "Is the patient moved safely? (Y or N): ";
                cin >> input;

                switch(input)
                {
                    case 'Y':
                    	cout << "***assessing patient***\n" << "***conducting primary survey***\n" << "***providing critical intervention***\n";
                        cout << "Is the patient stable now? (Y or N): ";
                        cin >> input;
      
                        switch(input)
                        {
                            case 'Y':
                                cout << "***take patient history\n" << "***check all vitals of patient***\n" << "***conduct reassessment survey***\n" 
                                << "***start the trasport***\n" << "***treating***\n" << "***handling patient over to higher level of care***\n";
                                break;

                            case 'N':
                                cout << "***take patient history\n" << "***start the trasport***\n" << "***check all vitals of patient***\n" << "***conduct reassessment survey***\n" 
                                << "***treating***\n" << "***handling patient over to higher level of care***\n";
                                break;
                        }
                        break;

                    case 'N':
                        cout << "***calling and awaiting backup to make scene safe***\n";
                        
                        cout << "***scene is now safe***\n" <<"***assessing patient***\n" << "***conducting primary survey***\n" << "***providing critical intervention***\n";

                        cout << "Is the patient stable now? (Y or N): ";
                        cin >> input;
      
                        switch(input)
                        {
                            case 'Y':
                                cout << "***take patient history\n" << "***check all vitals of patient***\n" << "***conduct reassessment survey***\n" 
                                << "***start the trasport***\n" << "***treating***\n" << "***handling patient over to higher level of care***\n";
                                break;

                            case 'N':
                                cout << "***take patient history\n" << "***start the trasport***\n" << "***check all vitals of patient***\n" << "***conduct reassessment survey***\n" 
                                << "***treating***\n" << "***handling patient over to higher level of care***\n";
                                break;
                        }
                        break;
                }
        }
  }

    return 0;
}
