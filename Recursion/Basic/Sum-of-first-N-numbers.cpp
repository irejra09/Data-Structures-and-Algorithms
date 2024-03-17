#include<iostream>
using namespace std;

long long sumFirstN(long long n) 
{
    if(n == 1) return 1;
    long long sum = sumFirstN(n-1);
    return n+sum;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The sum of first "<<n<<" numbers are: "<<sumFirstN(n);
    cout<<endl; 
    return 0;
}