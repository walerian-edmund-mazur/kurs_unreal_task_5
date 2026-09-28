using namespace std;

#include <iostream>
#include "ComplexNumber.h"

int main()
{
    system("clear");
    cout << "Task 5 - Complex Number" << endl;
    cout << "Creating complex numbers..." << endl;
    cout << "Creating complex numbers using different constructors..." << endl;
    cout << "Creating cn0 using default constructor..." << endl;
    ComplexNumber cn0;
    cout << "Creating cn1 using constructor with one parameter..." << endl;
    ComplexNumber* cn1 = new ComplexNumber(5);
    cout << "Creating cn2 using constructor with two parameters..." << endl;
    ComplexNumber* cn2 = new ComplexNumber(3, 4);
    cout << "Creating cn3 using copy constructor..." << endl;
    ComplexNumber cn3(*cn2); // using copy constructor
    cout << "Complex numbers created successfully." << endl;
    cout << "******************************************************************" << endl;

    cout << "Displaying complex numbers using overloaded << operator..." << endl;
    cout << "cn0: " << cn0 << endl;
    cout << "cn1: " << *cn1 << endl;
    cout << "cn2: " << *cn2 << endl;
    cout << "cn3: " << cn3 << endl;
    cout << "******************************************************************" << endl;
    cout << "Performing arithmetic operations on complex numbers..." << endl;
    cout << "cn0 + cn1: " << cn0 + *cn1 << endl;    
    cout << "cn0 - cn1: " << cn0 - *cn1 << endl;
    cout << "cn0 * cn1: " << cn0 * *cn1 << endl;
    cout << "cn0 / cn1: " << cn0 / *cn1 << endl;
    cout << "******************************************************************" << endl;
    cout << "Deleting dynamically allocated complex numbers..." << endl;
    delete cn1;
    delete cn2;
    cout << "Dynamically allocated complex numbers deleted successfully." << endl;
    return 0;
}