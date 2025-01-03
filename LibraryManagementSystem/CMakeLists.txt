# Minimum required CMake version
cmake_minimum_required(VERSION 3.16)

# Project name and language
project(LibraryManagementSystem LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include directories
include_directories(Src Src/Searcher/BookSearcher Src/Searcher/MemberSearcher Src/Library Src/Member Src/Book Src/DbAccessor Src/Auth Src/IdGenerator)

# Add source files
set(SOURCES
    Src/LibraryManagementSystem.cpp
    Src/Searcher/BookSearcher/AuthorBasedBookSearcher.cpp
    Src/Searcher/BookSearcher/NameBasedBookSearcher.cpp
    Src/Searcher/BookSearcher/IdBasedBookSearcher.cpp
    Src/Searcher/MemberSearcher/IdBasedMemberSearcher.cpp
    Src/Searcher/MemberSearcher/NameBasedMemberSearcher.cpp
    Src/Member/Member.cpp
    Src/Library/Library.cpp
    Src/IdGenerator/IdGenerator.cpp
    Src/DbAccessor/LocalDbAccessor.cpp
    Src/Book/BookCopy.cpp
    Src/Book/BookDetails.cpp
    Src/Auth/UserAuthenticator.cpp
)

# Define the executable
add_executable(LibraryManagementSystem ${SOURCES})
