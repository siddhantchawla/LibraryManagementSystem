#ifndef library_management_system_library_hpp
#define library_management_system_library_hpp

#include <bits/stdc++.h>
#include <BookCopy.hpp>
#include <Member.hpp>
#include <DbAccessor.hpp>

using namespace std; 

class Library {
    DbAccessor* _dbAccessor;
    public:
        Library(DbAccessor* dbAccessor);
        void addBookCopy(BookCopy bookCopy);
        void deleteBookCopy(BookCopy bookCopy);
        Member getBorrower(BookCopy bookCopy);
        void issueBook(BookCopy bookCopy, Member member);
        void submitBook(BookCopy bookCopy, Member member);
        vector<BookCopy> getBorrowedBooks(Member member);
        void blockMember(Member member);
};


#endif