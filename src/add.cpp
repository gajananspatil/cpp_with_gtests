
#include <iostream>
#include "add.h"

int add( int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b; 
}

std::string add( std::string a, std::string b)
{
    std::string s = a+ " " + b;
    return s;
}