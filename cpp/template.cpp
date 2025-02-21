// SIMPLE TEMPLATES PRACTICE.................
//  #include<iostream>
//  using namespace std;
//  template <class T>
//  class vector
//  {
//      public:
//      T *arr;
//      int size;
//      vector(int n)
//      {
//          size=n;
//          arr = new T[size];
//      }
//      T DotProduct(vector v)
//      {
//          T sum=0;
//          for(int i=0;i<size;i++)
//          {
//              sum+=arr[i]*v.arr[i];
//          }
//          return sum;
//      }

//     T ScalarProduct(vector e)
//     {
//         T sum=0;
//         for(int i=0;i<size;i++)
//         {
//             sum+=arr[i]*e.arr[i];
//         }
//         return sum;
//     }
// };
// int main()
// {
//     vector <double> v1(4.2);
//     vector <double> v2(4.3);
//     v1.arr[0]=1.1;
//     v1.arr[1]=2.2;
//     v1.arr[2]=3.3;
//     v1.arr[3]=4.4;

//     v2.arr[0]=5.5;
//     v2.arr[1]=6.6;
//     v2.arr[2]=7.7;
//     v2.arr[3]=8.8;

//     double A = v1.DotProduct(v2);
//     cout<<"Dot Product = "<<A<<endl;

//     double B = v2.ScalarProduct(v1);
//     cout<<"Scalar Product = "<<B<<endl;

//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////
// multi-parameterized template
// #include<iostream>
// using namespace std;
// template<class T1, class T2, class T3>
// class multi
// {
//     public:
//     T1 a;
//     T2 b;
//     T3 c;
//     public:
//     multi(T1 a, T2 b, T3 c)
//     {
//         this->a=a;
//         this->b=b;
//         this->c=c;
//     }
//     void display()
//     {
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//         cout<<"c = "<<c<<endl;
//     }
// };
// int main()
// {
//     multi <long, string, char> m(13241233, "Awais Meer", 'M');
//     m.display();
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////
// DEFAULT TEMPLATES.......................
// #include <iostream>
// using namespace std;
// template <class T1 = int, class T2 = float>    // default parameter template
// class vector
// {
// public:
//     T1 var1;
//     T2 var2;
//     vector(T1 a, T2 b) : var1(a), var2(b)
//     {
//     }
//     void display()
//     {
//         cout << "var1 = " << var1 << endl
//              << "var2 = " << var2 << endl;
//     }
// };
// int main()
// {
//     vector<> v1(230, 230.5); // default parameters
//     v1.display();
//     vector <char, string> v2('M', "Awais");  //we can also specify template type later...
//     v2.display();
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////
// TEMPLATE FUNCTION.......................
// #include <iostream>
// using namespace std;
// template <class T1, class T2>
// void func(T1 a, T2 b)
// {
//     cout << "a = " << a << endl
//          << "b = " << b << endl;
// }
// int main()
// {
//     int x = 20;
//     float y = 20.5;
//     func(x, y); // template function can be called with different data types

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// template<class T>
// void swapp(T &a, T &b)
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int x = 1;
//     int y = 2;
//     cout<<"x = "<<x<<endl;
//     cout<<"y = "<<y<<endl;
//     swapp(x, y);
//     cout<<endl;
//     cout<<"x = "<<x<<endl;
//     cout<<"y = "<<y<<endl;
    
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////
//template using scope ersolution functions
// #include<iostream>
// using namespace std;
// template <class T>
// class C
// {
//     public:
//     T x;
//     void display(T a);
// };
// template<class T>
// void C<T>::display(T a)
// {
//     x = a;
//     cout<<"value of x = "<<x<<endl;
// }
// int main()
// {
//     C <char> c;
//     c.display('A');
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// //--------------------------------------------------------------
// template <class T> //function template
// T abs(T n)
// {
// return (n < 0) ? -n : n;
// }
// //--------------------------------------------------------------
// int main()
// {
// int int1 = 5;
// int int2 = -6;
// long lon1 = 70000L;
// long lon2 = -80000L;
// double dub1 = 9.95;
// double dub2 = -10.15;
// //calls instantiate functions
// cout << "\nabs(" << int1 << ")=" << abs(int1); //abs(int)
// cout << "\nabs(" << int2 << ")=" << abs(int2); //abs(int)
// cout << "\nabs(" << lon1 << ")=" << abs(lon1); //abs(long)
// cout << "\nabs(" << lon2 << ")=" << abs(lon2); //abs(long)
// cout << "\nabs(" << dub1 << ")=" << abs(dub1); //abs(double)
// cout << "\nabs(" << dub2 << ")=" << abs(dub2); //abs(double)
// cout << endl;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////
