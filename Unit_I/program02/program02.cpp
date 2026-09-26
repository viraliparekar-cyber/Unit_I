#include <iostream>  // Includes the input/output stream library

using namespace std; // Allows us to use cout without writing std::cout

int main()              // Main function: program execution starts here
{
    int marks = 45;     // Declares an integer variable 'marks' and assigns 45

    // Checks whether the marks are greater than or equal to 40
    if (marks >= 40)
    {
        cout << "Pass"; // Displays "Pass" if the condition is true
    }
    else
    {
        cout << "Fail"; // Displays "Fail" if the condition is false
    }

    return 0;           // Indicates that the program executed successfully
}
