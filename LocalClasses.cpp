// #include<iostream> 
// using namespace std;
// void fun()
// {
//     class Test{

//     };
// }

// int main()
// {
//     return 0;
// }

#include<iostream>
using namespace std;
// void fun()
// {
//     class Test{

//     };
//     Test t;
//     Test *tp;
// }

// int main()
// {
//     // Test t; // Error
//     // Test *tp;  // Error
//     return 0;
// }


// void fun()
// {
//     class Test{
//         public:
//         void method()
//         {
//             cout<<"Local Class Method()";
//         }
//     };
    
//         Test t;
//         t.method();
// }
// int main()
// {
//     fun();
//     return 0;
// }

// All mehtods of local classes must be defined inside the class only


// void fun()
// {
//     class Test{
//         public:
//         void method();
//     };
//     // 
//     // void Test::method() // method defined outside the local class
//     // {
//     //     cout<<"Local Class method";
//     // }
// }
// int main()
// {
//     return 0;
// }

void fun()
{
    class Test{
        // static int i; // local class cannnot have statiic data
        public:
        static void method()
        {
            cout<<"Local class method() called";
        }
    };
    Test::method();    
};

int main()
{   
    fun();
    return 0;
}