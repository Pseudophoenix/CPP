int fibRec(int n)
{
    if (n==1)
    return 1;
    else{
        return fibRec(n-1)+fibRec(n-2);
    }
}

int fibIter(int n)
{
    int t1=1,t2=1,rec;
    for(int i=2;i<=n;i++)
    {
        rec=t1+t2;
        t1=t2;
        t2=rec;
    }
}