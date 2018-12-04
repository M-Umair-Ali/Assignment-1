#include "complex.h"
#include <iostream>

using namespace std;

complex::complex()
{

}
complex::complex(int fr,int fi)
{
re=fr;
im=fi;
}



complex complex::operator+(complex aso)
{
    complex bnew;
    bnew.re=re+aso.re;
    bnew.im=im+aso.im;
    return bnew;
}

complex complex::operator-(complex aso)
{
    complex bnew;
    bnew.re=re-aso.re;
    bnew.im=im-aso.im;
    return bnew;
}

complex complex::operator*(complex aso)
{
    complex bnew;
    double n;
    bnew.re=re*aso.re+im*aso.im*-1;
    bnew.im=re*aso.im+im*aso.re;

    return bnew;
}

complex complex::operator/(complex aso)
{
    complex bnew;
    double n;
    if(aso.im<0)
    {
        bnew.re=(((re*aso.re)+(im*aso.im*(-1))))/((aso.re*aso.re)+(aso.im*aso.im));
    }
    else
        {
            bnew.re=((re*aso.re)+(im*aso.im*(1)))/((aso.re*aso.re)+(aso.im*aso.im));
            }

            bnew.im=(((re*-aso.im)+(im*aso.re)))/((aso.re*aso.re)+(aso.im*aso.im));

    return bnew;
}
