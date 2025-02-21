#include <iostream>
using namespace std;

#define MAX 10

class ArrayList
{
private:
    int array[MAX] = {0};
    int current;
    int size; // Track current size of the list

    // helper functions 
    void shiftLeft(int position);
    void shiftRight(int position);

    // overloaded functions
    bool isInvalidIndex() const;
    bool isInvalidIndex(int pos) const;

public:
    ArrayList();
    void printList() const;
    void addFront(int data);
    void addLast(int data);
    void removeFront();
    void removeLast();
    void clear();
    bool moveNext();
    bool movePrevious();
    int getCurrent() const;
    bool setCurrent(int pos);
    int find(int data) const;

    // overloaded functions
    bool insert(int data);
    bool insert(int data, int pos);
    bool remove();
    bool remove(int pos);
    bool update(int data);
    bool update(int data, int pos);
};

int main()
{
    ArrayList list;

    // Test addFront and printList
    cout << "Adding elements at the front:" << endl;
    list.addFront(10);
    list.addFront(20);
    list.addFront(30);
    list.printList(); 

    // Test addLast and printList
    cout << "Adding elements at the end:" << endl;
    list.addLast(40);
    list.addLast(50);
    list.printList(); 

    // Test moveNext, movePrevious, and getCurrent
    cout << "Moving current index:" << endl;
    list.moveNext();   // Move to index 1
    cout << "Current value at position " << list.getCurrent() << endl; 
    list.moveNext();   // Move to index 2
    cout << "Current value at position " << list.getCurrent() << endl; 
    list.movePrevious(); // Move back to index 1
    cout << "Current value at position " << list.getCurrent() << endl; 

    // Test removeFront and printList
    cout << "Removing front element:" << endl;
    list.removeFront();
    list.printList(); 

    // Test removeLast and printList
    cout << "Removing last element:" << endl;
    list.removeLast();
    list.printList(); 
    // Test insert(int) and printList
    cout << "Inserting at current position (index 1):" << endl;
    list.insert(25);  // Insert at current position (index 1)
    list.printList(); 

    // Test insert(int, int) and printList
    cout << "Inserting at index 2:" << endl;
    list.insert(35, 2); // Insert at index 2
    list.printList();   

    // Test remove(int) and printList
    cout << "Removing element at index 2:" << endl;
    list.remove(2);   // Remove element at index 2
    list.printList(); 

    // Test update(int) and printList
    cout << "Updating element at current position:" << endl;
    list.update(50);  // Update current position (index 1)
    list.printList(); 

    // Test update(int, int) and printList
    cout << "Updating element at index 2:" << endl;
    list.update(60, 2); // Update element at index 2
    list.printList();   

    // Test find method
    cout << "Finding element 50:" << endl;
    int index = list.find(50);
    if (index != -1)
        cout << "Found 50 at index " << index << endl; 
    else
        cout << "50 not found." << endl;

    // Test clear and printList
    cout << "Clearing the list:" << endl;
    list.clear();
    list.printList(); 
    
    return 0;
}

ArrayList::ArrayList() : current(0), size(0) {}

void ArrayList::shiftLeft(int position)
{
    for (int i = position; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[size - 1] = 0; // Reset last element
    size--;
}

void ArrayList::shiftRight(int position)
{
    for (int i = size; i > position; i--)
    {
        array[i] = array[i - 1];
    }
    size++;
}

bool ArrayList::isInvalidIndex() const
{
    return (current < 0 || current >= size);
}

bool ArrayList::isInvalidIndex(int pos) const
{
    return (pos < 0 || pos >= size);
}

void ArrayList::printList() const
{
    cout << "[ ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << "]" << endl;
}

void ArrayList::addFront(int data)
{
    if (size < MAX)
    {
        shiftRight(0);
        array[0] = data;
        size++;
    }
    else
    {
        cout << "Error: List is full!" << endl;
    }
}

void ArrayList::addLast(int data)
{
    if (size < MAX)
    {
        array[size] = data;
        size++;
    }
    else
    {
        cout << "Error: List is full!" << endl;
    }
}

void ArrayList::removeFront()
{
    if (size > 0)
    {
        shiftLeft(0);
    }
    else
    {
        cout << "Error: List is empty!" << endl;
    }
}

void ArrayList::removeLast()
{
    if (size > 0)
    {
        array[size - 1] = 0;
        size--;
    }
    else
    {
        cout << "Error: List is empty!" << endl;
    }
}

void ArrayList::clear()
{
    for (int i = 0; i < size; i++)
    {
        array[i] = 0;
    }
    size = 0;
}

bool ArrayList::moveNext()
{
    if (current < size - 1)
    {
        current++;
        return true;
    }
    cout << "Already at the end of the list!" << endl;
    return false;
}

bool ArrayList::movePrevious()
{
    if (current > 0)
    {
        current--;
        return true;
    }
    cout << "Already at the beginning of the list!" << endl;
    return false;
}

int ArrayList::getCurrent() const
{
    if (isInvalidIndex())
        return -1;
    return array[current];
}

bool ArrayList::setCurrent(int pos)
{
    if (isInvalidIndex(pos))
    {
        cout << "Error: Invalid position!" << endl;
        return false;
    }
    current = pos;
    return true;
}

int ArrayList::find(int data) const
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == data)
        {
            return i;
        }
    }
    return -1; // Return -1 if element is not found
}

bool ArrayList::insert(int data)
{
    if (size < MAX && !isInvalidIndex())
    {
        shiftRight(current);
        array[current] = data;
        size++;
        return true;
    }
    return false;
}

bool ArrayList::insert(int data, int pos)
{
    if (pos >= 0 && pos < size && size < MAX)
    {
        shiftRight(pos);
        array[pos] = data;
        size++;
        return true;
    }
    return false;
}

bool ArrayList::remove()
{
    if (isInvalidIndex())
        return false;
    shiftLeft(current);
    return true;
}

bool ArrayList::remove(int pos)
{
    if (isInvalidIndex(pos))
        return false;
    shiftLeft(pos);
    return true;
}

bool ArrayList::update(int data)
{
    if (isInvalidIndex())
        return false;
    array[current] = data;
    return true;
}

bool ArrayList::update(int data, int pos)
{
    if (isInvalidIndex(pos))
        return false;
    array[pos] = data;
    return true;
}
