#include <iostream>
using namespace std;

class shape
{
protected:
    int colorCode;

public:
    shape(int cc = 112) : colorCode(cc)
    {
    }
    virtual void set()
    {                   }
    virtual float calcArea() = 0; // Pure virtual function
};

class circle : public shape
{
    float radius;

public:
    circle(int cc = 112, float r = 0.0) : shape(cc), radius(r)
    {
    }
    void set()
    {
        cout<<"For Circle:\n"
        cout << "Enter color code: ";
        cin >> colorCode;
        cout << "Enter circle radius: ";
        cin >> radius;
    }
    float calcArea() override
    {
        return 3.14 * radius * radius;
    }
};

class rectangle : public shape
{
    float length, width;

public:
    rectangle(int cc = 112, float l = 0.0, float w = 0.0) : shape(cc), length(l), width(w)
    {
    }
    void set()
    {

        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter color code: ";
        cin >> colorCode;
    }
    float calcArea() override
    {
        return length * width;
    }
};

int main()
{
    shape *ptr[3];
    circle c(111, 2.3), c1(112,2.1);
    rectangle r(1111, 2.3, 4.4);
    ptr[0] = &c;
    ptr[1] = &r;
    ptr[2] = &c1;
    ptr[0]->set();
    ptr[1]->set();
    ptr[2]->set();
    cout << "Area of circle: " << ptr[0]->calcArea() << endl;
    cout << "Area of rectangle: " << ptr[1]->calcArea() << endl;
    cout << "Area of c2: " << ptr[2]->calcArea() << endl;

    return 0;
}