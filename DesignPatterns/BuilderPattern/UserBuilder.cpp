#include </workspaces/LowLevelDesign/DesignPatterns/BuilderPattern/UserBuilder.hpp>

UserBuilder::UserBuilder(int id, string name){
    _id = id;
    _name = name;
    _phoneNumber = "";
    _age = 0;
}

UserBuilder* UserBuilder::setAge(int age){
    _age = age;
    return this;
}

UserBuilder* UserBuilder::setPhoneNumber(string phoneNumber){
    _phoneNumber = phoneNumber;
    return this;
}

User* UserBuilder::build(){
    User* user = new User(_id, _name, _phoneNumber, _age);
    return user;
}