#include <bits/stdc++.h>
#include <NameBasedBookSearcher.hpp>
#include <AuthorBasedBookSearcher.hpp>
#include <IdBasedBookSearcher.hpp>
#include <NameBasedMemberSearcher.hpp>
#include <IdBasedMemberSearcher.hpp>
#include <UserAuthenticator.hpp>
#include <BookCopy.hpp>
#include <Member.hpp>
#include <IdGenerator.hpp>
#include <Library.hpp>
#include <LocalDbAccessor.hpp>


using namespace std; 

class LibraryManagementSystem {
        Library* _library;
        DbAccessor* _dbAccessor;
    public:
        LibraryManagementSystem()
        {
            _dbAccessor = new LocalDbAccessor();
            _library = new Library(_dbAccessor);
        }

        vector<BookCopy> searchBooksByName(string bookName) {
            if(bookName == "")
                throw invalid_argument("Book Name cannot be blank!");
            BookSearcher* bookSearcher = new NameBasedBookSearcher(bookName, _dbAccessor);
            return bookSearcher->search();
        } 

        vector<BookCopy> searchBooksByAuthorNames(vector<string> authorNames) {
            if(authorNames.size() == 0)
                throw invalid_argument("Author Names cannot be empty!");
            BookSearcher* bookSearcher = new AuthorBasedBookSearcher(authorNames, _dbAccessor);
            return bookSearcher->search();
        }

        vector<Member> searchMembersByMemberName(string memberName, string adminToken) {
            // authentication & authorization
            if(!UserAuthenticator::isAdmin(adminToken))
                throw invalid_argument("This is not a valid admin token!");
            MemberSearcher* memberSearcher = new NameBasedMemberSearcher(memberName);
            return memberSearcher->search();

        }

        void addBook(string bookName, int publicationTime, vector<string> authors, string adminToken) {
            if(!UserAuthenticator::isAdmin(adminToken))
                throw invalid_argument("This is not a valid admin token!");
            /*
                Add input validation
            */
            BookCopy* bookCopy = new BookCopy(new BookDetails(bookName, publicationTime, authors), IdGenerator::getUniqueId());
            _library->addBookCopy(*bookCopy);
        }

        void deleteBook(int bookCopyId, string adminToken) {
            if(bookCopyId <= 0 || adminToken == "")
                throw invalid_argument("");
            if(!UserAuthenticator::isAdmin(adminToken))
                throw invalid_argument("This is not a valid admin token!");
            BookSearcher* bookSearcher = new IdBasedBookSearcher(bookCopyId, _dbAccessor);
            vector<BookCopy> bookCopies = bookSearcher->search();
            if(bookCopies.size() == 0)
                throw;
            _library->deleteBookCopy(bookCopies[0]);
        }

        void blockMember(int memberId, string adminToken) {
            if(memberId <= 0 || adminToken == "")
                throw invalid_argument("");
            if(!UserAuthenticator::isAdmin(adminToken))
                throw invalid_argument("This is not a valid admin token!");
            
            MemberSearcher* memberSearcher = new IdBasedMemberSearcher(memberId);
            vector<Member> members = memberSearcher->search();

            if(members.size() == 0)
                throw;
            _library->blockMember(members[0]);
            
        }

        void issueBook(int bookCopyId, int memberId, string adminToken) {
            if(bookCopyId <= 0 || memberId <= 0 || adminToken == "")
                throw invalid_argument("");
            if(!UserAuthenticator::isAdmin(adminToken))
                throw invalid_argument("This is not a valid admin token!");

            BookSearcher* bookSearcher = new IdBasedBookSearcher(bookCopyId, _dbAccessor);
            vector<BookCopy> bookCopies = bookSearcher->search();
            if(bookCopies.size() == 0)
                throw;

            MemberSearcher* memberSearcher = new IdBasedMemberSearcher(memberId);
            vector<Member> members = memberSearcher->search();

            if(members.size() == 0)
                throw;

            _library->issueBook(bookCopies[0], members[0]);
        }

        void submitBook(int bookCopyId, int memberId, string adminToken) {
            if(bookCopyId <= 0 || memberId <= 0 || adminToken == "")
                throw invalid_argument("");
            if(!UserAuthenticator::isAdmin(adminToken))
                throw invalid_argument("This is not a valid admin token!");

            BookSearcher* bookSearcher = new IdBasedBookSearcher(bookCopyId, _dbAccessor);
            vector<BookCopy> bookCopies = bookSearcher->search();
            if(bookCopies.size() == 0)
                throw;

            MemberSearcher* memberSearcher = new IdBasedMemberSearcher(memberId);
            vector<Member> members = memberSearcher->search();

            if(members.size() == 0)
                throw;

            _library->submitBook(bookCopies[0], members[0]);
        }

        Member getBorrowerOfBook(int bookCopyId, string adminToken) {
            if(bookCopyId <= 0 || adminToken == "")
                throw invalid_argument("");
            if(!UserAuthenticator::isAdmin(adminToken))
                throw invalid_argument("This is not a valid admin token!");
            BookSearcher* bookSearcher = new IdBasedBookSearcher(bookCopyId, _dbAccessor);
            vector<BookCopy> bookCopies = bookSearcher->search();
            if(bookCopies.size() == 0)
                throw;
            _library->getBorrower(bookCopies[0]);
        }

        vector<BookCopy> getBooksBorrowedByMember(int memberId, string adminToken) {
            if(memberId <= 0 || adminToken == "")
                throw invalid_argument("");
            if(!UserAuthenticator::isAdmin(adminToken))
                throw invalid_argument("This is not a valid admin token!");
            
            MemberSearcher* memberSearcher = new IdBasedMemberSearcher(memberId);
            vector<Member> members = memberSearcher->search();

            if(members.size() == 0)
                throw;
            _library->getBorrowedBooks(members[0]);
        } 
};

void printBooks(vector<BookCopy> bookCopies){
    cout<<"There are "<<bookCopies.size()<<" books with the requested details.\n";
    for(BookCopy copy: bookCopies)
    {
        cout<<copy._id<<" "<<copy._bookDetails->_name<<"\n";
    }
}

int main()
{
    cout<<"Hello, World!\n";
    LibraryManagementSystem* lms = new LibraryManagementSystem();
    lms->addBook("Understanding Distributed Systems", 1, {"Robert Vittilo"}, "testToken");
    printBooks(lms->searchBooksByName("Understanding Distributed Systems"));

}