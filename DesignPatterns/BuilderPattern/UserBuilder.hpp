#ifndef design_patterns_builder_pattern_user_builder_hpp
#define design_patterns_builder_pattern_user_builder_hpp

#include <bits/stdc++.h>
#include </workspaces/LowLevelDesign/DesignPatterns/BuilderPattern/User.hpp>

using namespace std;

class UserBuilder{
    int _id;
    string _name;
    string _phoneNumber; //optional
    int _age; //optional

    public:
        UserBuilder(int id, string name);
        UserBuilder* setPhoneNumber(string phoneNumber);
        UserBuilder* setAge(int age);
        User* build();
};

#endif