#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    // Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    // food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    // total proce of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\tQuantity of items we have";
    cout<<"\nRoom available";
    cin>>Qrooms;
    cout<<"\nQuantity of pasta";
    cin>>Qpasta;
    cout<<"\nQuantity of burger";
    cin>>Qburger;
    cout<<"\nQuantity of noodles";
    cin>>Qnoodles;
    cout<<"\nQuantity of shake";
    cin>>Qshake;
    cout<<"\nQuantity of chicken";
    cin>>Qchicken;
    m:
    cout<<"\n\t\t\tPlease select from the menu options";
    cout<<"\n\n1)Rooms";
    cout<<"\n2)Burger";
    cout<<"\n3)Pasta";
    cout<<"\n4)Noodles";
    cout<<"\n5)Shake";
    cout<<"\n6)Chicken-Roll";
    cout<<"\n7)Information regarding sales and collection";
    cout<<"\n8)Exit";
    cout<<"\n\nPlease Enter your choice!";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\nEnter the number of rooms you want:";
            cin>>quant;
            if(Qrooms-Srooms>=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
            }
            else
                cout<<"\n\tOnly "<<Qrooms-Srooms<<"Rooms remaining in hotel";
                break;
            case 3:
            cout<<"\n\nEnter the Pasta  quantity:";
            cin>>quant;
            if(Qpasta-Spasta>=quant)
            {
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"Pasta/Pastas have been ordered for you!";
            }
            else
                cout<<"\n\tOnly "<<Qpasta-Spasta<<"Pasta remaining in hotel";
                break;
            case 2:
            cout<<"\n\nEnter the Burger  quantity:";
            cin>>quant;
            if(Qburger-Sburger>=quant)
            {
                Sburger=Sburger+quant;
                Total_burger=Total_burger+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"Burger/Burgers have been ordered for you!";
            }
            else
                cout<<"\n\tOnly "<<Qburger-Sburger<<"Burger remaining in hotel";
                break;
            case 4:
            cout<<"\n\nEnter the Noodle quantity:";
            cin>>quant;
            if(Qnoodles-Snoodles>=quant)
            {
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"Noodle/Noodles have been ordered for you!";
            }
            else
                cout<<"\n\tOnly "<<Qpasta-Spasta<<"Noodle remaining in hotel";
                break;
            case 5:
            cout<<"\n\nEnter the Shake  quantity:";
            cin>>quant;
            if(Qshake-Sshake>=quant)
            {
                Sshake=Sshake+quant;
                Total_shake=Total_shake+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"Shake/Shakes have been ordered for you!";
            }
            else
                cout<<"\n\tOnly "<<Qshake-Sshake<<"Shake remaining in hotel";
                break;
            case 6:
            cout<<"\n\nEnter the Chicken  quantity:";
            cin>>quant;
            if(Qchicken-Schicken>=quant)
            {
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"Chicken/Chickens have been ordered for you!";
            }
            else
                cout<<"\n\tOnly "<<Qchicken-Schicken<<"Chicken remaining in hotel";
                break;
            case 7:
                cout<<"\n7)Information regarding sales and collection";
                cout<<"Number of rooms we had : \n"<<Qrooms;
                cout<<"Number of rooms we gave : \n"<<Srooms;
                cout<<"Remaining Rooms : \n"<<Qrooms-Srooms;
                cout<<"Total rooms collection for the day : "<<Total_rooms;

                cout<<"Number of burgers we had : \n"<<Qburger;
                cout<<"Number of burgers we gave : \n"<<Sburger;
                cout<<"Remaining burgers : \n"<<Qburger-Sburger;
                cout<<"Total burger collection for the day : "<<Total_burger;

                cout<<"Number of pasta we had : \n"<<Qpasta;
                cout<<"Number of pasta we gave : \n"<<Spasta;
                cout<<"Remaining pasta : \n"<<Qpasta-Spasta;
                cout<<"Total pasta collection for the day : "<<Total_pasta;

                cout<<"Number of noodles we had : \n"<<Qnoodles;
                cout<<"Number of noodles we gave : \n"<<Snoodles;
                cout<<"Remaining noodles : \n"<<Qnoodles-Snoodles;
                cout<<"Total noodles collection for the day : "<<Total_noodles;

                cout<<"Number of shake we had : \n"<<Qshake;
                cout<<"Number of shake we gave : \n"<<Sshake;
                cout<<"Remaining shake : \n"<<Qshake-Sshake;
                cout<<"Total shake collection for the day : "<<Total_shake;

                cout<<"Number of chicken we had : \n"<<Qchicken;
                cout<<"Number of chicken we gave : \n"<<Schicken;
                cout<<"Remaining chicken : \n"<<Qchicken-Schicken;
                cout<<"Total chicken collection for the day : "<<Total_chicken;
                
                cout<<"Total chicken collection for the day : "<<Total_chicken+Total_burger+Total_noodles+Total_pasta+Total_rooms+Total_shake;

                break;
            case 8:
                exit(1);
            default:
            cout<<"\nPlease select the numbers mentioned above!";
    }
    goto m;
    return 0;
}