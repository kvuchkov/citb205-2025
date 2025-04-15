#include "order.h"
#include <iomanip>

using std::endl;

Order::Order() : discount()
{
}

void Order::add(const Item &item)
{
    items.push_back(item);
}

void Order::set(const Discount *discount)
{
    this->discount = discount;
}

void Order::print(std::ostream &out)
{
    out << std::setprecision(2) << std::fixed;
    double total = 0;
    for (auto item : items)
    {
        auto price = item.getPrice();
        total += price;
        out << item.getName() << " $" << price << endl;
    }
    if (discount)
    {
        discount->print(out);
        total = discount->apply(total);
    }
    out << "Total $" << total << endl;
}
