#include "discount.h"

PercentageDiscount::PercentageDiscount(int percentage) : off(percentage / 100.0)
{
}

double PercentageDiscount::apply(double total)
{
    return total - off * total;
}

void PercentageDiscount::print(std::ostream &out)
{
    out << "Discount: " << int(off * 100.0) << "% off" << std::endl;
}
