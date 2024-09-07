// programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double gallons(20), mpgTown(23.5), mpgHighway(28.9);
    double DistanceT = gallons * mpgTown;
    double DistanceH = gallons * mpgHighway;

    cout << "you can drive " << DistanceT << " miles in a town with " << gallons << " gallons of gas\n\n"
    
        << "you can drive " << DistanceH << " miles on the highway with " << gallons << " gallons of gas\n";

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
