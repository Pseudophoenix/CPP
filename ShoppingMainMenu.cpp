#include<iostream>
#include<fstream>
using namespace std;
class shopping{
    private:
        int pcode;
        float price;
        float dis;
        string pname;

        public:
            void menu();
            void administrator();
            void buyer();
            void add();
            void edit();
            void rem();
            void list();
            void receipt();
};
void shopping::menu()
{
    m:
    int choice;
    string email;
    string password;
    cout<<"\t\t\t_____________________________________________\n";
    cout<<"\t\t\t_____________________________________________\n";
    cout<<"\t\t\t_____________Supermarket Main Menu___________\n";
    cout<<"\t\t\t_____________________________________________\n";
    cout<<"\t\t\t                                             \n";
    cout<<"\t\t\t_____________|1) Administrator |_____________\n";
    cout<<"\t\t\t_____________|2) Buyer         |_____________\n";
    cout<<"\t\t\t_____________|3) Exit          |_____________\n";
    cout<<"\t\t\t_____________|Please Select    |_____________\n";

    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"\t\t\tPlease Login\n";
            cout<<"\t\t\tEnter Email\n";
            cin>>email;
            cout<<"\t\t\tPassword\n";
            cin>>password;
            if(email=="robby@gmail.com" && password=="robby@123")
            {
                administrator();
            }
            else
            {
                cout<<"Invalid email/password";
            }
            break;
        case 2:
        {
            buyer();
        }
        case 3:
        {
            exit(1);
        }
        default:
            {
                cout<<"Please select from the given options";
            }
    }
    goto m;
}
void shopping:: administrator()
{
    m:
    int choice;
    cout<<"\n\n\n\t\t\t Administrator menu";
    cout<<"\n\t\t\t|______1) Add the product_________|";
    cout<<"\n\t\t\t|______2) Modify the product______|";
    cout<<"\n\t\t\t|______3) Delete the product______|";
    cout<<"\n\t\t\t|______4) Bach to main menu_______|";
    cout<<"\n\n\t Please enter your choice";
    cin>>choice;
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        rem();
        break;
    case 4:
        menu();
        break;
    default:
        cout<<"Invalid Choice!!";
    }
    goto m;
}
void shopping::buyer()
{
        m:
    int choice;
    cout<<"\n\n\n\t\t\t Buyer menu";
    cout<<"\n\t\t\t|______1) Buy the product_________|";
    cout<<"\n\t\t\t|______2) Bach to main menu_______|";
    cout<<"\n\n\t Please enter your choice";
    cin>>choice;
    switch (choice)
    {
    case 1:
        receipt();
        break;
    case 2:
        menu();
        break;
    default:
        cout<<"Invalid Choice!!";
    }
    goto m;
}
void shopping::add()
{
    m:
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;
    cout<<"\n\n\t\t\tAdd new product";
    cout<<"\n\n\tProduct code of product";
    cin>>pcode;
    cout<<"\n\n\tName of product";
    cin>>pname;
    cout<<"\n\n\tPrice of product";
    cin>>price;
    cout<<"\n\n\tDiscount on product";
    cin>>dis;
    data.open("database.txt",ios::in);
    if(!data)
    {
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();
    }
    else{
        data>>c>>n>>p>>d;
        while(!data.eof())
        {
            if(c==pcode)
            {
                token++;
            }
            data>>c>>n>>p>>d;
        }
        data.close();
    }

    if(token==1)
    goto m;
    else{
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();
    }
}