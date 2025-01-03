#ifndef library_management_system_db_accessor_hpp
#define library_management_system_db_accessor_hpp

#include <bits/stdc++.h>
#include <BookCopy.hpp>
#include <Member.hpp>

class DbAccessor {
    public:
        virtual vector<BookCopy> getBooksWithName(string bookName) = 0;
        virtual vector<BookCopy> getBooksWithAuthorName(vector<string> authors) = 0;
        virtual vector<Member> getMembersWithName(string memberName) = 0;
        virtual void insertBookCopy(BookCopy bookCopy) = 0;
        virtual void deleteBookCopy(BookCopy bookCopy) = 0;
        virtual void markAsBlocked(Member member) = 0;
        virtual void issueBook(BookCopy bookCopy, Member member) = 0;
        virtual void submitBook(BookCopy bookCopy, Member member) = 0;
        virtual bool isCopyAvailable(BookCopy bookCopy) = 0;
        virtual Member getBorrower(BookCopy bookCopy) = 0;
        virtual vector<BookCopy> getBorrowedBooks(Member member) = 0;
};

#endif