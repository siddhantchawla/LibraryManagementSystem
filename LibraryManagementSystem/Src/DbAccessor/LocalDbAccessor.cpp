#include <LocalDbAccessor.hpp>

LocalDbAccessor::LocalDbAccessor(){
    _bookCopies.clear();
    _members.clear();
}

vector<BookCopy> LocalDbAccessor::getBooksWithName(string bookName){
    vector<BookCopy> result;

    for(BookCopy copy: _bookCopies){
        if(copy._bookDetails->_name == bookName)
            result.push_back(copy);
    }
    return result;
}

void LocalDbAccessor::insertBookCopy(BookCopy bookCopy){
    _bookCopies.push_back(bookCopy);
}

Member LocalDbAccessor::getBorrower(BookCopy bookCopy){
    return _members[0];
}

vector<BookCopy> LocalDbAccessor::getBooksWithAuthorName(vector<string> authors){
    return {};
}

vector<Member> LocalDbAccessor::getMembersWithName(string memberName){
    return {};
}

vector<BookCopy> LocalDbAccessor::getBorrowedBooks(Member member){
    return {};
}

void LocalDbAccessor::deleteBookCopy(BookCopy bookCopy){
}

void LocalDbAccessor::markAsBlocked(Member member){

}

void LocalDbAccessor::issueBook(BookCopy bookCopy, Member member){

}

void LocalDbAccessor::submitBook(BookCopy bookCopy, Member member){

}

bool LocalDbAccessor::isCopyAvailable(BookCopy bookCopy){
    return true;
}
