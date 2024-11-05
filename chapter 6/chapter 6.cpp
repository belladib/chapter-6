// chapter 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//determines which region is safest based on number of accidents

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
//prototypes
void find(double, double, double, double);
static void Print(double, double, double, double, double);

double north, south, west, east, smallest, largest; //used in all parts of the program

int main()
{
    


    cout << "How many accidents happened in the northern part of your city?\n";
    cin >> north;
    if (north < 0)
    {
        cout << "Invalid, please enter a number that is at least 0";
        return 1;
    }

    cout << "\nHow many accidents happened in the southern part of your city?\n";
    cin >> south;
    if (south < 0)
    {
        cout << "Invalid, please enter a number that is at least 0";
        return 1;
    }

    cout << "\nHow many accidents happened in the east part of your city?\n";
    cin >> east;
    if (east < 0) 
    {
        cout << "Invalid, please enter a number that is at least 0";
        return 1;
    }
    cout << "\nHow many accidents happened in the west part of your city?\n";
    cin >> west; 
    if (west < 0)
    {
        cout << "Invalid, please enter a number that is at least 0";
        return 1;
    }
    find(north, south, east, west);

    cout << "\nThe safest region with the least amount of accidents was ";
    Print(smallest, east, west, south, north);
    cout << " with " << smallest << " accidents\n";

}


void find(double north, double south, double east, double west)
{
    if (north < east && north < west && north < south) //compares north
        smallest = north;
    else if (east < north && east < south && east < west) // compares east
        smallest = east;
    else if (south < east && south < west && south < north)// compares south
        smallest = south;
    else if (west < east && west < north && west < south)// compares west
        smallest = west;
    return;

    
}
static void Print(double smallest, double east, double west, double south, double north)
{// so that it will know which region to print
    if (smallest == east)
        cout << "east";
    else if (smallest == west)
        cout << "west";
    else if (smallest == north)
        cout << "north";
    else if (smallest == south)
        cout << "south";
} 



