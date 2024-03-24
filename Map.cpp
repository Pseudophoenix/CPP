#include<iostream>
#include<map>
#include<cstring>
using namespace std;

class name{
    char str[40];
    public:
    name(){strcpy(str,"");}
    name(char*s){strcpy(str,s);}
    char*get(){return str;}
};
bool operator<(name a,name b){
    return strcmp(a.get(),b.get())<0;
}
class phoneNum{
    char str[80];
    public:
    phoneNum(){strcpy(str,"");}
    phoneNum(char*s){strcpy(str,s);}
    char *get(){return str;}
};
int main(){
    map<name,phoneNum>directory;
    directory.insert(pair<name,phoneNum>(name((char*)"Tom"),phoneNum((char*)"555-4533")));
    directory.insert(pair<name,phoneNum>(name((char*)"Chris"),phoneNum((char*)"555-9678")));
    directory.insert(pair<name,phoneNum>(name((char*)"John"),phoneNum((char*)"555-8195")));
    directory.insert(pair<name,phoneNum>(name((char*)"Rachel"),phoneNum((char*)"555-0809")));
    
    char str[80];
    cout<<"Enter name: ";
    cin>>str;
    map<name,phoneNum>::iterator p;
    p=directory.find(name(str));
    if(p!=directory.end())
    cout<<"Phone Number: "<<p->second.get();
    else
    cout<<"Name not in directory\n";
    return 0;
}