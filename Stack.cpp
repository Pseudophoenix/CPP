#include <iostream>
using namespace std;
template <class T> // template for class T that can have any type of data
class ArrayStack
{
protected:
    int size;
    int top;
    T *element;

public:
    // ArrayStack()//constructor to initalize the stack
    // {
    //     top=-1;
    //     cout<<("Eeter the size of stack that you want to make: ");
    //     cin>>size;
    // }
    // ArrayStack();
    ArrayStack(int n);
    ~ArrayStack();
    int NotEmpty();
    int NotFull();
    // void push(T value);
    T pop();
    T peek();
    // defining a pointer that will point to similar kind of object
    ArrayStack()
    {
        element = new T[10];
        size = 10;
        top = -1;
    }
    // template <class T>
void push(T value)
{
    element[++top] = value;
}
};
// template<class T>
// ArrayStack<T>::
template <class T>
ArrayStack<T>::ArrayStack(int n)
{
    element = new T[n];
    size = n;
    top = -1;
}

template <class T>
ArrayStack<T>::~ArrayStack()
{
    delete element;
    top = -1;
    size = 0;
}
template <class T>
int ArrayStack<T>::NotFull()
{
    return top == size - 1 ? 0 : 1;
}
template <class T>
int ArrayStack<T>::NotEmpty()
{
    return top == -1 ? 0 : 1;
}

template <class T>
T ArrayStack<T>::pop()
{
    return element[top--];
}
template <class T>
T ArrayStack<T>::peek()
{
    return element[top];
}
int main()
{
    int choice, element, n;
    cout << "\nSize of stack: ";
    cin >> n;
    ArrayStack<int> intStack(n);
    do
    {
        cout << "\n       Options Available\n";
        cout << "++++++++++++++++++++++++++++++++++\n";
        cout << "     1.Push\n";
        cout << "     2.Pop\n";
        cout << "     3.Peek\n";
        cout << "     4.Exit\n";
        cout << "Enter your choice(1-4): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (intStack.NotFull())
            {
                cout << "Enter the number that you want to enter";
                cin >> element;
                intStack.push(element);
                break;
            }
            else
            {
                cout << "Stack Full!!";
            }
        case 2:
            if (intStack.NotEmpty())
            {
                cout << "Element popped off from stack is " << intStack.pop();
                break;
            }
            else
            {
                cout << "Stack Empty!!";
            }
            break;
        case 3:
            if (intStack.NotEmpty())
            {
                cout << "Element at top is " << intStack.peek();
                break;
            }
            else
            {
                cout << "Stack Empty!!";
            }
        default:
            cout << "Wrong input!! choose between 1-4";
        }
    } while (choice != 4);
    return 1;
}