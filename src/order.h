#pragma once

#include <ostream>
#include <vector>

#include "item.h"
#include "discount.h"

using std::vector;

class Order
{
public:
    Order();
    void add(const Item &item);
    void add(const PercentageDiscount &discount);
    void print(std::ostream &out);
private:
    vector<Item> items;
    PercentageDiscount discount;
};