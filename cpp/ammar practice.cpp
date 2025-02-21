#include<iostream>
using namespace std;
class time{
    private:
    int hours;
    int minuts;
    int seconds;
    public:
    time(): hours(0), minuts(0), seconds(0) { }
    time(int hs,int min,int sec){
        hours=hs;
        minuts=min;
        seconds=sec;
    }
    ~time(){
        cout<<"\nI am destroyed..";
    }
    void show(){
        cout<<"time in formate(HH:MM:SS):"<<hours<<":"<<minuts<<":"<<seconds<<endl;
    }
};
int main(){
    time t1(11,59,59);
    t1.show();
}