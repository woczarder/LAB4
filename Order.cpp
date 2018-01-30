//
// Created by Operator Wiertarki on 30.01.2018.
//

#include "Order.h"

Order::Order(string name, int value) {
    this->name = name;
    this->value = value;
}

void Order::print_me() {
    cout << "Name: " << this->name << "\tValue: " << this->value << endl;
}

int Order::get_value() {
    return this->value;
}