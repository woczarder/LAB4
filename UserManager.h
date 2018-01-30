//
// Created by Operator Wiertarki on 29.01.2018.
//

#include <vector>
#include "User.h"

#ifndef LAB4_USERMANAGER_H
#define LAB4_USERMANAGER_H


class UserManager {
public:
    void add(string, string);
    void add();
    void del();
    void edit();

    int current_id;

    UserManager();

    void login();
    void logout();

    void print_orders();
    void add_order();

    void print_users();
    void small_print();
    void print_current();

    vector<User> data_vector;

    void load(string filename);
    void save(string filename);

    // stats
    int total_logins;
    int total_order_adds;
    void print_stats();
};


#endif //LAB4_USERMANAGER_H
