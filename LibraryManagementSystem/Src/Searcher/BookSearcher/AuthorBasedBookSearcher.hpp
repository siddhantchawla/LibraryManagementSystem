#ifndef library_management_system_author_based_book_searcher_hpp
#define library_management_system_author_based_book_searcher_hpp

#include <BookSearcher.hpp>
#include <DbAccessor.hpp>

using namespace std;

class AuthorBasedBookSearcher: public BookSearcher {
    vector<string> _authors;
    DbAccessor* _dbAccessor;
    public:
        AuthorBasedBookSearcher(vector<string> authors, DbAccessor* dbAccessor);
        vector<BookCopy> search();

};


#endif