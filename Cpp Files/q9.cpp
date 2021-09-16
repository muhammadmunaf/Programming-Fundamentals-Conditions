/*Muhammad Munaf Ul Hassan 20i-0891*/

#include <iostream>
#include <stdlib.h>

using namespace std;



int main()
{
    int num1, num2, win=0, warning=0;
    int store_1=0, store_2=0, store_3=0, store_4=0, store_5=0, store_6=0, store_7=0, store_8=0, store_9=0, store_10=0;

    #define WIN_CHECK if(win>=3){\
                            cout << "You have won the game!\n";\
                            exit(0);}\

    #define WARNING_CHECK if(warning>=4)\
                            {\
                                cout << "You lose this game due to 4 warnings.\n";\
                                exit(0);\
                            } 

    //for space only
    #define RANGE_CHECK if((num1>36 || num1<1) || (num2>36 || num2<1))\
                        {\
                            warning+=1;\
                            cout << "Warning " << warning <<"! The number you have entered is out of bound.\n";\
                            \
                            if(warning>=4)\
                            {\
                                cout << "You lose this game due to 4 warnings.\n";\
                                exit(0);\
                            }\
                            cout << "Enter 2 numbers within 1 to 36.\n";\
                            cin >> num1 >> num2;\
                            \
                            if((num1>36 || num1<1) || (num2>36 || num2<1))\
                            {\
                                warning+=1;\
                                cout << "Warning " << warning <<"! The number you have entered is out of bound.\n";\
                                \
                                if(warning>=4)\
                                {\
                                    cout << "You lose this game due to 4 warnings.\n";\
                                    exit(0);\
                                }\
                                cout << "Enter 2 numbers within 1 to 36.\n";\
                                cin >> num1 >> num2;\
                                \
                                if((num1>36 || num1<1) || (num2>36 || num2<1))\
                                {\
                                    warning+=1;\
                                    cout << "Warning " << warning <<"! The number you have entered is out of bound.\n";\
                                    \
                                    if(warning>=4)\
                                    {\
                                        cout << "You lose this game due to 4 warnings.\n";\
                                        exit(0);\
                                    }\
                                    cout << "Enter 2 numbers within 1 to 36.\n";\
                                    cin >> num1 >> num2;\
                                    \
                                    if((num1>36 || num1<1) || (num2>36 || num2<1))\
                                    {\
                                        warning+=1;\
                                        cout << "Warning " << warning <<"! The number you have entered is out of bound.\n";\
                                        \
                                        if(warning>=4)\
                                        {\
                                            cout << "You lose this game due to 4 warnings.\n";\
                                            exit(0);\
                                        }\
                                        cout << "Enter 2 numbers within 1 to 36.\n";\
                                        cin >> num1 >> num2;\
                                    }\
                                }\
                            }\
                        }

    
    //for space only
    cout << "You have to guess 2 numbers from 1 to 36 and if they have the same color associated to them you win the round.\nNote: You can not enter the same number twice.";

    // Round 1
    cout << endl << "Round 1\n";
    cout << "Enter 2 numbers\n";
    cin >> num1 >> num2;

    if((num1>36 || num1<1) || (num2>36 || num2<1)) //to check whether entered numbers are in range or not, gives warning each time it is not in range
    {
        warning+=1;
        cout << "Warning " << warning <<"! The number you have entered is out of bound.\n";
        
        if(warning>=4) //to check if there are 4 warnings
        {
            cout << "You lose this game due to 4 warnings.\n";
            exit(0);
        }
        cout << " Enter 2 numbers within 1 to 36.\n";
        cin >> num1 >> num2;

        if((num1>36 || num1<1) || (num2>36 || num2<1))
        {
            warning+=1;
            cout << "Warning " << warning <<"! The number you have entered is out of bound.\n";
            
            if(warning>=4)
            {
                cout << "You lose this game due to 4 warnings.\n";
                exit(0);
            }
            cout << " Enter 2 numbers within 1 to 36.\n";
            cin >> num1 >> num2;

            if((num1>36 || num1<1) || (num2>36 || num2<1))
            {
                warning+=1;
                cout << "Warning " << warning <<"! The number you have entered is out of bound.\n";
                
                if(warning>=4)
                {
                    cout << "You lose this game due to 4 warnings.\n";
                    exit(0);
                }
                cout << " Enter 2 numbers within 1 to 36.\n";
                cin >> num1 >> num2;

                if((num1>36 || num1<1) || (num2>36 || num2<1))
                {
                    warning+=1;
                    cout << "Warning " << warning <<"! The number you have entered is out of bound.\n";
                    
                    if(warning>=4)
                    {
                        cout << "You lose this game due to 4 warnings.\n";
                        exit(0);
                    }
                    cout << "Enter 2 numbers within 1 to 36.\n";
                    cin >> num1 >> num2;
                }
            }
        }
    }

    //storing the input numbers in different variables to later test, if round is not a win, these variables are equalled to zero in the later code
    store_1=num1;
    store_2=num2;

    //Green color
    if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
        &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;     
        }
    //Red color
    else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
        &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Blue color
    else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
        &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Orange color
    else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
        &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Grey color
    else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
        &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1; 
        }
    //If both numbers are same
    else if (num1==num2)
        {
            cout << "Warning " << warning << "! You entered the same numbers\n";
                cout << "Enter 2 different numbers\n";
                cin >> num1 >> num2;

                //Green color
                if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                    &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;        
                    }
                //Red color
                else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                    &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1; 
                    }
                //Blue color
                else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                    &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //Orange color
                else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                    &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //Grey color
                else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                    &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //If both numbers are same
                else if (num1==num2)
                    {
                        cout << "Warning " << warning << "! You entered the same numbers\n";
                            cout << "Enter 2 different numbers\n";
                            cin >> num1 >> num2;

                            //Green color
                            if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                                &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;          
                                }
                            //Red color
                            else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                                &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Blue color
                            else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                                &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Orange color
                            else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                                &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Grey color
                            else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                                &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //If both numbers are same
                            else if (num1==num2)
                                {
                                    cout << "Warning " << warning << "! You entered the same numbers\n";
                                        cout << "Enter 2 different numbers\n";
                                        cin >> num1 >> num2;

                                        //Green color
                                        if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                                            &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1;          
                                            }
                                        //Red color
                                        else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                                            &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //Blue color
                                        else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                                            &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //Orange color
                                        else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                                            &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1;
                                            }
                                        //Grey color
                                        else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                                            &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //If both numbers are same
                                        else if (num1==num2)
                                            {
                                                cout << "Warning " << warning << "! You entered the same numbers\n";
                                                    cout << "You lose.\n";
                                                    exit(0); //to exit the program as user have been given 4 warnings
                                            }
                                        else 
                                            {
                                                cout << "They are not equal. You lose this round.\n";
                                                store_1=0;
                                                store_2=0;
                                            }
                                }
                            else 
                                {
                                    cout << "They are not equal. You lose this round.\n";
                                    store_1=0;
                                    store_2=0;
                                }
                    }
                else 
                    {
                        cout << "They are not equal. You lose this round.\n";
                        store_1=0;
                        store_2=0;
                    }
        }              
    else 
        {
            cout << "They are not equal. You lose this round.\n";
            store_1=0;
            store_2=0;
        }

    // Round 2
    cout << endl << "Round 2\n";
    cout << "Enter 2 numbers\n";
    cin >> num1 >> num2;

    RANGE_CHECK;

    if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
    {
        warning++;
        cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
        
        WARNING_CHECK;

        cout << "Enter 2 digits that haven't been used before to win a round.\n";
        cin >> num1 >> num2;

        RANGE_CHECK;

        if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
        {
            warning++;
            cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
            
            WARNING_CHECK;

            cout << "Enter 2 digits that haven't been used before to win a round.\n";
            cin >> num1 >> num2;

            RANGE_CHECK;

            if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
            {
                warning++;
                cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";

                WARNING_CHECK;

                cout << "Enter 2 digits that haven't been used before to win a round.\n";
                cin >> num1 >> num2;

                RANGE_CHECK;

                if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
                {
                    warning++;
                    cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                    

                    WARNING_CHECK; 
                    //program will end at this point
                }
            }
        }
    }
    //
    store_3=num1;
    store_4=num2;

    //Green color
    if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
        &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;     
        }
    //Red color
    else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
        &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Blue color
    else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
        &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Orange color
    else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
        &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Grey color
    else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
        &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1; 
        }
    //If both numbers are same
    else if (num1==num2)
        {
            cout << "Warning " << warning << "! You entered the same numbers\n";
                cout << "Enter 2 different numbers\n";
                cin >> num1 >> num2;

                //Green color
                if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                    &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;        
                    }
                //Red color
                else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                    &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1; 
                    }
                //Blue color
                else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                    &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //Orange color
                else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                    &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //Grey color
                else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                    &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //If both numbers are same
                else if (num1==num2)
                    {
                        cout << "Warning " << warning << "! You entered the same numbers\n";
                            cout << "Enter 2 different numbers\n";
                            cin >> num1 >> num2;

                            //Green color
                            if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                                &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;          
                                }
                            //Red color
                            else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                                &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Blue color
                            else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                                &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Orange color
                            else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                                &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Grey color
                            else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                                &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //If both numbers are same
                            else if (num1==num2)
                                {
                                    cout << "Warning " << warning << "! You entered the same numbers\n";
                                        cout << "Enter 2 different numbers\n";
                                        cin >> num1 >> num2;

                                        //Green color
                                        if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                                            &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1;          
                                            }
                                        //Red color
                                        else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                                            &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //Blue color
                                        else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                                            &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //Orange color
                                        else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                                            &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1;
                                            }
                                        //Grey color
                                        else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                                            &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //If both numbers are same
                                        else if (num1==num2)
                                            {
                                                cout << "Warning " << warning << "! You entered the same numbers\n";
                                                    cout << "You lose.\n";
                                                    exit(0); //to exit the program as user have been given 4 warnings
                                            }
                                        else 
                                            {
                                                cout << "They are not equal. You lose this round.\n";
                                                store_3=0;
                                                store_4=0;
                                            }
                                }
                            else 
                                {
                                    cout << "They are not equal. You lose this round.\n";
                                    store_3=0;
                                    store_4=0;
                                }
                    }
                else 
                    {
                        cout << "They are not equal. You lose this round.\n";
                        store_3=0;
                        store_4=0;
                    }
        }              
    else 
        {
            cout << "They are not equal. You lose this round.\n";
            store_3=0;
            store_4=0;
        }

    // Round 3
    cout << endl << "Round 3\n";
    cout << "Enter 2 numbers\n";
    cin >> num1 >> num2;

    RANGE_CHECK;

    //check for whether a previously used number is used
    if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2 || num1==store_3 || num1==store_4 || num2==store_3 || num2==store_4)&&(win!=0)) 
    {
        warning++;
        cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                
        WARNING_CHECK;

        cout << "Enter 2 digits that haven't been used before to win a round.\n";
        cin >> num1 >> num2;

        RANGE_CHECK;

        if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
        {
            warning++;
            cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                        
            WARNING_CHECK;

            cout << "Enter 2 digits that haven't been used before to win a round.\n";
            cin >> num1 >> num2;

            RANGE_CHECK;

            if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
            {
                warning++;
                cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                
                WARNING_CHECK;

                cout << "Enter 2 digits that haven't been used before to win a round.\n";
                cin >> num1 >> num2;

                RANGE_CHECK;

                if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
                {
                    warning++;
                    cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                    
                    WARNING_CHECK; 
                    //program will end at this point
                }
            }
        }
    }
    //
    store_5=num1;
    store_6=num2;
    
    //Green color
    if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
        &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;     
        }
    //Red color
    else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
        &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Blue color
    else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
        &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Orange color
    else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
        &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Grey color
    else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
        &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1; 
        }
    //If both numbers are same
    else if (num1==num2)
        {
            cout << "Warning " << warning << "! You entered the same numbers\n";
                cout << "Enter 2 different numbers\n";
                cin >> num1 >> num2;

                //Green color
                if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                    &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;        
                    }
                //Red color
                else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                    &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1; 
                    }
                //Blue color
                else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                    &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //Orange color
                else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                    &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //Grey color
                else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                    &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //If both numbers are same
                else if (num1==num2)
                    {
                        cout << "Warning " << warning << "! You entered the same numbers\n";
                            cout << "Enter 2 different numbers\n";
                            cin >> num1 >> num2;

                            //Green color
                            if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                                &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;          
                                }
                            //Red color
                            else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                                &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Blue color
                            else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                                &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Orange color
                            else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                                &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Grey color
                            else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                                &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //If both numbers are same
                            else if (num1==num2)
                                {
                                    cout << "Warning " << warning << "! You entered the same numbers\n";
                                        cout << "Enter 2 different numbers\n";
                                        cin >> num1 >> num2;

                                        //Green color
                                        if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                                            &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1;          
                                            }
                                        //Red color
                                        else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                                            &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //Blue color
                                        else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                                            &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //Orange color
                                        else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                                            &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1;
                                            }
                                        //Grey color
                                        else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                                            &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //If both numbers are same
                                        else if (num1==num2)
                                            {
                                                cout << "Warning " << warning << "! You entered the same numbers\n";
                                                    cout << "You lose.\n";
                                                    exit(0); //to exit the program as user have been given 4 warnings
                                            }
                                        else 
                                            {
                                                cout << "They are not equal. You lose this round.\n";
                                                store_5=0;
                                                store_6=0;
                                            }
                                }
                            else 
                                {
                                    cout << "They are not equal. You lose this round.\n";
                                    store_5=0;
                                    store_6=0;
                                }
                    }
                else 
                    {
                        cout << "They are not equal. You lose this round.\n";
                        store_5=0;
                        store_6=0;
                    }
        }              
    else 
        {
            cout << "They are not equal. You lose this round.\n";
            store_5=0;
            store_6=0;
        }

    /*win check
    if(win>=3)
    {
        cout << "You have won the game!.\n";
        exit(0);
    }*/
    WIN_CHECK;

    // Round 4
    cout << endl << "Round 4\n";
    cout << "Enter 2 numbers\n";
    cin >> num1 >> num2;

    RANGE_CHECK;

    //check for whether a previously used number is used
    if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2 || num1==store_3 || num1==store_4 || num2==store_3 || num2==store_4 || num1==store_5 || num1==store_6 || num2==store_5 || num2==store_6)&&(win!=0)) 
    {
        warning++;
        cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                
        WARNING_CHECK;

        cout << "Enter 2 digits that haven't been used before to win a round.\n";
        cin >> num1 >> num2;

        RANGE_CHECK;

        if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
        {
            warning++;
            cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                        
            WARNING_CHECK;

            cout << "Enter 2 digits that haven't been used before to win a round.\n";
            cin >> num1 >> num2;

            RANGE_CHECK;

            if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
            {
                warning++;
                cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                
                WARNING_CHECK;

                cout << "Enter 2 digits that haven't been used before to win a round.\n";
                cin >> num1 >> num2;

                RANGE_CHECK;

                if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
                {
                    warning++;
                    cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                    
                    WARNING_CHECK; 
                    //program will end at this point
                }
            }
        }
    }
    //
    store_7=num1;
    store_8=num2;
    
    //Green color
    if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
        &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;     
        }
    //Red color
    else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
        &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Blue color
    else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
        &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Orange color
    else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
        &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Grey color
    else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
        &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1; 
        }
    //If both numbers are same
    else if (num1==num2)
        {
            cout << "Warning " << warning << "! You entered the same numbers\n";
                cout << "Enter 2 different numbers\n";
                cin >> num1 >> num2;

                //Green color
                if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                    &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;        
                    }
                //Red color
                else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                    &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1; 
                    }
                //Blue color
                else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                    &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //Orange color
                else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                    &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //Grey color
                else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                    &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //If both numbers are same
                else if (num1==num2)
                    {
                        cout << "Warning " << warning << "! You entered the same numbers\n";
                            cout << "Enter 2 different numbers\n";
                            cin >> num1 >> num2;

                            //Green color
                            if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                                &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;          
                                }
                            //Red color
                            else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                                &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Blue color
                            else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                                &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Orange color
                            else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                                &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Grey color
                            else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                                &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //If both numbers are same
                            else if (num1==num2)
                                {
                                    cout << "Warning " << warning << "! You entered the same numbers\n";
                                        cout << "Enter 2 different numbers\n";
                                        cin >> num1 >> num2;

                                        //Green color
                                        if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                                            &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1;          
                                            }
                                        //Red color
                                        else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                                            &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //Blue color
                                        else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                                            &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //Orange color
                                        else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                                            &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1;
                                            }
                                        //Grey color
                                        else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                                            &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //If both numbers are same
                                        else if (num1==num2)
                                            {
                                                cout << "Warning " << warning << "! You entered the same numbers\n";
                                                    cout << "You lose.\n";
                                                    exit(0); //to exit the program as user have been given 4 warnings
                                            }
                                        else 
                                            {
                                                cout << "They are not equal. You lose this round.\n";
                                                store_7=0;
                                                store_8=0;
                                            }
                                }
                            else 
                                {
                                    cout << "They are not equal. You lose this round.\n";
                                    store_7=0;
                                    store_8=0;
                                }
                    }
                else 
                    {
                        cout << "They are not equal. You lose this round.\n";
                        store_7=0;
                        store_8=0;
                    }
        }              
    else 
        {
            cout << "They are not equal. You lose this round.\n";
            store_7=0;
            store_8=0;
        }
    
    WIN_CHECK;

    // Round 5
    cout << endl << "Round 5\n";
    cout << "Enter 2 numbers\n";
    cin >> num1 >> num2;

    RANGE_CHECK;

    //check for whether a previously used number is used
    if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2 || num1==store_3 || num1==store_4 || num2==store_3 || num2==store_4 || num1==store_5 || num1==store_6 || num2==store_5 || num2==store_6 || num1==store_7 || num1==store_8 || num2==store_7 || num2==store_8)&&(win!=0)) 
    {
        warning++;
        cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                
        WARNING_CHECK;

        cout << "Enter 2 digits that haven't been used before to win a round.\n";
        cin >> num1 >> num2;

        RANGE_CHECK;

        if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
        {
            warning++;
            cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                        
            WARNING_CHECK;

            cout << "Enter 2 digits that haven't been used before to win a round.\n";
            cin >> num1 >> num2;

            RANGE_CHECK;

            if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
            {
                warning++;
                cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                
                WARNING_CHECK;

                cout << "Enter 2 digits that haven't been used before to win a round.\n";
                cin >> num1 >> num2;

                RANGE_CHECK;

                if((num1==store_1 || num1==store_2 || num2==store_1 || num2==store_2)&&(win!=0)) //check for whether a previously used number is used
                {
                    warning++;
                    cout << "Warning " << warning <<"! You have entered either one or both of these numbers before.\n";
                    
                    WARNING_CHECK; 
                    //program will end at this point
                }
            }
        }
    }
    //
    store_9=num1;
    store_10=num2;
    
    //Green color
    if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
        &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;     
        }
    //Red color
    else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
        &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Blue color
    else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
        &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Orange color
    else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
        &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1;
        }
    //Grey color
    else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
        &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
        {
            cout << "They are equal. You win this round.\n";
            win+=1; 
        }
    //If both numbers are same
    else if (num1==num2)
        {
            cout << "Warning " << warning << "! You entered the same numbers\n";
                cout << "Enter 2 different numbers\n";
                cin >> num1 >> num2;

                //Green color
                if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                    &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;        
                    }
                //Red color
                else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                    &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1; 
                    }
                //Blue color
                else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                    &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //Orange color
                else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                    &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //Grey color
                else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                    &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                    {
                        cout << "They are equal. You win this round.\n";
                        win+=1;
                    }
                //If both numbers are same
                else if (num1==num2)
                    {
                        cout << "Warning " << warning << "! You entered the same numbers\n";
                            cout << "Enter 2 different numbers\n";
                            cin >> num1 >> num2;

                            //Green color
                            if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                                &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;          
                                }
                            //Red color
                            else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                                &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Blue color
                            else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                                &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Orange color
                            else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                                &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //Grey color
                            else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                                &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                                {
                                    cout << "They are equal. You win this round.\n";
                                    win+=1;
                                }
                            //If both numbers are same
                            else if (num1==num2)
                                {
                                    cout << "Warning " << warning << "! You entered the same numbers\n";
                                        cout << "Enter 2 different numbers\n";
                                        cin >> num1 >> num2;

                                        //Green color
                                        if ((num1==1 || num1==7 || num1==6 || num1==12 || num1==20 || num1==17 || num1==28 || num1==33)
                                            &&(num2==1 || num2==7 || num2==6 || num2==12 || num2==20 || num2==17 || num2==28 || num2==33)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1;          
                                            }
                                        //Red color
                                        else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32)
                                            &&(num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //Blue color
                                        else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36)
                                            &&(num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //Orange color
                                        else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35)
                                            &&(num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1;
                                            }
                                        //Grey color
                                        else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34)
                                            &&(num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34)&&(num1!=num2))
                                            {
                                                cout << "They are equal. You win this round.\n";
                                                win+=1; 
                                            }
                                        //If both numbers are same
                                        else if (num1==num2)
                                            {
                                                cout << "Warning " << warning << "! You entered the same numbers\n";
                                                    cout << "You lose.\n";
                                                    exit(0); //to exit the program as user have been given 4 warnings
                                            }
                                        else 
                                            {
                                                cout << "They are not equal. You lose this round.\n";
                                                store_9=0;
                                                store_10=0;
                                            }
                                }
                            else 
                                {
                                    cout << "They are not equal. You lose this round.\n";
                                    store_9=0;
                                    store_10=0;
                                }
                    }
                else 
                    {
                        cout << "They are not equal. You lose this round.\n";
                        store_9=0;
                        store_10=0;
                    }
        }              
    else 
        {
            cout << "They are not equal. You lose this round.\n";
            store_9=0;
            store_10=0;
        }
    
    WIN_CHECK;

    return 0;
}
