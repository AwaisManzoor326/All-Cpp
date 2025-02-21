#include<iostream>
using namespace std;

void drawOneTick(int ticksLen, int tickLabel)
{
    for ( int i = 0; i < ticksLen; i++)
        cout<<"-";
    if(tickLabel >= 0)
        cout<<" "<<tickLabel;
    cout<<endl;
}

void drawTicks(int ticksLen)
{
    if(ticksLen > 0)
    {
        drawTicks(ticksLen - 1);
        drawOneTick(ticksLen, -1);
        drawTicks(ticksLen - 1);
    }
}

void drawRuler(int inches, int majorLen)
{
    drawOneTick(majorLen, 0);
    for(int i = 1; i <= inches; i++)
    {
        drawTicks(majorLen - 1);
        drawOneTick(majorLen, i);
    }
}

int main()
{
    drawRuler(3, 4);
    
    return 0;
}