//GCD of two numbers
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    // cout<<"a: "<<a<<"b: "<<b<<"a%b: "<<a%b<<endl;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout<<"The GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b)<<endl;
    return 0;
}