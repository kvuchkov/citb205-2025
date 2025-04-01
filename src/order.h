#pragma once

#include <ostream>

#include "item.h"
#include "discount.h"

class Order
{
public:
    void add(const Item &item);
    void add(const PercentageDiscount &discount);
    void print(std::ostream &out);
};