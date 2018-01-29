//
// Created by Operator Wiertarki on 29.01.2018.
//

#include <fstream>
#include "UserManager.h"


void UserManager::load(string filename) {

    fstream my_file;
    my_file.open(filename, ios::in);

    size_t pos1 = 0, pos2;

    if (!my_file.is_open())
        cout << "Can't open manager file" << endl;

    string line;

    string subs[2];
    while (getline(my_file, line)) {
        //here we search for separator in every line
        //cout << line << endl;
        pos1 = 0;
        for (int i = 0; i < 2; i++) {
            pos2 = line.find("|", pos1);

            subs[i] = line.substr(pos1, (pos2-pos1));
            cout << subs[i] << endl;
            //cout << "pos1:" << pos1 << ", pos2:" << pos2 << endl;

            pos1 = pos2+1;
        }
        cout << endl;

//        data_vector.push_back();
    }

    my_file.close();
}