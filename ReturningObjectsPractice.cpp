#include<iostream>
using namespace std;
class matrix{
    int m[3][3];
    public:
    void read(void)
    {
        cout<<"Enter the elements of the 3X3 matrix:\n";
    }
    friend matrix trans(matrix);
};
matrix trans(matrix m1)
{
    matrix m2;
    return m2;
}
