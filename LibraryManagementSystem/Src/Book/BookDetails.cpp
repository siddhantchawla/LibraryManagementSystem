#include <BookDetails.hpp>

BookDetails::BookDetails(string name, int publicationTime, vector<string> authors){
    _name = name;
    _publicationTime = publicationTime;
    _authors = authors;
}