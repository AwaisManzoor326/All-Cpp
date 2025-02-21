// #include <iostream>
// using namespace std;
// class rects
// {
//     int feet;
//     float inches;

// public:
//     rects()
//     {
//         feet = 20;
//         inches = 40;
//     }
//     rects(rects &rect)
//     {
//         feet = rect.feet;
//         inches = rect.inches;
//     }
//     void shoe()
//     {
//         cout << feet << " " << inches << endl;
//     }
// };
// int main()
// {
//     rects r1;
//     rects r2(r1);
//     cout<<"R1: ";
//     r1.shoe();
//     cout<<"R2: ";
//     r2.shoe();
//     return 0;
// }
#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
    rectangle(){
        length=10;
        breadth=20;
    }
    rectangle(rectangle &rect){
        length=rect.length;
        breadth=rect.breadth;
    }
    void show(){
        cout<<"length: "<<length<<endl;
        cout<<"breadth: "<<breadth<<endl;
    }
    ~rectangle()
    {           }
};
int main()
{
    rectangle r1;
    rectangle r2(r1);
    r1.show();
    r2.show();
    rectangle r3=r2;
    // r3=r2;
    r3.show();
    return 0;
}