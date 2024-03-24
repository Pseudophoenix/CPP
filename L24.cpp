#include<iostream>
#include<fstream>
using namespace std;
struct Person{
    char name[50];
    int age;
    char phone[24];
};
int main()
{   
    int x;
    ifstream infile;
    infile.open("Junk.dat",ios::binary|ios::in);
    infile.read(&x,7);
    return 0;
}

#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{   
    char arr[100];
    cout<<"Enter the name and age";
    cin.getline(arr,100);
    ofstream myfile("file.txt");
    myfile<<arr;
    myfile.close();
    cout<<"File is created successfully"<<endl<<endl;
    cout<<"FILE READING STARTED!!!"<<endl;
    char arr1[100];
    ifstream obj("file.txt");
    obj.getline(arr1,100);
    cout<<arr1<<endl;
    cout<<"File read operation completed"<<endl;
    obj.close();
    return 0;
}
