//AVERAGE OF 5 SCORES
//

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
double smallest, largest, average, sum;

void findsmall(double score1, double score2, double score3, double score4, double score5)//FINDS SMALLEST VALUE
{
    if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5) 
        smallest = score1;
    else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5) 
        smallest = score2;
    else if (score3 < score2 && score3 < score1 && score3 < score4 && score3 < score5)
        smallest = score3;
    else if (score4 < score2 && score4 < score3 && score4 < score1 && score4 < score5)
        smallest = score4;
    else if (score5 < score2 && score5 < score3 && score5 < score4 && score5 < score1)
        smallest = score5;
    return;
}

void findbig(double score1, double score2, double score3, double score4, double score5)//FINDS LARGEST VALUE
{
    if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
        largest = score1;
    else if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5) 
        largest = score2;
    else if (score3 > score2 && score3 > score1 && score3 > score4 && score3 > score5)
        largest = score3;
    else if (score4 > score2 && score4 > score3 && score4 > score1 && score4 > score5)
        largest = score4;
    else if (score5 > score2 && score5 > score3 && score5 > score4 && score5 > score1)
        largest = score5;
    return;
}

void math(double score1, double score2, double score3, double score4, double score5) //CALCULATION
{
    findsmall(score1, score2, score3, score4, score5);
    findbig(score1, score2, score3, score4, score5);
    sum = score1 + score2 + score3 + score4 + score5;
    sum -= smallest;
        sum -= largest;
        average = sum / 3;
}


int main() //MAIN PROGRAM
{
    double score1, score2, score3, score4, score5;


    cout << "Please enter your 5 scores for the contestant, must be 0 - 10\n";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    if (score1 < 0 || score1 > 10 || score2 < 0 || score2 > 10 || score3 < 0 || score3 > 10 || score4 < 0 || score4 > 10 || score5 < 0 || score5 > 10)
    {
        cout << "\nInvalid, must be between 0 and 10.";
            return 1;
    }
    math(score1, score2, score3, score4, score5);
    cout << showpoint << fixed << setprecision(2) << "\nThe average score without the lowest and highest scores is " << average << endl;




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
