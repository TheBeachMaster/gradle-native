# include "libcalc.hpp"
#include <iostream>

using namespace std;   
int main(int argc, char** argv)
{
    LibCalc calc;
    int a = 80;
    int b = 42;
    int add = calc.add(a, b);
    int divide = calc.div(a, b);
    int subtract = calc.sub(a, b);
    int multiply = calc.mult(a, b);
    int square = calc.sqr(b);

     cout << "Adding Numbers: " << add <<"\n";
     cout << "Dividing Numbers: " << divide << "\n";
     cout << "Subtracting Numbers: " << subtract << "\n";
     cout << "Multiplying Numbers: " << multiply << "\n";
     cout << "Squaring Numbers: " << square << "\n";
}