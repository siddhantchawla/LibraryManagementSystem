#ifndef library_management_system_member_searcher_hpp
#define library_management_system_member_searcher_hpp

#include <bits/stdc++.h>
#include <Member.hpp>

using namespace std; 

class MemberSearcher {
    public:
        virtual vector<Member> search() = 0;
};


#endif