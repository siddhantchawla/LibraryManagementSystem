#ifndef library_management_system_member_hpp
#define library_management_system_member_hpp

#include <bits/stdc++.h>
#include <Book/BookCopy.hpp>

using namespace std; 

class Member {
    public:
        string _name;
        bool _isBlocked;
        vector<BookCopy> _borrowed;
        Member(string name);
};


#endif