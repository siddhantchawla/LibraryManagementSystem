#ifndef design_patterns_builder_pattern_user_hpp
#define design_patterns_builder_pattern_user_hpp

#include <bits/stdc++.h>

using namespace std;

class User{
    int _id;
    string _name;
    string _phoneNumber; //optional
    int _age; //optional

    public:
        User(int id, string name, string phoneNumber, int age);
        void printUser();
};

#endif