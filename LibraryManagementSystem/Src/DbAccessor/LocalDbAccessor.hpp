#ifndef library_management_system_local_db_accessor_hpp
#define library_management_system_local_db_accessor_hpp

#include <DbAccessor.hpp>

class LocalDbAccessor: public DbAccessor {
        vector<BookCopy> _bookCopies;
        vector<Member> _members;
    public:
        LocalDbAccessor();
        vector<BookCopy> getBooksWithName(string bookName);
        vector<BookCopy> getBooksWithAuthorName(vector<string> authors);
        vector<Member> getMembersWithName(string memberName);
        void insertBookCopy(BookCopy bookCopy);
        void deleteBookCopy(BookCopy bookCopy);
        void markAsBlocked(Member member);
        void issueBook(BookCopy bookCopy, Member member);
        void submitBook(BookCopy bookCopy, Member member);
        bool isCopyAvailable(BookCopy bookCopy);
        Member getBorrower(BookCopy bookCopy);
        vector<BookCopy> getBorrowedBooks(Member member);
};

#endif