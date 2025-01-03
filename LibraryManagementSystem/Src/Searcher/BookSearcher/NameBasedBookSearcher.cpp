#include <NameBasedBookSearcher.hpp>

using namespace std;

NameBasedBookSearcher::NameBasedBookSearcher(string bookName, DbAccessor* dbAccessor) {
    _bookName = bookName;
    _dbAccessor = dbAccessor;
}

vector<BookCopy> NameBasedBookSearcher::search(){
    return _dbAccessor->getBooksWithName(_bookName);
}
