#include "item.h"

Item::Item(const string &name, double price) : name(name), price(price)
{
}

string Item::getName() const
{
    return name;
}

double Item::getPrice() const
{
    return price;
}
