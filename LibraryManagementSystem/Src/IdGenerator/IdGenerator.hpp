#ifndef library_management_system_id_generator_hpp
#define library_management_system_id_generator_hpp

#include<bits/stdc++.h>

using namespace std; 

class IdGenerator {
    static int counter;
    IdGenerator();
    public:
        static int getUniqueId();
};


#endif