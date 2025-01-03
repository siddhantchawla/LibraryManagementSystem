#ifndef library_management_system_book_details_hpp
#define library_management_system_book_details_hpp

#include<bits/stdc++.h>

using namespace std; 

class BookDetails {
    public:
        string _name;
        int _publicationTime;
        vector<string> _authors;
        BookDetails(string name, int publicationTime, vector<string> authors);
};


#endif