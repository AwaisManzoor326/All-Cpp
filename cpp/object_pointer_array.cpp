#include <iostream>
using namespace std;
class ShopItem
{
private:
    int ID, Price;

public:
    void Set_data(int a, int b)
    {
        ID = a;
        Price = b;
    }
    void get_data()
    {
        cout << "The code of item is: " << ID << endl;
        cout << "The price of item is: " << Price << endl;
    }
};
int main()
{
    ShopItem *ptr = new ShopItem[3];
    ShopItem *ptrTemp = ptr;

    int i, j, k;

    for (i = 0; i < 3; i++)
    {
        cout << "Enter the code of item " << i + 1 << ": ";
        cin >> j;
        cout << "Enter the price of item " << i + 1 << ": ";
        cin >> k;
        ptr->Set_data(j, k);
        ptr++;
    }

    for (i = 0; i < 3; i++)
    {
        cout << "Details of item # " << i + 1 << endl;
        ptrTemp->get_data();
        ptrTemp++;
    }

    return 0;
}