#include <iostream>
#include "order.h"
#include "item.h"
#include "discount.h"
#include "menu.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Welcome to Darsi!" << endl;

    Order order;
    Menu menu;

    string cmd;
    while (cin >> cmd)
    {
        if (cmd == "exit")
        {
            break;
        }
        else if (cmd == "menu")
        {
            menu.print(cout);
        }
        else if (cmd == "add")
        {
            int id, quantity;
            cin >> id >> quantity;
            for (int i = 0; i < quantity; ++i)
            {
                order.add(menu.get(id));
            }
        }
        else if (cmd == "discount")
        {
            string type;
            cin >> type;
            if (type == "percentage")
            {
                int percentage;
                cin >> percentage;
                order.set(new PercentageDiscount(percentage));
            }
            else if (type == "flat")
            {
                double amount;
                cin >> amount;
                order.set(new FlatDiscount(amount));
            }
        }
        else if (cmd == "print")
        {
            order.print(cout);
            order = Order(); // Reset the order after printing
        }
        else
        {
            cout << "Unknown command: " << cmd << endl;
        }
    }
    cout << "Goodbye!" << endl;

    return 0;
}