#include <iostream>
#include<cstdlib>

using namespace std;
const int SIZE=10;

template<class AType=int , int size=10> // class template AType type identifier
class atype{
  AType a[size];
  public:
  atype(){
      register int i;
      for(i=0;i<size;i++) a[i]=i;
  }
  AType &operator[](int i);
};
template<class AType,int size> AType &atype<AType,size>::operator[](int i)
{
    if(i<0||i>size-1){
        cout<<"\nIndex value of ";
        cout<<i<<" is out-of-bounds.\n";
        exit(1);
    }
    return a[i];
}

int main()
{
    atype<int,100> intob;
    atype<double>doubleob;
    atype<>defarray;
    int i;
    cout<<"Integer Array: ";
    // for(i=0;i<10;i++) intob[i]=(int) i;// here the [] operator is overloaded to give back the a[] value
    for(i=0;i<10;i++) cout<<intob[i]<<" ";
    cout<<endl;
    cout<<"Default Array: ";
    for(i=0;i<10;i++) defarray[i]=i/3;// here the [] operator is overloaded to give back the a[] value
    for(i=0;i<10;i++) cout<<defarray[i]<<" ";
    cout<<endl;
    cout<<"Double Array: ";
    for(i=0;i<10;i++) doubleob[i]=(double) i/3;// here the [] operator is overloaded to give back the a[] value
    for(i=0;i<10;i++) cout<<doubleob[i]<<" ";
    intob[12]=100;
    return 0;
}