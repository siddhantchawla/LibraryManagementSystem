#ifndef library_management_system_id_based_member_searcher_hpp
#define library_management_system_id_based_member_searcher_hpp

#include <bits/stdc++.h>
#include <MemberSearcher.hpp>

using namespace std;

class IdBasedMemberSearcher: public MemberSearcher {
    string _memberId;

    public:
        IdBasedMemberSearcher(int memberId);
        vector<Member> search();

};


#endif