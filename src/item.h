#pragma once

#include <string>

using std::string;

class Item
{
public:
    Item(const string &name, double price);

private:
    string name;
    double price;
};