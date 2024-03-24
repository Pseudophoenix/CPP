#include<iostream>

using namespace std;

class Complex{
    double real;
    double imag;
    public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(double r, double i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        
        if(imag>0)
        cout<<real<<" + j "<<imag<<endl;
        else if(imag<0)
        cout<<real<<" - j "<<-imag<<endl;
        
    }
    Complex operator / (Complex obj)
    {
        if(obj.real==0 && obj.imag==0)
        {
            throw 0;
        }
        Complex temp;
        double deno=obj.real*obj.real+obj.imag*obj.imag;
        temp.real=(real*obj.real+imag*obj.imag)/deno;
        temp.imag=(imag*obj.real-real*obj.imag)/deno;
        
        return temp;
    }
};

Complex read()
{
    double real,imag;
    cout<<"Enter values for complex number: "<<endl;
    try{
        cout<<"Real: ";
        cin>>real;
        cout<<"Imaginary: ";
        cin>>imag;
        if(cin.fail())
        {
            throw 'c' ;
        }
    }catch(char inpt)
    {
        cout<<endl<<"Error! Invalid input entered. Not a double"<<endl;
        exit(1);
    }
    Complex temp(real,imag);
    return temp;
}

int main()
{   
    try{
    
        Complex c1=read();
        Complex c2=read();
        cout<<"c1:";
        c1.display();
        cout<<"c2:";
        c2.display();
        cout<<"Result: ";
        (c2/c1).display();
    }
    catch(int res)
    {
        cout<<res<<"s entered. Divide by Zero-Error";
    }
    return 0;
}