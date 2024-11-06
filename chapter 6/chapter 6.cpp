//converts F to C
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

double C, F;

static void form()
{
    for (F = 0; F < 9; F++)
        cout << endl;
}

static void calc()
{
    // Adding table header
    cout << left << setw(12) << "Fahrenheit" << setw(12) << "Celsius"
        << setw(12) << "Fahrenheit" << setw(12) << "Celsius" << endl;
    cout << "-------------------------------------------------------------" << endl; // Table separator

    for (F = 0; F <= 9; F++)
    {
        // Printing Fahrenheit and Celsius values side by side
        cout << left << setw(12) << F;
        C = (F - 32.0) * 5 / 9;
        cout << setw(12) << fixed << showpoint << setprecision(2) << C;

        // Now, printing corresponding Fahrenheit and Celsius values for F + 10
        cout << setw(12) << F + 10;
        C = (F + 10 - 32.0) * 5 / 9;
        cout << setw(12) << fixed << showpoint << setprecision(2) << C << endl;
    }
}

int main()
{
    cout << "Here is a chart of Fahrenheit converted to Celsius\n";
    calc();  // Calls the table generation
    C = (20 - 32.0) * 5 / 9;
    cout << left << fixed << showpoint << setprecision(2) << setw(24) << " " << "20" << setw(10) << " " << C;
}


