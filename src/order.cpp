#include "order.h"

using std::endl;

Order::Order() : discount(0)
{
}

void Order::add(const Item &item)
{
    items.push_back(item);
}

void Order::add(const PercentageDiscount &discount)
{
    this->discount = discount;
}

void Order::print(std::ostream &out)
{
    double total = 0;
    for (auto item : items)
    {
        auto price = item.getPrice();
        total += price;
        out << item.getName() << " $" << price << endl;
    }
    discount.print(out);
    total = discount.apply(total);
    out << "Total $" << total << endl;
}
