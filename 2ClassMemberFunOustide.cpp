#include<iostream>
using namespace std;

class StockItem
{
    private:
        int itemCode;
        char itemDescription[20];
        int itemQuantity;
        float itemUnitPrice;
    public:
        void readData();
        void printData();
};
void StockItem::readData()
{
    cout<<"\n\nEnter the particulars of a Stock Item\n\n";
    cout<<"Enter Item Code: ";
    cin>>itemCode;
    cout<<"Enter tiem description: ";
    cin>>itemDescription;
    cout<<"Enter item quantity: ";
    cin>>itemQuantity;
    cout<<"Enter item unit price: ";
    cin>>itemUnitPrice;
}
inline void StockItem::printData()  // making member function defined outside class inline
{
    cout<<"\n\nParticular of a Stock item are\n\n";
    cout<<"Item Code: ";
    cout<<itemCode<<endl;
    cout<<"Item Description: ";
    cout<<itemDescription<<endl;
    cout<<"Item Quantity: ";
    cout<<itemQuantity<<endl;
    cout<<"Item Unit Price: ";
    cout<<itemUnitPrice<<endl;    
}
int main()
{

    return 1;
}
