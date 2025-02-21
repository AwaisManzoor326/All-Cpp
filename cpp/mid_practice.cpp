// QUESTION # 01..........................................................................

// #include<iostream>
// using namespace std;

// class base
// {
//     int age;
//     string name;
//     public:
//     base() : age(0), name("")
//     {                          }
//     base(int a) : age(a), name("")
//     {                               }
//     base(string n): age(0), name(n)
//     {                                   }
//     base(int a, string n) : age(a), name(n)
//     {   
//                                  }
//     base(int a, string n){


//     }
//     void set()
//     {
//         cout<<"Enter age: ";   cin>>age;
//         cout<<"Enter name: ";   cin>>name;
//     }
//     void get()
//     {
//         cout<<"Your name is "<<name<<endl;
//         cout<<"Your age is "<<age<<endl;
//     }
// };

// int main()
// {
//     base obj0("awais");
//     base obj(19, "Hashim");
//     obj.set();
//     obj.get();
//     base obj1(20, "Ijlal");
//     obj1.get();
//     base A1();
//     A1(obj);

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////
// QUESTION # 05..........................................................................

// #include<iostream>
// using namespace std;

// class base
// {
//     protected:
//     string name;
//     public:
//     base(string n): name(n)
//     {                      }
//     virtual void set()
//     {                 }
//     virtual void show()
//     {                   }
// };

// class derived : public base
// {
//     int age;
//     public:
//     derived(string n, int a): base(n), age(a)
//     {                                       }
//     void set()
//     {
//         cout<<"Enter name: ";
//         cin>>name;
//         cout<<"Enter age: ";
//         cin>>age;
//     }
//     void show()
//     {
//         cout<<"Your name is "<<name<<endl;
//         cout<<"Your age is "<<age<<endl;
//     }
// };

// int main()
// {
//     base * p1[2];
//     derived obj1("Awais", 19), obj2("Alima", 17);
//     p1[0] = &obj1;
//     p1[1] = &obj2;
//     p1[0].set();
//     p1[1]->set();
//     p1[0]->show();
//     p1[1]->show();
//     return 0;
// }   

////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
class base
{
    protected:
    string name;
    public:
    base(string n):name(n)
    {                  }
    virtual void set()
    {      }
    virtual void get()
    {             }
};
class drived:public base
{
   private :
   int age;
   public:
   drived(string n,int a):base(n),age(a)
      {                 }
    void set()
    {
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter age:"<<endl;
        cin>>age;
    }  
     void get()
     {
        cout<<"your name is:"<<name<<endl;
        cout<<"your age is:"<<age<<endl;
     }
};
int main()
{
    base *p1[2];
    drived d1("ammar",19),d2("jalal",56);
    p1[0]=&d1;
    p1[1]=&d2;
    // p1[0]->set();
    // p1[1]->set();
    p1[0]->get();
    p1[1]->get();
    return 0;
}