#include<iostream>
using namespace std;
template<class X> void compact(
    X *items,
    int count,
    int start,
    int end
    )
    {
        register int i;
        for(i=end+1;i<count;i++,start++)
        items[start]=items[i];
        for(;start<count;start++)
        items[start]=(X) 0;

    }
    int main()
    {
        int nums[7]={0,1,2,3,4,5,6};
        char str[19]="Generic__Functions";
        int i;
        cout<<"Here is uncompacted integer array"<<endl;
        for(i=0;i<7;i++)
        cout<<nums[i]<<" ";
        cout<<endl;
        cout<<"Here is uncompacted char array"<<endl;
        for(i=0;i<19;i++)
        cout<<str[i];
    cout<<endl;
        compact(nums,7,2,5);
        compact(str,19,7,12);
        cout<<"Here is compacted integer array"<<endl;
        for(i=0;i<7;i++)
        cout<<nums[i]<<" ";
        cout<<endl;
        cout<<"Here is compacted char array"<<endl;
        for(i=0;i<19;i++)
        cout<<str[i];
    }