#include<iostream>

using namespace std;


int main()
{
    int option;

    bool running = true; // thi should count as a flag to contorl the loop
    while(running)
    {
        cout << "======= Interactive utility program ======= " << endl; //display the menu 
        cout << " 1. Factorial calculator" << endl;
        cout << " 2. number pyramid" << endl;
        cout << " 3. sum of even or odd numbers" << endl;
        cout << " 4. reverse a string " << endl;
        cout << " 5. Exit " << endl;
        cout << " ==========================================" << endl;

        cout << "please pick an option";
        cin >> option;

        switch(option)
        {
            case 1: 
            {
                int number;
                cout << " enter a postive number";
                cin >> number;

                while(number < 0)
                {
                    cout << "please use a postive number ";
                    cin >> number;
                }

                int factorial = 1;
                int factorialHelper = 1;

                while(factorialHelper <= number)
                {
                    factorial *= factorialHelper;
                    factorialHelper++;
                }

                cout << " the factorial of you number " << number << " is " << factorial << endl;
                break;
            }
                case 2: 
                {
                    int rows;

                    cout <<"enter the number of rows ";
                    cin >> rows;

                    for (int currentRow = 0; currentRow < rows; currentRow++)
                    {
                        for( int spaces = 0; spaces < rows - currentRow - 1; spaces++)
                        {
                            cout << " ";
                        }

                        for( int numbers = 1; numbers <= currentRow + 1; numbers++)
                        {
                            cout << numbers << " ";
                        }
                        cout << endl;
                    }
                    break;


                }

                case 3: 
                {
                    int summaryOption;
                    int upperLimit;
                    int Sum;

                    do
                    {
                        cout << " choose 1 for even numbers and choose 2 for odd numbers";
                        cin >>summaryOption;
                    }    

                    while (summaryOption != 1 && summaryOption != 2);
                    cout << " enter a upper limit ";
                    cin >> upperLimit;

                    if (summaryOption == 1)
                {
                        int evenNum = 0;
                        do
                        {
                            if(evenNum % 2==0)
                            {
                                Sum += evenNum;
                                evenNum++;
                            }
                        }   while (evenNum <= upperLimit);
                            
                            }            else if (summaryOption==2)  
                                
                            


                        
                    
                    
                }
            
        }
    }
    

}
    



