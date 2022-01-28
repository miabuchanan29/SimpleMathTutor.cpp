//Program Name:Math Tutor v.3
//Purpose:This program is a modified version of Math Tutor v.2. Users will now be able to select addition, subtraction, multiplication, division, or quit from a menu
//Author:Mia Buchanan
//Date Last Modified: 10-29-2019


#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include <ctime>
using namespace std;
int main ()
{
    unsigned seed = time (0);
    srand(seed);
    int choice; //to hold a menu choice
    int num1; //first number for problems
    int num2; //second number for problems
    int num; //user's answer
    int ans; //correct answer for the problem
    const int MIN_NUM = 0,
            MAX_NUM = 999;
    do
    {
        num1 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
        num2 = (rand() % (MAX_NUM - MIN_NUM +1)) + MIN_NUM;
    
    
    //Display of Menu

        cout << "Math Tutor Menu" << endl;
        cout << "------------------------------" << endl;
        cout << "1. Addition Problem" << endl;
        cout << "2. Subtraction Problem" << endl;
        cout << "3. Multiplication Problem" << endl;
        cout << "4. Division Problem" << endl;
        cout << "5. Quit this Program" << endl;
        cout << "------------------------------" << endl;
        cout << "Enter your choice (1-5): " << endl;
        
        while(!(cin >> choice) ||
            choice < 1 ||
            choice > 5)
            {
                cout << "Invalid selction." << choice <<  "Please enter a valid selection." << endl;
                cin.clear();
                cin.ignore(1200, '\n');
            }

        switch(choice)
        {
            case 1:
            cout << num1 << "+" << num2 << "=" << endl;
            cin >> num;
            ans = num1 + num2;
            if (ans == num)
            {
                cout << "Congratulations. That's right." << endl;
            }
            else
            {
                cout << "Sorry. That's incorrect." << endl;
            }

            case 2:
            cout << num1 << "-" << num2 << "=" << endl;
            cin >> num;
            ans = num1 - num2;
            if (ans == num)
            {
                cout << "Congratulations. That's right." << endl;
            }
            else
            {
                cout << "Sorry. That's incorrect." << endl;
            }

            case 3:
            cout << num1 << "*" << num2 << "=" << endl;
            cin >> num;
            ans = num1 * num2;
            if (ans == num)
            {
                cout << "Congratulations. That's right." << endl;
            }
            else
            {
                cout << "Sorry. That's incorrect." << endl;
            }

            case 4:
            cout << num1 << "/" << num2 << "=" << endl;
            cin >> num;
            
            ans = num1 / num2;
            if (ans == num)
            {
                cout << "Congratulations. That's right." << endl;
            }
            else
            {
                cout << "Sorry. That's incorrect." << endl;
            }
              
        }
    } while (choice != 5);
    return 0;
}

