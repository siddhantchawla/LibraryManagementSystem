#include <AuthorBasedBookSearcher.hpp>

using namespace std;

AuthorBasedBookSearcher::AuthorBasedBookSearcher(vector<string> authors, DbAccessor* dbAccessor){
    _authors = authors;
    _dbAccessor = dbAccessor;
}

vector<BookCopy> AuthorBasedBookSearcher::search(){
    vector<BookCopy> result;
    return result;
}
