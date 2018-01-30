//
// Created by Operator Wiertarki on 29.01.2018.
//

#include <iostream>
#include <vector>
#include "Order.h"

#ifndef LAB4_USER_H
#define LAB4_USER_H

using namespace std;

class User {
private:
    string password;

    vector<Order> orders;

public:
    string login;

    User(string, string);
    void print_me();

    void set_login(string);
    void set_password(string);

    string get_login();
    string get_password();

    void add_order();
    void print_orders();
};


#endif //LAB4_USER_H
