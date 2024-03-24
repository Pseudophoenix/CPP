#include<stdexcept>
try{
    if(denominator==0)
        throw runtime_error("Division by zero!");
        return numerator/denominator;
}catch(const exception& e)
{
    cout<<"Caught exception in divide(): "<<e.what()<<endl;
    throw;
}

try{
    if(a<0||b<0)
    {
        throw invalid_argument("Negative numbers not allowed!!");
    }
    return a+b;
}
catch(const exception& e)
{
    cout<<"caught exce"<<e.what()<<" ";
    throw;
}
try{
    int result=calculateSum(10,divide(20,2));
    cout<<result<<" ";
    int invalidResult=calculateSum(5,divide(20,0));
    catch(const exception& e)
    {
        cout<<"Exception"<<
    }
}


