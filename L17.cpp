#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char arr[100];
    cout<<"Ente the name and age "<<endl;
    cin.getline(arr,100);
    ofstream myfile("file.txt",ios::app);
    myfile<<arr;
    myfile.close();
    cout<<"File is created successfully"<<endl;
    cout<<"File Reading Started!!!";
    char arr1[100];
    ifstream obj("file.txt");
    obj.getline(arr1,100);
    cout<<arr1<<endl;
    cout<<"File Read operation completed"<<endl;
    obj.close();
}