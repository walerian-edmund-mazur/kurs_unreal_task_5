#include "ComplexNumber.h"


    ComplexNumber::ComplexNumber()
    {
        cout << "Complex Number with default values: " << real_part << "+" << imaginary_part << "j" << endl;
    };

    ComplexNumber::ComplexNumber(double A)
    {
        real_part = A;
        cout << "Complex Number with only real value " << real_part << "+" << imaginary_part << "j" << endl;
    };

    ComplexNumber::ComplexNumber(double A, double B)
    {
        real_part = A;
        imaginary_part = B;
        cout << "Complex Number with both values: " << real_part << "+" << imaginary_part << "j" << endl;
    };

    ComplexNumber::ComplexNumber(const ComplexNumber& other)
    {
        real_part = other.real_part;
        imaginary_part = other.imaginary_part;
        cout << "Complex Number with copied values: " << real_part << "+" << imaginary_part << "j" << endl;
    }

    ostream & operator<< (ostream &output, const ComplexNumber &cn)
    {
       return output << cn.real_part << "+" << cn.imaginary_part << "j";
    }

    ComplexNumber operator+ (const ComplexNumber &cn1, const ComplexNumber &cn2)
    {
        return ComplexNumber(cn1.real_part + cn2.real_part, cn1.imaginary_part + cn2.imaginary_part);
    }

    ComplexNumber  operator- (const ComplexNumber &cn1, const ComplexNumber &cn2)
    {
        return ComplexNumber(cn1.real_part - cn2.real_part, cn1.imaginary_part - cn2.imaginary_part);
    }
    
    ComplexNumber operator* (const ComplexNumber &cn1, const ComplexNumber &cn2)
    {
        return ComplexNumber(cn1.real_part * cn2.real_part - cn1.imaginary_part * cn2.imaginary_part,
            cn1.real_part * cn2.imaginary_part + cn1.imaginary_part * cn2.real_part);
    }

    ComplexNumber operator/ (const ComplexNumber &cn1, const ComplexNumber &cn2)
    {
        double denominator = cn2.real_part * cn2.real_part + cn2.imaginary_part * cn2.imaginary_part;
        return ComplexNumber((cn1.real_part * cn2.real_part + cn1.imaginary_part * cn2.imaginary_part) / denominator,
            (cn1.imaginary_part * cn2.real_part - cn1.real_part * cn2.imaginary_part) / denominator);
    }

    ComplexNumber operator== (const ComplexNumber &cn1, const ComplexNumber &cn2)
    {
        return ComplexNumber(cn1.real_part == cn2.real_part, cn1.imaginary_part == cn2.imaginary_part);
    }

    ComplexNumber operator!= (const ComplexNumber &cn1, const ComplexNumber &cn2)
    {
        return ComplexNumber(cn1.real_part != cn2.real_part, cn1.imaginary_part != cn2.imaginary_part); 
    }


    ComplexNumber::~ComplexNumber() 
    {
        cout << "Complex Number destroyed: " << real_part << "+" << imaginary_part << "j" << endl;
    };

    




