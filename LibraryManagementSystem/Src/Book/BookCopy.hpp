#ifndef library_management_system_book_copy_hpp
#define library_management_system_book_copy_hpp

#include <bits/stdc++.h>
#include <BookDetails.hpp>

using namespace std; 

class BookCopy {
    public:
        BookDetails* _bookDetails;
        int _id;
        BookCopy(BookDetails* bookDetails, int id);
};


#endif