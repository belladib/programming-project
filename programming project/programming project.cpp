// programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //variable values
    double riseRate(1.5), year5(5), year7(7), year10(10);
  
    //math
    double change5 = riseRate * year5;
    double change7 = riseRate * year7;
    double change10 = riseRate * year10;

    
    cout << "the ocean level is currently 300, and the rise rate is 1.5 millimeters\n\n"
   
        << " after 5 years, the ocean levels will rise " << change5 << " millimeters\n\n"
    
        << " after 7 years, the ocean levels will rise " << change7 << " millimeters\n\n"
   
        << " after 10 years, the ocean levels will rise " << change10 << " millimeters\n";


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

//cout << "the ocean level is currently 300, and the rise rate is 1.5\n";
//cout << " after 5 years, the ocean levels will rise " << change5 << '\n';
//out << " after 7 years, the ocean levels will rise " << change7 << '\n';
//cout << "after ten years, the ocean levels will rise " << change10 << '\n';