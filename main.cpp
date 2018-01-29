#include <iostream>

#include "User.h"
#include "UserManager.h"

using namespace std;

UserManager userManager;

int main() {

    cout << "IM GAY" << endl;

    userManager.load("users.txt");

    return 0;
}