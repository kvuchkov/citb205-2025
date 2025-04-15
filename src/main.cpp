#include <iostream>
#include "order.h"
#include "item.h"
#include "discount.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Welcome to Darsi!" << endl;

    Order order;
    order.add(Item("Pizza", 10.0));
    order.add(Item("Pizza", 12.0));
    order.add(Item("Beer", 6.0));

    order.add(PercentageDiscount(10));

    order.print(cout);

    return 0;
}