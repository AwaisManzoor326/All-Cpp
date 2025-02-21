// UNARY OPERATOR OVERLOADING...............................
// #########################################################################################
// prefix ...........
/*
#include<iostream>
using namespace std;
class Counter
{
    int count;
    public:
    Counter()
    {       }
    Counter(int n)
    {
        count = n;
    }
    int get_count()
    {
        return count;
    }
    Counter operator ++ ()   // For prefix
    {
        ++count;
        return Counter(count);
    }
};
int main()
{
    Counter c1(2), c2(3);
    cout<<c1.get_count()<<endl;
    cout<<c2.get_count()<<endl;
    ++c1;
    ++c2;
    ++c2;
    cout<<c1.get_count()<<endl;
    cout<<c2.get_count()<<endl;
    c2 = ++c1;  // This is done due to return method in operator function of class
    // otherwise assignment operator cannot be done.
    cout<<c1.get_count()<<endl;
    cout<<c2.get_count()<<endl;

    return 0;
}
*/
// #########################################################################################
// postfix..........................
/*
#include<iostream>
using namespace std;
class counter
{
    private:
    int Count;
    public:
    counter()
    {       }
    counter(int c)
    {
        Count = c;
    }
    int getCount()
    {
        return Count;
    }
    counter operator ++ ()    // For Prefix
    {
        return counter(++Count);
    }
    counter operator ++ (int)   // For Postfix
    {
        return counter(Count++);
    }
};
int main()
{
    counter c3(1), c4(1);
    cout<<c3.getCount()<<endl;
    cout<<c4.getCount()<<endl;
    c3++;
    c4++;
    cout<<c3.getCount()<<endl;
    cout<<c4.getCount()<<endl;
    c4 = ++c3;               // it frist increments the c3 and then assign it to c4
    cout<<c3.getCount()<<endl;
    cout<<c4.getCount()<<endl;
    c4 = c3++;               // it first sets the previous value of c3 to c4 and then increments c3 which is not then assigned to c4.
    cout<<c3.getCount()<<endl;
    cout<<c4.getCount()<<endl;

    return 0;
}
*/
// BINARY OPERATOR OVERLOADING............................
// #########################################################################################
/*
#include<iostream>
using namespace std;
class EngDist
{
    private:
    int feet;
    float inches;
    public:
    EngDist()
    {       }
    EngDist(int f, float in) : feet(f), inches(in)
    {                                            }
    void get_dist()
    {
        cout<<"Enter Feet: ";
        cin>>feet;
        cout<<"Enter Inches: ";
        cin>>inches;
    }
    void Display()
    {
        cout<<feet<<"\' - "<<inches<<"\" "<<endl;
    }
    EngDist operator + (EngDist);
};

EngDist EngDist :: operator + (EngDist d)
{
    int f = feet + d.feet;
    float i = inches + d.inches;
    // these 02 lines for binary overloading and last line of this function if 'return' is needed...
    if (i >= 12.0)
    {
        i = i - 12.0;
        f = f + 1;
    }
    return EngDist(f, i);
}

int main()
{
    EngDist obj1;
    obj1.get_dist();
    EngDist obj2(5, 5.0);
    EngDist obj3, obj4;
    obj3 = obj1 + obj2;
    obj4 = obj1 + obj2 + obj3;
    obj1.Display();
    obj2.Display();
    obj3.Display();
    obj4.Display();

    return 0;
}
*/
// #########################################################################################
// String Contanetation.........
/*
#include <iostream>
using namespace std;
#include <string.h> //for strcpy(), strcat()
#include <stdlib.h> //for exit()
////////////////////////////////////////////////////////////////
class String // user-defined string type
{
private:
    enum
    {
        SZ = 80
    };            // size of String objects
    char str[SZ]; // holds a string
public:
    String() // constructor, no args
    {
        strcpy(str, "");
    }
    String(char s[]) // constructor, one arg
    {
        strcpy(str, s);
    }
    void display() const // display the String
    {
        cout << str;
    }
    String operator+(String ss) const // add Strings
    {
        String temp; // make a temporary String
        if (strlen(str) + strlen(ss.str) < SZ)
        {
            strcpy(temp.str, str);    // copy this string to temp
            strcat(temp.str, ss.str); // add the argument string
        }
        else
        {
            cout << "\nString overflow";
            exit(1);
        }
        return temp; // return temp String
    }
};
////////////////////////////////////////////////////////////////
int main()
{
    String s1 = "\nMerry Christmas ! "; // uses constructor 2
    String s2 = "Happy new year !";     // uses constructor 2
    String s3;                          // uses constructor 1
    s1.display();                       // display strings
    s2.display();
    s3.display();
    s3 = s1 + s2; // add s2 to s1,
    // assign to s3
    s3.display(); // display s3
    cout << endl;
    return 0;
}
*/
// #########################################################################################
// CoMPARISON OPERATORS
// #include <iostream>
// using namespace std;
// ////////////////////////////////////////////////////////////////
// class Distance // English Distance class
// {
// private:
//     int feet;
//     float inches;

// public: // constructor (no args)
//     Distance() : feet(0), inches(0.0)
//     {
//     } // constructor (two args)
//     Distance(int ft, float in) : feet(ft), inches(in)
//     {
//     }
//     void getdist() // get length from user
//     {
//         cout << "\nEnter feet : ";
//         cin >> feet;
//         cout << "Enter inches : ";
//         cin >> inches;
//     }
//     void showdist() const // display distance
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     bool operator<(Distance) const; // compare distances
// };
// //--------------------------------------------------------------
// // compare this distance with d2
// bool Distance::operator<(Distance d2) const // return the sum
// {
//     float bf1 = feet + inches / 12;
//     float bf2 = d2.feet + d2.inches / 12;
//     return (bf1 < bf2) ? true : false;
// }
// ////////////////////////////////////////////////////////////////
// int main()
// {
//     Distance dist1;         // define Distance dist1
//     dist1.getdist();        // get dist1 from user
//     Distance dist2(6, 2.5); // define and initialize dist2
//     // display distances
//     cout << "\ndist1 = ";
//     dist1.showdist();
//     cout << "\ndist2 = ";
//     dist2.showdist();
//     if (dist1 < dist2) // overloaded ‘<’ operator
//         cout << "\ndist1 is less than dist2";
//     else
//         cout << "\ndist1 is greater than(or equal to) dist2";
//     cout << endl;
//     return 0;
// }
// #########################################################################################
// using built-in function access() for both the input & output.....
/*
#include<iostream>
using namespace std;
#include <process.h>   //for exit()
const int LIMIT = 100; // array size
////////////////////////////////////////////////////////////////
class safearay
{
private:
    int arr[LIMIT];

public:
    int &access(int n) // note: return by reference
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        return arr[n];
    }
};
////////////////////////////////////////////////////////////////
int main()
{
    safearay sa1;
    for (int j = 0; j < LIMIT; j++)              // insert elements
        sa1.access(j) = j * 10;                 //*left* side of equal sign
    for (int j = 0; j < LIMIT; j++)                // display elements
    {
        int temp = sa1.access(j);            //*right* side of equal sign
        cout << "Element " << j << " is " << temp << endl;
    }
    return 0;
}
*/
// #########################################################################################
    // uses overloaded [] operator for both put and get so that we don't need to call any function for object array.....
/*
#include <iostream>
using namespace std;
#include <process.h>   //for exit()
const int LIMIT = 100; // array size
////////////////////////////////////////////////////////////////
class safearay
{
private:
    int arr[LIMIT];

public:
    int &operator[](int n) // note: return by reference
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        return arr[n];
    }
};
////////////////////////////////////////////////////////////////
int main()
{
    safearay sa1;
    cout<<"//////////////////////////////////////////////////////////////////////////\n";
    for (int j = 0; j < LIMIT; j++) // insert elements
        sa1[j] = j * 10;            //*left* side of equal sign
    for (int j = 0; j < LIMIT; j++)     // display elements
    {
        int temp = sa1[j]; //*right* side of equal sign
        cout << "Element " << j << " is " << temp << endl;
    }
    return 0;
}
*/
// #########################################################################################