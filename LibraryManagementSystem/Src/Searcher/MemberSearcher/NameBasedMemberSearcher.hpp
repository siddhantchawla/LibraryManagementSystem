#ifndef library_management_system_name_based_member_searcher_hpp
#define library_management_system_name_based_member_searcher_hpp

#include <MemberSearcher.hpp>

using namespace std;

class NameBasedMemberSearcher: public MemberSearcher {
    string _memberName;

    public:
        NameBasedMemberSearcher(string memberName);
        vector<Member> search();

};


#endif