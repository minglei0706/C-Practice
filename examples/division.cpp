#include <iostream>
using namespace std;

int main()
{
    int dividend,divisor,quotient,remainder;

    cout<<"ENTER dividend"<<endl;
    cin>>dividend;
    cout<<"enter divisor"<<endl;
    cin>>divisor;
    quotient = dividend/divisor;
    remainder = dividend % divisor;
    cout<<"quotient = "<<quotient<<endl;
    cout<<"remainder = "<<remainder<<endl;
    return 0;
}