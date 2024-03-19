#include<iostream>
using namespace std;

int febonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    return febonacci(n-1)+febonacci(n-2);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The "<<n<<"th number in febonacci series is: "<<febonacci(n)<<endl;
    return 0;
}