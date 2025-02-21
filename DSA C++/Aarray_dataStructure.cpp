#include <iostream>
using namespace std;
#define MAX 10
class ArrayList
{
private:
    int *array;
    int current;
    int size;
    int capacity;

    void shiftRight(int index)
    {
        for (int i = size; i > index; i--)
        {
            array[i] = array[i - 1];
        }
    }

    void shiftLeft(int index)
    {
        for (int i = index; i < size - 1; i++)
        {
            array[i] = array[i + 1];
        }
    }

public:
    ArrayList(int cap)
    {
        capacity = cap;
        array = new int[capacity];
        size = current = 0;
    }

    ~ArrayList()
    {
        delete[] array;
    }

    // add by position
    void add(int index, int val)
    {
        if (index < 0 || index > size)
        {
            cout << "Index outof bound@@@" << endl;
            return;
        }
        if (size >= capacity)
        {
            cout << "List is full!!!" << endl;
            return;
        }

        shiftRight(index);
        array[index] = val;
        size++;

        if (index == current)
            current++;
    }

    void add(int val)
    {
        if (current >= capacity)
        {
            cout << "List is full!!!" << endl;
            return;
        }
        shiftRight(current);
        array[current] = val;
        size++;
        current++;
    }

    void remove(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "index out of bound" << endl;
            return;
        }
        shiftLeft(index);
        size--;

        if (index < current)
            current--;
    }

    void remove()
    {
        if (current <= 0 || current > size)
        {
            cout << "No valid index to remove!!!" << endl;
            return;
        }

        shiftLeft(current);
        size--;
        current--;
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " -> ";
        }
        cout << "None" << endl;
    }
}
int main()
{

    ArrayList obj(7);
    obj.add(34);
    obj.add(343);
    obj.add(342);
    obj.add(0, 12);
    obj.add(2, 12);
    obj.add(5, 12);
    obj.add(6, 400);
    obj.add(890);
    obj.display();

    obj.remove(4);
    obj.display();

    obj.remove();
    obj.display();
    obj.remove();
    obj.display();

    return 0;
}
