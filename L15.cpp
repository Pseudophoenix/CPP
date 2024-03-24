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
    return 0;
}