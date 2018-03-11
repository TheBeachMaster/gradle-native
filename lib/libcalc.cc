#include "libcalc.hpp"

int LibCalc::add(int a, int b)
{
    return (a + b);
}

int LibCalc::sub(int a, int b)
{
    if(a > b)
    {
       return (a - b); 
    }
    else
    {
        return 0;
    }
}

int LibCalc::div(int a , int b)
{
    if(a == 0 || b == 0)
    {
        return 0;
    } else if(a < b)
    {
        return 0;
    }else 
    {
        return (a / b);
    }

}

int LibCalc::mult(int a, int b )
{
    return (a * b);
}

int LibCalc::sqr(int a)
{
    return (a * a);
}