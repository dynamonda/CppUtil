// Copyright 2021 dynamonda

#include <iostream>
#include "cpputil.hpp"

int main() {
    std::string str = "12345";
    std::string target = "87";
    std::string to = "a";

    std::string str2(str);
    std::string::iterator itr = str2.begin();

    while (itr != str2.end()) {
        auto find_itr = find_end(itr, str2.end(), target.begin(), target.end());
        if (find_itr != str2.end()) {
            str2.replace(find_itr, find_itr+target.size(), to);
        }
        itr++;
    }

    std::cout << str2 << std::endl;
}
