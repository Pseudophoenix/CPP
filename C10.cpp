#include<iostream>
using namespace std;
class Point{
    int i,j;
};
int main(){
     int x=5;
    // const int y;    ....invalid
    Point X;
    // const Point Y;  ....invalid
    // const Point z=x;

    //Const reference
    // int &r1=x;
    /* const int &r2=x;
     r2=z;  *///----invalid

    //const pointer and pointer to constant
    int y=5;
    const int x1=5;
    const int *X1=&x;
    X1=&y;
    //(*X1)++;      //...... invalid
    int* const X2=&x;
    (*X2)++;
    
    printf("X1=%d",X1);   
    printf("X2=%d",*X2);      
    return 5;
}