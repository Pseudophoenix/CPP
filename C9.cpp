#include<iostream>
using namespace std;
int main(){
    int x;
    printf("Enter value for x");
    scanf("%d",&x);
    printf("Address of x is %d\n",&x);
    //Pointer
    int *y = &x;
    printf("%d\n",y);
    printf("%d\n",&y);
    //Alias----Reference
    //int &z;    .....>>>not allowed
    int &z=x;
    printf("%d\n",z);
    printf("%d\n",&z);
    return 5;
}