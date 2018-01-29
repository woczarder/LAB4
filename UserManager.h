//
// Created by Operator Wiertarki on 29.01.2018.
//

#include <vector>
#include "User.h"

#ifndef LAB4_USERMANAGER_H
#define LAB4_USERMANAGER_H


class UserManager {
public:
    void add_user();
    void del_user();
    void edit_user();

    void print_users();

    vector<User> data_vector;

    void load(string filename);
    void save(string filename);
};


#endif //LAB4_USERMANAGER_H
