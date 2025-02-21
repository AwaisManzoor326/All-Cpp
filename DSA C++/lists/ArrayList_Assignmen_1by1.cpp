// Array List in which we use position that is passed throough parameter and  used to apply any operation eg. insert, remove etc

#include <iostream>
using namespace std;

#define MAX 10

class List
{
private:
    int array[MAX] = {0}; // Initialize all elements to 0

    // Helper method for shifting elements to the right
    void shiftRight(int startPos);

    // Helper method for shifting elements to the left
    void shiftLeft(int startPos);

    // Helper to validate index
    bool isValidIndex(int pos) const;

public:
    List(); // Constructor

    void printList() const;
    bool insert(int data, int pos);
    bool remove(int pos);
    bool update(int data, int pos);
    void removeFront();
    void removeLast();
    void addFront(int data);
    void addLast(int data);
    void clear();
    int find(int data) const;
};

// Main function to demonstrate functionality
int main()
{
    List L;

    // Insert elements
    L.insert(10, 0);
    L.insert(14, 1);
    L.insert(102, 2);
    L.insert(11, 3);

    L.printList();

    // Update and remove operations
    L.update(34, 1);
    L.removeFront();

    L.printList();

    // Add at front and last
    L.addFront(111);
    L.addLast(121);

    cout << "Position of 11: " << L.find(11) << endl;

    L.printList();

    // Clear the list
    L.clear();
    L.printList();

    return 0;
}

// Implementations......................................................
// Constructor
List::List() {}

// Helper: Shift elements to the right
void List::shiftRight(int startPos)
{
    for (int i = MAX - 1; i > startPos; i--)
    {
        array[i] = array[i - 1];
    }
}

// Helper: Shift elements to the left
void List::shiftLeft(int startPos)
{
    for (int i = startPos; i < MAX - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[MAX - 1] = 0; // Reset last element
}

// Helper: Validate index
bool List::isValidIndex(int pos) const
{
    if (pos < 0 || pos >= MAX)
    {
        cout << "Error: Invalid index!" << endl;
        return false;
    }
    return true;
}

// Print the list
void List::printList() const
{
    cout << "[ ";
    for (int i = 0; i < MAX; i++)
    {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

// Insert data at a given position
bool List::insert(int data, int pos)
{
    if (!isValidIndex(pos))
        return false;
    shiftRight(pos);
    array[pos] = data;
    return true;
}

// Remove element from a given position
bool List::remove(int pos)
{
    if (!isValidIndex(pos))
        return false;
    shiftLeft(pos);
    return true;
}

// Update the value at a given position
bool List::update(int data, int pos)
{
    if (!isValidIndex(pos))
        return false;
    array[pos] = data;
    return true;
}

// Remove the first element
void List::removeFront()
{
    shiftLeft(0);
}

// Remove the last element
void List::removeLast()
{
    array[MAX - 1] = 0;
}

// Add an element at the front
void List::addFront(int data)
{
    shiftRight(0);
    array[0] = data;
}

// Add an element at the last position
void List::addLast(int data)
{
    array[MAX - 1] = data;
}

// Clear the entire list
void List::clear()
{
    for (int i = 0; i < MAX; i++)
    {
        array[i] = 0;
    }
}

// Find the position of a given element
int List::find(int data) const
{
    for (int i = 0; i < MAX; i++)
    {
        if (array[i] == data)
        {
            return i;
        }
    }
    return -1; // Return -1 if element is not found
}

// arrayList in which we will not pass position thrugh parameters but current pointer is used
#include <iostream>
using namespace std;

#define MAX 10

class ArrayList
{
private:
    int array[MAX] = {0}; // Initialize all elements to 0
    int current = -1;     // Pointer to track the current position

    // Helper to validate the current index
    bool isValidIndex() const;

    // Helper method for shifting elements to the right
    void shiftRight(int startPos);

    // Helper method for shifting elements to the left
    void shiftLeft(int startPos);

public:
    ArrayList();

    void printList() const;
    bool moveNext();
    bool movePrevious();
    bool insert(int data);
    bool remove();
    bool update(int data);
    void addFront(int data);
    void addLast(int data);
    void clear();
    int getCurrent() const;
    bool setCurrent(int pos);
};

int main()
{
    ArrayList list;

    // Add elements to the list
    list.setCurrent(0);
    list.insert(10);
    list.moveNext();
    list.insert(20);
    list.moveNext();
    list.insert(30);

    // Print the list
    list.printList();

    // Update the current element
    list.update(25);
    list.printList();

    // Remove the current element
    list.remove();
    list.printList();

    // Add an element to the front and last
    list.addFront(5);
    list.addLast(50);

    // Print the list
    list.printList();

    // Clear the list
    list.clear();
    list.printList();

    return 0;
}

// Implementations......................................................
ArrayList::ArrayList() {}

bool ArrayList::isValidIndex() const
{
    if (current < 0 || current >= MAX)
    {
        cout << "Error: Invalid current position!" << endl;
        return false;
    }
    return true;
}

void ArrayList::shiftRight(int startPos)
{
    for (int i = MAX - 1; i > startPos; i--)
    {
        array[i] = array[i - 1];
    }
}

void ArrayList::shiftLeft(int startPos)
{
    for (int i = startPos; i < MAX - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[MAX - 1] = 0; // Reset last element
}

void ArrayList::printList() const
{
    cout << "[ ";
    for (int i = 0; i < MAX; i++)
    {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

bool ArrayList::moveNext()
{
    if (current < MAX - 1)
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

bool ArrayList::insert(int data)
{
    if (!isValidIndex())
        return false;
    shiftRight(current);
    array[current] = data;
    return true;
}

bool ArrayList::remove()
{
    if (!isValidIndex())
        return false;
    shiftLeft(current);
    return true;
}

bool ArrayList::update(int data)
{
    if (!isValidIndex())
        return false;
    array[current] = data;
    return true;
}

void ArrayList::addFront(int data)
{
    shiftRight(0);
    array[0] = data;
    current = 0; // Reset current to the first element
}

void ArrayList::addLast(int data)
{
    array[MAX - 1] = data;
    current = MAX - 1; // Move current to the last position
}

void ArrayList::clear()
{
    for (int i = 0; i < MAX; i++)
    {
        array[i] = 0;
    }
    current = -1; // Reset current pointer
}

int ArrayList::getCurrent() const
{
    if (!isValidIndex())
        return -1;
    return array[current];
}

bool ArrayList::setCurrent(int pos)
{
    if (pos < 0 || pos >= MAX)
    {
        cout << "Error: Invalid position!" << endl;
        return false;
    }
    current = pos;
    return true;
}
