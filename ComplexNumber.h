/***************************************************
 * Header file for task 5 ComplexNumber class.
 * Contains declarations for the ComplexNumber class and its member functions.
 ***************************************************/

#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

using namespace std;

#include <iostream>

class ComplexNumber
{
    private:
    double real_part = 0;
    double imaginary_part = 0;

    public:
    ComplexNumber();    // default constructor
    ComplexNumber(double A); //constructor with one parameter
    ComplexNumber(double A, double B); // constructor with two parameters
    ComplexNumber(const ComplexNumber& other); // copy constructor
    ~ComplexNumber();   // default 
    
    friend ostream & operator<< (ostream &output, const ComplexNumber &cn);
    friend ComplexNumber operator+ (const ComplexNumber &cn1, const ComplexNumber &cn2);
    friend ComplexNumber operator- (const ComplexNumber &cn1, const ComplexNumber &cn2);
    friend ComplexNumber operator* (const ComplexNumber &cn1, const ComplexNumber &cn2);
    friend ComplexNumber operator/ (const ComplexNumber &cn1, const ComplexNumber &cn2);
    friend ComplexNumber operator== (const ComplexNumber &cn1, const ComplexNumber &cn2);
    friend ComplexNumber operator!= (const ComplexNumber &cn1, const ComplexNumber &cn2);

};

#endif // COMPLEX_NUMBER_H