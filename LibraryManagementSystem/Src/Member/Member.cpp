#include <Member.hpp>

Member::Member(string name){
    _name = name;
    _isBlocked = false;
    _borrowed.clear();
}