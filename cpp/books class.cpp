#include<iostream>
using namespace std;
class book
{
    private:
        int book_no, book_pages, book_price;
    public:
        book(): book_no(0), book_pages(0), book_price(0)
        {           }
        void set_by_arguments(int no, int pg, int pr)
        {
            book_no=no;
            book_pages=pg;
            book_price=pr;
        }
        void set_by_input()
        {
            cout<<"enter book number: ";        cin>>book_no;
            cout<<"enter book pages: ";         cin>>book_pages;
            cout<<"enter book price: ";         cin>>book_price;
        }
        void show()
        {
            cout<<endl<<"\t\tPrice: "<<book_price<<endl;
            cout<<"\t\tPages: "<<book_pages<<endl;
            cout<<"\t\tBook Number: "<<book_no<<endl;
        }
        int return_price()
        {
            return book_price;
        }

        ~book()
        {           }
};
int main()
{
    book b1,b2,b3;
    b1.set_by_input();
    b2.set_by_arguments(02, 500, 300);
    b3.set_by_input();
    if(b1.return_price()>b2.return_price() && b1.return_price()>b3.return_price())
       { 
        cout<<"\n\t\tThe details of costly book are:";
        b1.show();
       }
    else if(b2.return_price()>b1.return_price() && b2.return_price()>b3.return_price())
       {
        cout<<"\n\t\tThe details of costly book are:";
         b2.show();
       }
    else if(b1.return_price()==b2.return_price() && b2.return_price()==b3.return_price())
        {
        cout<<"Price of all books is same.  DETAILS :-" ;   
        b1.show();
        cout<<endl;     b2.show();
        cout<<endl;     b3.show();
        }
    else if(b3.return_price()>b2.return_price() && b3.return_price()>b1.return_price())
        {
            cout<<"\n\t\tThe details of costly book are: ";
            b3.show();
        }
        main();
    return 0;
    exit(0);
    system("pause");   
}