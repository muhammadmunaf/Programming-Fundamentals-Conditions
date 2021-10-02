#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    int option, marks_total, marks, scholarship=0; //variable 'option' is used to take input of the option from the user
    double olvl_per=0, alvl_per=0, matric_per=0, fsc_per=0;

    cout << "Do you want to enquire about eligibility of admissions or scholarships?\n"
    << "Press 1 to enquire about eligibility of admissions\n" << "Press 2 to enquire about scholarships\n";
    cin >> option;

    if (option==1 || option==2)
    {
        if (option==1) //checking admission eligibility
        {
            cout << "Which educational system was opted?\n 1- O/A level \n 2- Matric/FSC\n";
            cin >> option;

            if (option==1) //taking input of olvl/alvl marks
            {
                cout << "Enter obtained marks & total marks of O-Levels\n";
                cin >> marks >> marks_total;

                olvl_per=(static_cast<double>(marks)/marks_total)*100;

                cout << "Enter obtained marks & total marks of A-Levels\n";
                cin >> marks >> marks_total;

                alvl_per=(static_cast<double>(marks)/marks_total)*100;
                
                if ((olvl_per*0.15+alvl_per*0.35)<=24.9 )
	    	{
		    	cout << "You are not eligible for admission\n";
		    	exit(0);
	    	}
            }
            else if (option==2) //taking input of matric/fsc marks
            {
               cout << "Enter obtained marks & total marks of Matric\n";
                cin >> marks >> marks_total;

                matric_per=(static_cast<double>(marks)/marks_total)*100;

                cout << "Enter obtained marks & total marks of FSC\n";
                cin >> marks >> marks_total;

                fsc_per=(static_cast<double>(marks)/marks_total)*100; 
                
                if ((matric_per*0.15+fsc_per*0.35)<=24.9)
	    	{
	    		cout << "You are not eligible for admission\n";
	    		exit(0);
	    	}
            }
            else
            {
                cout << "You entered an incorrect value\n";
                exit(0);
            }
	    
	   
	    
            cout << "Subject choice?\n 1- Pre-medical\n 2- Pre-engineering\n";
            cin >> option;

            if(option==1) //incase user have pre-medical background
            {
                float add_math;
                cout << "What percentage marks did you get in Add Maths exam?\n";
                cin >> add_math;

                if (add_math<50) //if addmath marks > 50%, only then eligible for admission
                {
                    cout << "You are not eligible for admission\n";
                    exit(0);
                }
            }
                
                    int merit, min_marks;
                    
                    //showing table to ask which degree you are interested in

                    cout << endl << left <<setw(3) << "ID" << setw(28) << "Degree" << setw(8) << "Merit" << endl
                    <<setw(3) << "1" << setw(28) << "BS Software Eng." << setw(8) << "79%" << endl
                    <<setw(3) << "2" << setw(28) << "BS Computer Scniences" << setw(8) << "80%" << endl
                    <<setw(3) << "3" << setw(28) << "BS Artificial Intelligence" << setw(8) << "75%" << endl
                    <<setw(3) << "4" << setw(28) << "BS Data Sciences" << setw(8) << "76%" << endl
                    <<setw(3) << "5" << setw(28) << "BS Cyber Security" << setw(8) << "77%" << endl
                    <<setw(3) << "6" << setw(28) << "BS Electrical Eng." << setw(8) << "76%\n" << endl;
                    
                    cout << "Which degree do you want to select?\n";                    
                    cin >> option;

                    switch(option) //selecting your degree
                    {
                        case 1:
                            merit = 79;
                            break;
                        case 2:
                            merit = 80;
                            break;
                        case 3:
                            merit = 75;
                            break;
                        case 4:
                            merit = 76;
                            break;
                        case 5:
                            merit = 77;
                            break;
                        case 6:
                            merit = 76;
                            break;
                        default:
                            exit(0);
                            break;
                    }

                    //the statment below calculates the min marks required in uni test to get admission in selected degree
                    
                    if (alvl_per!=0) //if opt for olvl/alvl
                    {
                    	min_marks = (merit-(0.15*olvl_per)-(0.35*alvl_per))/(0.2);
                    
                    	/*the following if selector is to check whether the min_marks give the exact merit eg 80% or 79.95% etc, 
                    	incase it is less than exact 80, it adds 1 mark to it so that it is equal to or 
                    	greater than 80%*/
                    	if(((olvl_per*0.15)+(alvl_per*0.35)+(min_marks*0.2))==merit);
                    	else
                    		min_marks++;
                    }
                    else if (fsc_per != 0) // if opt for matric/fsc
                    {
                    	min_marks = (merit-(0.15*matric_per)-(0.35*fsc_per))/(0.2);
                    
                    	/*the following if selector is to check whether the min_marks give the exact merit eg 80% or 79.95% etc, 
                    	incase it is less than exact 80, it adds 1 mark to it so that it is equal to or 
                    	greater than 80%*/
                    	if(((matric_per*0.15)+(fsc_per*0.35)+(min_marks*0.2))==merit);
                    	else
                    		min_marks++;
                    }
                    

                    cout << "The minimun marks required in the University Admission Test for this degree are: "
                    << min_marks << endl;
                    
                
            

        }
        else if (option==2) //to get scholarship detials
        {
        
            char answer; //variable to ask user for whether they have alumus in family
            
            cout << "Which educational system was opted?\n 1- O/A level \n 2- Matric/FSC\n";
            cin >> option;

            if (option==1)
            {
                cout << "Enter obtained marks & total marks of O-Levels\n";
                cin >> marks >> marks_total;

                olvl_per=(static_cast<double>(marks)/marks_total)*100;

                cout << "Enter obtained marks & total marks of A-Levels\n";
                cin >> marks >> marks_total;

                alvl_per=(static_cast<double>(marks)/marks_total)*100;
                
                /* i've added the alumnus part within both olvl/alvl marks and matric/fsc because everyone would have done one of these so if we 
                to ask user to select an option between olvl/alvl, matric/fsc, alumnus it'd be confusing because those who have alumnus in family
                will have 2 options to select and can only select 1*/
                
                cout << "Is Fast nuces alumnus in your family? (Y or N)\n";
                cin >> answer;
                
                if (answer=='Y')
                {
                	cout << "What is your relation with them?\n";
		        cout << "1- Blood Relation (siblings, parents)\n2- Materal or Paternal Cousin\n";
		        cin >> option;
		        
		        switch(option)
		        {
		            case 1:
		                scholarship = 20;
		                break;
		            case 2:
		                scholarship = 10;
		                break;
		            default:
		                cout << "You entered an incorrect value\n";
		                exit(0);
		                break;
		        }	
                }
                
                
            }
            else if (option==2)
            {
               cout << "Enter obtained marks & total marks of Matric\n";
                cin >> marks >> marks_total;

                matric_per=(static_cast<double>(marks)/marks_total)*100;

                cout << "Enter obtained marks & total marks of FSC\n";
                cin >> marks >> marks_total;

                fsc_per=(static_cast<double>(marks)/marks_total)*100;
                
                cout << "Is Fast nuces alumnus in your family? (Y or N)\n";
                cin >> answer;
                
                if (answer=='Y')
                {
                	cout << "What is your relation with them?\n";
		        cout << "1- Blood Relation (siblings, parents)\n2- Materal or Paternal Cousin\n";
		        cin >> option;
		        
		        switch(option)
		        {
		            case 1:
		                scholarship = 20;
		                break;
		            case 2:
		                scholarship = 10;
		                break;
		            default:
		                cout << "You entered an incorrect value\n";
		                exit(0);
		                break;
		        }	
                }
                
            }
            else
            {
                cout << "You entered an incorrect value\n";
                exit(0);
            }

	    //displaying scholarship table

            cout << left << endl
            << setw(16)<< "O/A level" << setw(38) << "90% above - Olevel" << setw(5) << "10%" << endl
            << setw(16)<< "" << setw(38) << "90% above - Alevel" << setw(5) << "30%\n" << endl
            << setw(16)<< "Matric/FSC" << setw(38) << "90% above - Matric" << setw(5) << "10%" << endl
            << setw(16)<< "" << setw(38) << "90% above - FSC" << setw(5) << "30%\n" << endl
            << setw(16)<< "Alumnus" << setw(38) << "Blood Relation (sibling, parents)" << setw(5) << "20%" << endl
            << setw(16)<< "" << setw(38) << "Maternal or Paternal Cousin" << setw(5) << "10%\n" << endl;

	    

            if(alvl_per>90)
                scholarship = 30;
            else if(olvl_per>90 && scholarship<10)
                scholarship = 10;
            else if(fsc_per>90)
                scholarship = 30;
            else if(matric_per>90 && scholarship<10) 
                scholarship = 10;
            
            if (scholarship!=0)
                cout << "You are awarded " << scholarship << "% scholarship\n";
            else
            	cout << "Sorry you are not eligible for the scholarship\n";

        }
    }
    else
        cout << "Incorrect value is entered\n The program will now end\n";
}
