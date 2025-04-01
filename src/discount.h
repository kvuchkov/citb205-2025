#pragma once

#include <ostream>

class PercentageDiscount
{
public:
    PercentageDiscount(int percentage);
    double apply(double total);
    void print(std::ostream &out);
private:
    double off;
};