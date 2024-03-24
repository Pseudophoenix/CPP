#include<iostream>
using namespace std;
template<class T>
class LinearArray{
    T *a;
    int n, capacity;
    public:
    LinearArray(int size){
        n=0;
        capacity=size;
        a=new T[capacity];
    }
    ~LinearArray(){
        delete a;
    }
    int getElements(){
        return n;
    }
    int getCapacity(){
        return capacity;
    }
    void displayArray();
    void inputArray();
    void insertAt(int k,T item);
    void insertInSortedArray(T item);
    void deleteFrom(int k);
    void deleteFromSortedArray(T item);
    int linearSearch(T item);
    int binarySearchIterative(T item);
    int binarySearchRecursive(int lb,int ub, T item);
    void bubbleSortModified();
    void mergeSortedArrays(LinearArray<T> &la,LinearArray<T> &lb);

};
template <class T>
void LinearArray<T>::displayArray(){
    int i;
}