#ifndef library_management_system_user_authenticator_hpp
#define library_management_system_user_authenticator_hpp

#include<bits/stdc++.h>

using namespace std; 

class UserAuthenticator {
    UserAuthenticator();
    public:
        static bool isAdmin(string token);
        static bool isMember(string token);
};


#endif