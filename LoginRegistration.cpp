#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
void login();
void registeration();
void forgot_pass();

int main()
{
    int c;
    cout<<"\t\t\t ___________________________________________________\n\n\n";
    cout<<"\t\t\t _______________Welcome to Login Page_______________\n\n\n";
    cout<<"\t\t\t _______________---------Menu--------________________\n\n";
    cout<<"                                                            \n\n";
    cout<<"\t| Press 1 to Login                       |"<<endl;
    cout<<"\t| Press 2 to Register                    |"<<endl;
    cout<<"\t| Press 3 if Forgot Password             |"<<endl;
    cout<<"\t| Press 4 to exit                        |"<<endl;
    cin>>c;
    
    switch(c)
    {
        case 1:
            login();
            break;
        case 2:
            registeration();
            break;
        case 3:
            forgot_pass();
            break;
        case 4:
            exit(1);
        default:
            system("cls");
            cout<<"Select from above shown options!!"<<endl;
            main();
    }
    return 0;
}
void login()
{   int count=0;
    string uname,pswd,id,pass;
    cout<<"Enter your username: ";
    cin>>uname;
    cout<<"Enter your password: ";
    cin>>pswd;
    fstream database("records.txt",ios::in);
    streampos position = database.tellg(); // Get current position for reading
    // cout<<position;
    // database>>id>>pass;
    while(!database.eof())
    {
            while(database>>id>>pass)
            {
                if(id==uname && pass==pswd)
                {
        cout<<"a";
                    count=1;
                    system("cls");
                    break;
                }
            }
    }  
    database.close();
    if(count==1)
    {
        cout<<uname<<"\n Your Login is SUCCESSFUL\n Thankyou";
        main();  
    }  
    else if(count==0){
        cout<<"\nLogin ERROR\nPlease check your username and password or register yourself\n";
    }
    position = database.tellg(); // Get current position for reading
    cout<<position;
    main();    
}
void registeration()
{
    string uname,pswd,rid,rpass;
    system("cls");
    cout<<"Enter the username: "   ;
    cin>>uname;
    cout<<"Enter the password: "   ;
    cin>>pswd;

    fstream database("records.txt",ios::app);
    database<<uname<<' '<<pswd<<endl;
    system("cls");
    cout<<"\t\t\tRegisteration is successful! \n";
    main();
}
void forgot_pass()
{
    int option;
    string uname,pswd,rname,rpswd;
    system("cls");
    cout<<"\t\t\t You forgot the password? No worries\n";
    cout<<"Press 1 to search your username\n";
    cout<<"Press 2 to go back to main menu\n";
    cin>>option;

    fstream database("records.txt",ios::in);
    switch(option)
    {
        case 1:
        {   
            int count=0;
            cout<<"Enter your username: ";
            cin>>uname;
            while(!database.eof())
            {
            while(database>>rname>>rpswd)
            {
                // cout<<rname<<" "<<rpswd;
            if(rname==uname)
            {
                count=1;
                break;
            }
            }
            }
            database.close();
            if(count==1)
            {   
                cout<<"\n\nYour account is found!\n";
                cout<<"\n\nYou password is :"<<rpswd;
                main();
            }
            else if(count==0){
                cout<<"\n\tSorry! your account is not found!";
            }
            main();
        }
        case 2:
        {
            main();
            break;
        }
        default:
            cout<<"\t\tWrong Choice! Please try again"<<endl;
    }
}