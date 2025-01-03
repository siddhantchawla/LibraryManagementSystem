#ifndef library_management_system_id_based_book_searcher_hpp
#define library_management_system_id_based_book_searcher_hpp

#include <BookSearcher.hpp>
#include <DbAccessor.hpp>

using namespace std;

class IdBasedBookSearcher: public BookSearcher {
    int _bookId;
    DbAccessor* _dbAccessor;
    public:
        IdBasedBookSearcher(int bookId, DbAccessor* dbAccessor);
        vector<BookCopy> search();

};


#endif