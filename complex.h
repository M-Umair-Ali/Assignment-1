#ifndef COMPLEX_H
#define COMPLEX_H


class complex
{
    public:
        complex();
        complex(int ,int);

        complex operator+(complex);//addition with operator overloading
        complex operator-(complex);//subtraction with operator overloading
        complex operator*(complex);//multiplication with operator overloading
        complex operator/(complex);//division with operator overloading



        double re,im;
};

#endif // COMPLEX_H
