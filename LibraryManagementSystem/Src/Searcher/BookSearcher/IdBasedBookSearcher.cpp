#include <IdBasedBookSearcher.hpp>

using namespace std;

IdBasedBookSearcher::IdBasedBookSearcher(int bookId,  DbAccessor* dbAccessor) {
    _bookId = bookId;
    _dbAccessor = dbAccessor;
}

vector<BookCopy> IdBasedBookSearcher::search(){
    vector<BookCopy> result;
    return result;
}
