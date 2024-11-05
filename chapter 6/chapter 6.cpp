// chapter 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;




double area, perimeter, length, width;

static void valid(double length, double width)
{
    if (length < 1 || width < 1) //input validation
    {
        cout << "Invalid input, please enter a value above 0";
        exit(0);
    }
}


static void getLW() //get input and then do calculations
{
    double length, width;
    cout << "Please enter the length and then the width in correct order\n";
    cin >> length >> width;
    valid(length, width);
    perimeter = 2 * (length + width);
    area = length * width;
    return ;
}

int main()
{
  
   
    char response, y, Y;
    do // menu setup
    {
        cout << "Please enter Y if you would like to calculate perimieter and area of a rectangle"
            << "\nEnter N if you would like to quit the program\n";
        cin >> response;

        if (response == 89 || response == 121)
        {
            getLW();
            cout << showpoint << fixed << setprecision(2) << "The area is " << area << " and the perimeter is " << perimeter << endl;

        }
        else;
    }

    while
        (response == 89 || response == 121); // acssi values
    cout << "Exiting program";
    return 1;



}

