// #include<iostream>
// using namespace std;

// int main()
// {
//     int num,i=0,nDigit=0,newNum=0;
//     int arr[10];
//     cout<<"Enter the number";
//     cin>>num;
//     for(temp=num;temp>0;temp/=10)
//     {
//         arr[i]=temp%10;
//         nDigit++;
//         newNum=newNum*10+a[i];
//         cout<<a[i];
//         i++;
//     }
//     cout<<newNum;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num,sum=0;
//     cout<<"Enter the number: ";
//     cin>>num;
//     for(int temp=num;temp>0;temp/=10)
//     {
//         sum+=temp%10;
//     }
//     cout<<"Sum of digits is "<<sum;
//     return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,i=0;
    int arr[17];
    cout<<"Enter the decimal number";
    cin>>num;
    if(num%2==0)
    {
        nDigit=log2(num)+1;
    }
    else{
        nDigit=log2(num);
    }
    for(int temp=num;temp>0;temp/=2)
    {
        arr[i]=temp%2;
        cout<<arr[nDigit-i];
        i++;
    }


    return 0;
}

#include<iostream>
// #include<cmath>
using namespace std;

int main()
{
    int num,i=0;
    int arr[17];
    int nDigit;
    int binNum=0;
    cout<<"Enter the decimal number :";
    cin>>num;
    if (num<0)
    {
        cout<<"You have given negative number\n";
        return 0;
    }
    // if(num==0)
    // {
    //     nDigit=1;
    // }
    // else{
    //     nDigit=log2(num)+1;
    // }
    // cout<<nDigit<<endl;
    for(int temp=num;temp>0;temp/=2)
    {
        arr[i]=temp%2;
        // arr[nDigit-i-1]=temp%2;
        // cout<<arr[i];
        // cout<<arr[nDigit-i-1];
        i++;
    }
    cout<<i<<endl;
    for(int t=0;t<i;t++)
    {
        cout<<arr[i-t-1];
        binNum=binNum*10+arr[i-t-1];
    }
// or we could just perform the reverse function on this array and then create a number from it
    cout<<endl<<"Binary number is "<<binNum;
    return 0;
}