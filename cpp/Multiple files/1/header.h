
#include <cstring>
using namespace std;

#ifndef _BOOK_
#define _BOOK_

class Book
{
private:
     int ISSN;
     string Title;
     string Author;
     string Publisher;
     string PublicationDate;

public:
    Book();
    Book(int issn, string title, string author, string publisher, string publicationDate);
    void Input();
    void display();
};

#endif