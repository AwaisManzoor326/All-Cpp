#include<iostream>
using namespace std;

class move
{
    protected:
    int n;
    public:
    move() : n(0)   {       }
    void forward_move()
    {
        n++;
    }
};

class backward : public move
{
    public:
    void backward_move()
    {
        n--;
    }
    void show()
    {
        cout<<"You walked "<<n<<" times"<<endl;
    }
};

int main()
{
    backward Awais;
    Awais.show();
    Awais.forward_move();
    Awais.forward_move();
    Awais.forward_move();
    Awais.forward_move();
    Awais.show();
    Awais.backward_move();
    Awais.backward_move();
    Awais.backward_move();
    Awais.backward_move();
    Awais.backward_move();
    Awais.backward_move();
    Awais.backward_move();
    Awais.backward_move();
    Awais.backward_move();
    Awais.backward_move();
    Awais.backward_move();
    Awais.show();

}