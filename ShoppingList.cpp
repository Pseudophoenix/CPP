#include<iostream>
using namespace std;
const m=50;
class ITEMS{
    int itemCode[m];
    float itemPrice[m];
    int count;
    public:
    void CNT(void){
        count=0;
    }
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};

void ITEMS::getitem(void)
{
    cout<<"Enter the item code";
    cin>>itemCode[count];
    cout<<"Enter the item prices";
    cin>>itemPrice[count];
    count++;
}
void ITEMS::displaySum(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
    {
        sum+=itemPrice[i];
    }
    cout<<"Total value"<<sum<<endl;
}
void ITEMS::remove(void)
{
    int a;
    cout<<"Enter item code";
    cin>>a;
    for(int i=0;i<count;i++)
    {
        if(itemCode==a)
        itemPrice[i]=0;
    }
}
void ITEMS::displayItems(void){
    cout<<"Code Price";
    for(int i=0;i<count;i++)
    {
        cout<<itemCode[i];
        cout<<" "<<itemPrice[n];
    }
    cout<<"\n";
}
int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do{
        cout<<"Enter Appropriate number\n";
        cout<<"\n1"
    }
}