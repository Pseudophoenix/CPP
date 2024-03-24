float power(float x, int n)
{
    if(n==0)
    return 1;
    else{
        int prod=x;
        for(int i=1;i<=n;i++)
            prod*=x;
            return prod;
    }
}
float recPower(float x,int n)
{
    if(n==1)
    return x;
    // if(n==0)
    // return 1;
    else{
        return x*recPower(x,n-1);
    }
}