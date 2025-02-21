// Abstract base class is a class which contain atleast one pure virtual function
// it is written to be over rided and inherited by other (derived) classes
#include<iostream>
#include<cstring>
using namespace std;

class CWH
{
    protected:
    string title;
    float rating;
    public:
    CWH(string t, float r): title(t), rating(r)
    {                                         }
    virtual void display()=0;  // pure virtual function OR do nothing function
    // a program can run if virtual function is not over rided but
    // a program can't run if virtual function is not over rided  we have to 
    //over ride this virtual function and this virtual function is called pure virtual function
};

class CWhVideo: public CWH
{
    protected:
    float v_length;
    public:
    CWhVideo(string t, float r, float vl): CWH(t, r)
    {
        v_length = vl;
    }
    void display()
    {
        cout<<"The title of video is "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 05 stars"<<endl;
        cout<<"length: "<<v_length<<" minutes"<<endl;
    }
};

class CWhText: public CWH
{
    protected:
    int words;
    public:
    CWhText(string t, float r, int w): CWH(t, r)
    {
        words = w;
    }
    void display()
    {
        cout<<"The title of video text is "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 05 stars"<<endl;
        cout<<"Words: "<<words<<endl;
    }
};

int main()
{
    string title ="C++ Tutorial";
    float rating = 4.1;
    int words = 500;
    float length = 30.5;

    CWH * pointer[2];
    CWhVideo v_obj(title, rating, length);
    CWhText t_obj(title, rating, words);

    pointer[0] = &v_obj;
    pointer[1] = &t_obj;

    pointer[0]->display();
    pointer[1]->display();

    return 0;
}  