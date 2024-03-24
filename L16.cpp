#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{   
    char arr[100];
    cout<<"Enter the name and age";
    cin.getline(arr,100);
    ofstream myfile("bidya.txt");
    myfile<<arr;
    myfile.close();
    cout<<"File is created successfully"<<endl<<endl;
    cout<<"FILE READING STARTED!!!"<<endl;
    char arr1[100];
    ifstream obj("bidya.txt");
    obj.getline(arr1,100);
    cout<<arr1<<endl;
    cout<<"File read operation completed"<<endl;
    obj.close();
    return 0;
}