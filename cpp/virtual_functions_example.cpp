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
    virtual void display()
    {

    }
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