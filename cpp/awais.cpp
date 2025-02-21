// #include<iostream>
// using namespace std;

// class shape
// {
//     protected:
//     int colorcode;
//     public:
//     shape(int cc=112):colorcode(cc)
//     {           }
//     virtual void set()
//     {     }
//     virtual float calcarea()
//     {      }


// };
// class circle:public shape
// {
//     float radius;
//     public:
//     circle(int cc=112,float r=0.0):shape(cc),radius(r)
//     {              }
//      void set()
//     {
//         cout << "Enter color code: ";
//         cin >> colorcode;
//         cout << "Enter circle radius: ";
//         cin >> radius;
//     }
//     float calcarea() override
//     {
//         return 3.14 * radius * radius;
//     }
// };
// class rectangle:public shape
// {
//   float length,width;
//   public:
//   rectangle(int cc=112,float l=0.0;float w=0.0):shape(cc),length(l),width(w)
//   {           }
//    void set()
//     {

//         cout << "Enter length: ";
//         cin >> length;
//         cout << "Enter width: ";
//         cin >> width;
//         cout << "Enter color code: ";
//         cin >> colorcode;
//     }
//     float calcarea() override
//     {
//         return length * width;
//     }

// };
// int main()
// {
//     shape *ptr[3];
//     circle c1(113,22.2),c2(123,78.9);
//     rectangle r1(134,23.4,43.3);
//     ptr[0]=&c1;
//      ptr[1]=&c2; 
//      ptr[2]=&r1;
//       ptr[0]->set();
//     ptr[1]->set();
//     ptr[2]->set();
//     cout << "Area of circle: " << ptr[0]->calcarea() << endl;
//     cout << "Area of rectangle: " << ptr[1]->calcarea() << endl;
//     cout << "Area of c2: " << ptr[2]->calcarea() << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class ParentClass {
// public:
//     virtual void show() {
//         cout << "Parent class show function" << endl;
//     }
// };

// class DerivedClass : public ParentClass {
// public:
//     void show() override {
//         cout << "Derived class show function" << endl;
//     }
// };

// int main() {
//     ParentClass *obj;
//     DerivedClass obj2;
//     obj = &obj2;
//     obj->show();
//      // Calls the overridden function

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class base
// {
//     int a, b;
//     public:
//     base() : a(0), b(0)
//     {                   }
//     base(int aa) : a(aa), b(aa)
//     {                           }
//     void get()
//     {
//         cout<<"a is "<<a<<"\t"<<"b is "<<b<<endl;
//     }
// };
// int main()
// {
//     base obj(12);
//     obj.get();
    
//     return 0;
// }   