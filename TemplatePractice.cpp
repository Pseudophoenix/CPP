#include<string>
template<class t>
class student{
    private:
    string student_name;
    t total_marks;
    public:
    student();
    student(string n,t m){
        student_name=n;
        total_marks=m;
    };
    void getinfo()
    {
        cout<<student_name<<" ";
        cout<<total_marks<<" ";
    }
};
int main()
{
    student<int> s1("Vipul",455);
    student<int> s2("Alok",475);
    s1.getinfo();
    s2.getinfo();
    return 0;
}
#include<iostream>
using namespace std;
template<typename T>
T myMax(T x, T y)
{
    return x>y?x:y;
}
template<typename T>
T arrMax(T arr[],int n)
{
    T res=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>res)
            res=arr[i];
    return res;
}
template<class T>
class Pair{
    T x, y;
    Pair(T i, T j){
        x=i,y=j;
    }
    T getFirst(){
        return x;
    }
    T getSecond(){
        return y;
    }
};
int main()
{
    Pair<int>   p1(3,4);
    Pair<char> c1('c','e');
    cout<<c1.getFirst()<<" "<<c1.getSecond();
    cout<<p1.getFirst()<<" "<<p1.getSecond();
    return 0;
}
