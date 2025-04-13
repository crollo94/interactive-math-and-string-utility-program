#include<iostream>
#include<string>

using namespace std;

int main()
{
    int option;
    bool running = true; // this should count as a flag to control the loop

    while(running)
    {
        cout << "======= Interactive utility program ======= " << endl; // display the menu 
        cout << " 1. Factorial calculator" << endl;
        cout << " 2. Number pyramid" << endl;
        cout << " 3. Sum of even or odd numbers" << endl;
        cout << " 4. Reverse a string " << endl;
        cout << " 5. Exit " << endl;
        cout << " ==========================================" << endl;

        cout << "Please pick an option: ";
        cin >> option;

        switch(option)
        {
            case 1:                                    //Factorial calculator(while loop)
            {
                int number;
                cout << "enter a number ";
                cin >> number;

                while(number < 0)
                {
                    cout << "please use a positive number ";
                    cin >> number;
                }

                int factorial = 1;
                int factorialHelper = 1;

                while(factorialHelper <= number)
                {
                    factorial *= factorialHelper;
                    factorialHelper++;
                }

                cout << "the factorial of your number " << number << " is " << factorial << endl;
                break;
            }

            case 2:                                      //Number pyramid (for loop, nested loops)
            {
                int rows;
                cout << "enter the number of rows ";
                cin >> rows;

                for (int currentRow = 0; currentRow < rows; currentRow++)
                {
                    for(int spaces = 0; spaces < rows - currentRow - 1; spaces++)
                    {
                        cout << " ";
                    }

                    for(int numbers = 1; numbers <= currentRow + 1; numbers++)
                    {
                        cout << numbers << " ";
                    }
                    cout << endl;
                }
                break;
            }

            case 3:                                //sum of even or odd numbers (do-while loop)
            {
                int summaryOption;
                int upperLimit;
                int Sum = 0;

                do
                {
                    cout << "choose 1 for even numbers and choose 2 for odd numbers ";
                    cin >> summaryOption;
                }    
                while (summaryOption != 1 && summaryOption != 2);

                cout << "enter an upper limit ";
                cin >> upperLimit;

                if (summaryOption == 1)  //option 1
                {
                    int evenNum = 0;
                    do
                    {
                        if (evenNum % 2 == 0)
                        {
                            Sum += evenNum;
                        }
                        evenNum++;
                    } 
                    
                    while (evenNum <= upperLimit);
                   
                    cout << "Sum of even numbers up to " << upperLimit << ": " << Sum << endl;
                }
                else if (summaryOption == 2)   //option 2
                {
                    int oddNum = 1;
                    do
                    {
                        if (oddNum % 2 != 0)
                        {
                            Sum += oddNum;
                        }
                        oddNum++;
                    } 
                    while (oddNum <= upperLimit);
                    
                    cout << "Sum of odd numbers up to " << upperLimit << ": " << Sum << endl;
                }
                
                break;  //breaks for the switch
            }

            case 4: 
            {
                string userInput;                     //reverese a string (while loop) i think this works but not sure if i needed to use a resvered way 
                cout << "Enter a word ";
                cin >> userInput;

                int reverse = userInput.length() - 1;
                cout << "your word backwards is ";
                while (reverse >= 0)
                {
                    cout << userInput[reverse];
                    reverse--;
                }
                
                cout << endl;
                break;
            }

            case 5: 
            {
                cout << "goodbye!" << endl;
                running = false;
                break;
            }

            default:
                cout << "Nope! try again." << endl;  //if someone picks a inviald input 
        }
    }

    return 0;
}
    



