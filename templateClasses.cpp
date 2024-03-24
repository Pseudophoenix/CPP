#include<iostream>
using namespace std;
const int SIZE=10;
template<class StackType> class stack{

    StackType stck[SIZE]; //holder of values of type StackType
    int tos; //stack position maintainer

    public:
    stack(){tos=0;} //constructor to inintialize stack with top pointer = 0
    void push(StackType ob); // push object to stack
    StackType pop(); //pop object from stack
    void show()
    {   if(tos==0)
    {
        cout<<"Stack is empty";
    }
        for(int i=0;i<tos;i++)
        {
            cout<<stck[i]<<" ";
        }
        cout<<endl;
    }
};
template<class StackType>void stack<StackType>::push(StackType ob)
{
    if(tos==SIZE)
    {
        cout<<"Stack is full\n";
        return ;
    }
    stck[tos]=ob;
    tos++;
    // cout<<"["<<tos<<"]";
}
template<class StackType>StackType stack<StackType>::pop()
{
    if(tos==0)
    {
        cout<<"Stack is empty\n";
        return 0;
    }
    tos--;
    // cout<<"["<<tos<<"]";
    return stck[tos];
}
int main()
{
    stack<char>s1,s2;
    stack<int>s3;
    int i;
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    s1.push('d');
    s1.show();
    s2.show();
    for(i=0;i<4;i++)
    {
        s1.pop();
    }
    for(i=0;i<3;i++)
    {
        s2.pop();
    }
    s3.push(1);
    s3.push(2);
    s3.push(3);
    s3.push(4);
    s3.show();
    for(i=0;i<2;i++)
    {
        s3.pop();
    }
    s1.show();
    s2.show();
    s3.show();
    return 0;
}