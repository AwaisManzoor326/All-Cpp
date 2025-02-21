#include"header.h"
#include<iostream>
class Book
{
private:
    int ISSN;
    string Title;
    string Author;
    string Publisher;
    string PublicationDate;
};
Book :: Book()
{
    ISSN = 0;
    Title=Author=Publisher=PublicationDate=NULL;
}

Book :: Book(int issn, string title, string author, string publisher, string publicationDate)
{
    ISSN = issn;
    Title = title;
    Author = author;
    Publisher = publisher;
    PublicationDate = publicationDate;
}

Book :: Input()
{
    cout<<"Enter Book Title: ";      cin>>Title;
    cout<<"Enter ISSN: ";               cin>>ISSN;
    cout<<"Enter Author Name: ";           cin>>Author;
    cout<<"Enter Publisher Name: ";           cin>>Publisher;
    cout<<"Enter Publication Date: ";           cin>>PublicationDate;
}

Book :: display()
{
cout<<"Title = "<<Title<<endl;
cout<<"ISSN = "<<ISSN<<endl;
cout<<"Author = "<<Author<<endl;
cout<<"Publisher = "<<Publisher<<endl;
cout<<"Date of Publication = "<<PublicationDate<<endl;
}