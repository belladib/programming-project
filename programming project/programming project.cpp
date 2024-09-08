// programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double customers(16'500), purchWeekly(.15), prefCitrus(.58);

    double amtWeekly = customers * purchWeekly;

    double amtPref = customers * prefCitrus; 

    cout << "the number of customers that buy one or more energy drinks weekly is " << amtWeekly <<
        "\n\nthe number of customers that have a preference to the citrus flavored drinks is " << amtPref << '\n';
    

    return 0;




    
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
