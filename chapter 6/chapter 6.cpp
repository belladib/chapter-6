// chapter 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double score1, score2, score3, score4, score5;


    cout << "Please enter your 5 scores for the contestant, must be 1 - 10";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    if (score1 < 0 || score1 > 10 || score2 < 0 || score2 > 10 || score3 < 0 || score3 > 10 || score4 < 0 || score4 > 10 || score5 < 0 || score5 > 10)
    {
        cout << "Invalid, must be between 0 and 10.";
            return 1;
    }





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
