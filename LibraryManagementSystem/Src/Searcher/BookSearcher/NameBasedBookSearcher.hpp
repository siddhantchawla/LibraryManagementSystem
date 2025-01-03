#ifndef library_management_system_name_based_book_searcher_hpp
#define library_management_system_name_based_book_searcher_hpp

#include <BookSearcher.hpp>
#include <DbAccessor.hpp>

using namespace std;

class NameBasedBookSearcher: public BookSearcher {
    string _bookName;
    DbAccessor* _dbAccessor;
    public:
        NameBasedBookSearcher(string bookName, DbAccessor* dbAccessor);
        vector<BookCopy> search();

};


#endif