#include <iostream>

using namespace std;
class StockItem
{
private:
    int itemCode;
    char itemDescrip[20];
    int itemQuantity;
    float itemUnitPrice;

public:
    void readData();
    void displayData();
    
};
void StockItem::displayData()
    {
        cout << itemCode << "\n"
             << itemDescrip << "\n"
             << itemQuantity << "\n"
             << itemUnitPrice << endl;
    }
    // instead of above declaration we could have made this function inline and used below specified format to do so
// inline void 
// StockItem::displayData()
// {

// }

void StockItem::readData()
    {
        cout << "Enter Data\n";
        cout << "Enter itemCode: ";
        cin >> itemCode;
        cout << "Enter itemDescription: ";
        cin >> itemDescrip;
        cout << "Enter item quantity: ";
        cin >> itemQuantity;
        cout << "Enter itemUnitPrice: ";
        cin >> itemUnitPrice;
    }
    // instead of above declaration we could have made this function inline and used below specified format to do so
// inline void
// StockItem::readData()
// {

// }
void main()
{
    
}