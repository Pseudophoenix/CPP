// (A,B)->C
// A->B->C
// Multiple Inheritance
class A{};
class B{};
class C:public A,private B{};
int main()
{
    C obj;//constructor of C , A and B are called
    //order of calling is C, A, B
    return 0;
}
// Java doesn't allow multiple inheritance due to such problems
//Diamond Problem
// A->B,A->C
// (B,C)->D
// D gets confused that via B or via C it inherits properties of A
// class A{public: int x;};
// class C:public A{};
// class B:public A{};
// class D:public B, public C{};
// int main()
// {
//     D d;
//     cout<<d.x;
// }
// D has two copies of x one inherited through B and other through C


// Solution :
// C++ uses virtual keyword to solve the Diamond problem
// class A{public: int x;};
// class B:virtual public A{};
// class C:virtual public A{};
// class D:public B, public C{};
// int main()
// {
//     D d;
//     cout<<d.x;
// }
