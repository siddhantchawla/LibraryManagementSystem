#ifndef library_management_system_book_searcher_hpp
#define library_management_system_book_searcher_hpp

#include <bits/stdc++.h>
#include <BookCopy.hpp>

using namespace std; 

class BookSearcher {
    public:
        virtual vector<BookCopy> search() = 0;
};


#endif