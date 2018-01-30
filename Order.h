//
// Created by Operator Wiertarki on 30.01.2018.
//
#include <iostream>

#ifndef LAB4_ORDER_H
#define LAB4_ORDER_H


using namespace std;

class Order {
public:
    string name;
    int value;

    Order(string name, int value);

    void print_me();

    int get_value();
};


#endif //LAB4_ORDER_H
