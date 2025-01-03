#include </workspaces/LowLevelDesign/DesignPatterns/BuilderPattern/User.hpp>
#include <iostream>

using namespace std;

User::User(int id, string name, string phoneNumber, int age){
    _id = id;
    _name = name;
    _phoneNumber = phoneNumber;
    _age = age;
}

void User::printUser(){
    cout<<"Id: "<<_id<<"\n";
    cout<<"Name: "<<_name<<"\n";
    cout<<"Phone Number: "<<_phoneNumber<<"\n";
    cout<<"Age: "<<_age<<"\n";
}