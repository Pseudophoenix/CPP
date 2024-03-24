#include <iostream>
using namespace std;
class StockItem{
    private:
        int itemCode;
        char itemDescrip[20];
        int itemQuantity;
        float itemUnitPrice;
    public:
        void readData()
        {
            cout<<"Enter Data\n";
            cout<<"Enter itemCode: ";
            cin>>itemCode;
            cout<<"Enter itemDescription: ";
            cin>>itemDescrip;
            cout<<"Enter item quantity: ";
            cin>>itemQuantity;
            cout<<"Enter itemUnitPrice: ";
            cin>>itemUnitPrice;
        }
        void displayData()
        {
            cout<<itemCode<<"\n"<<itemDescrip<<"\n"<<itemQuantity<<"\n"<<itemUnitPrice<<endl;
        }
};