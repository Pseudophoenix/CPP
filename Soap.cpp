#include<iostream>
using namespace std;
int main(){
    int inpt,code[4]={101, 102, 103, 104}, qty, stock[4]={50,50,50,50};
	float amnt, rate[5]={45.75, 33.50, 25.00, 44.75};
	char soap[4][70]={"Dettol", "Cinthol","Lux","LifeBouy"};

    cout<<"Select the soap code and enter its Code\nCode\tName\tRate per Piece\n101.\tDettol\t\t45.75\n102.\tCinthol\t\t33.50\n103.\tLux\t\t25.00\n104.\tLifeBouy\t44.75\n";

    do
    { 
        cout<<"Code:: "<<endl;

        cin>>inpt;

        for(int i=0;i<5;i++)
	    {
            if(inpt!=101 && inpt!=102 && inpt!=103 && inpt!=104)
        {
            cout<<"Invalid Input Code selected\n";
            break;
        }
        
            else if(inpt==code[i])
            {
                cout<<"You have chosen "<<soap[i]<<" with rate "<<rate[i]<<"\nStock of "<<soap[i]<<" is "<<stock[i]<<"\nEnter the number of soaps required\n";

            
                cin>>qty;
                if(stock[i]>qty)
                {
                    amnt=qty*rate[i];
                    cout<<"You have purchased "<<qty<<" "<<soap[i]<<" soaps for "<<amnt<<endl;
                    stock[i]=stock[i]-qty;
                    cout<<soap[i]<<" Stock left is "<<stock[i]<<endl;
                    break;
                }
                else
                {
                   cout<<"Not in Stock\n";
                    break;
                }
            } 
        }      
    }
    while(1>0);
    return 5;
}
    
