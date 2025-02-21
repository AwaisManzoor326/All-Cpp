#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        next = prev = nullptr;
    }
};

class DEQueue
{
private:
    node* front;
    node* rear;

public:
    DEQueue() : front(nullptr), rear(nullptr)
    {
    }

    bool isempty()
    {
        return front == nullptr;
    }

    void enqueueF(int data)
    {
        node* newnode = new node(data);
        if(isempty())
            front = rear = newnode;
        else{
            newnode->next = front;
            front->prev = newnode;
            front = newnode;
        }
    }

    void enqueueR(int data)
    {
        node* newnode = new node(data);
        if(isempty())
            front = rear = newnode;
        else{
            rear->next = newnode;
            newnode->prev = rear;
            rear = newnode;
        }
    }

    void dequeueF()
    {
        if(isempty()){
            cout<<"DEQueue is empty!!!"<<endl;
            return;
        }
        else if(front == rear){
            delete front;
            front = rear = nullptr;
        }
        else{
            node* temp = front;
            front = front->next;
            front->prev = nullptr;
            delete temp;
        }
    }

    void dequeueR()
    {
        if(isempty())
        {
            cout<<"Dequeue is empty!!!"<<endl;
            return;
        }
        else if(front == rear){
            delete rear;
            front = rear = nullptr;
        }
        else{
            node* temp = rear;
            rear = rear->prev;
            rear->next = nullptr;
            delete temp;
        }
    }

    int getfront()
    {
        if(isempty()){
            cout<<"DEQueue is empty!!!"<<endl;
            return -1;
        }
        return front->data;
    }

    int getrear()
    {
        if(isempty())
        {
            cout<<"DEQueue is empty!!!"<<endl;
            return -1;
        }
        return rear->data;
    }

    void display()
    {
        node* cur = front;
        while(cur != nullptr)
        {
            cout<<cur->data <<" <--> ";
            cur = cur->next;
        }
        cout<<"Null"<<endl;
    }

    ~DEQueue()
    {
        while(!isempty())
            dequeueF();
    }
};

int main()
{

    DEQueue dq;
    dq.enqueueF(100);
    dq.enqueueF(200);
    dq.enqueueR(300);
    dq.enqueueR(400);
    dq.display();
    cout<<" Front element is "<<dq.getfront()<<endl;
    cout << " Rear element is " << dq.getrear() << endl;
    dq.dequeueF();
    dq.dequeueR();
    // dq.dequeueR();
    // dq.dequeueR();
    // dq.dequeueR();
    dq.display();
    cout<<" Front element is "<<dq.getfront()<<endl;
    cout << " Rear element is " << dq.getrear() << endl;
    return 0;
}