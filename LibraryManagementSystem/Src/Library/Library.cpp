#include <Library.hpp>

using namespace std;

Library::Library(DbAccessor* dbAccesor) {
    _dbAccessor = dbAccesor;
}

void Library::addBookCopy(BookCopy bookCopy){
    // Some Validation.. eg; BookCopy is not null
    _dbAccessor->insertBookCopy(bookCopy);
}

void Library::deleteBookCopy(BookCopy bookCopy){
    // Validation and make sure it is thread safe
    // Make sure book exists and is not issued to anyone
    if (_dbAccessor->isCopyAvailable(bookCopy))
        _dbAccessor->deleteBookCopy(bookCopy);
}

Member Library::getBorrower(BookCopy bookCopy){
    return _dbAccessor->getBorrower(bookCopy);
} 

void Library::issueBook(BookCopy bookCopy, Member member){
    _dbAccessor->issueBook(bookCopy, member);
}

void Library::submitBook(BookCopy bookCopy, Member member){
    _dbAccessor->submitBook(bookCopy, member);
}

vector<BookCopy> Library::getBorrowedBooks(Member member){
    return _dbAccessor->getBorrowedBooks(member);
}

void Library::blockMember(Member member){
    _dbAccessor->markAsBlocked(member);
}