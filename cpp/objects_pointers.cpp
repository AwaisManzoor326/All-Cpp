#include<iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
        void set_data(int r, int i)
        {
            real = r;
            imag = i;
        }
        void get_data()
        {
            cout<<"Real part is "<<real<<endl;
            cout<<"Imaginary part is "<<imag<<"i"<<endl;
        }
};
int main()
{
    //----------------------------------------------
/*
    complex* ptr = new complex;
    (*ptr).set_data(1,34);
    (*ptr).get_data();
*/
    //-----------------------------------------------
/*
    complex* ptr = new complex;
    ptr->set_data(1,34);   //using arrow (arrow operator) is same as previously defined way
    ptr->get_data();       // same as "(*ptr).get_data();"
*/
    //----------------------------------------------
/*
    complex c;
    complex* ptr = &c;
    (*ptr).set_data(1,34);
    (*ptr).get_data();
*/
    //----------------------------------------------
    //Array of objects...
    complex* ptr = new complex[3];
    ptr->set_data(2,5);
    ptr->get_data();
    return 0;
}