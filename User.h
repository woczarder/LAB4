//
// Created by Operator Wiertarki on 29.01.2018.
//

#include <iostream>

#ifndef LAB4_USER_H
#define LAB4_USER_H

using namespace std;

class User {
private:
    string password;
public:
    string login;

    User();

    void print_me();
};


#endif //LAB4_USER_H
