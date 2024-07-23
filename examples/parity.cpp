#include <iostream>
using namespace std;

int main ()
{
    int num,remainder;
    cout<<"the number that u want determine the parity is: "<<endl;
    cin>>num;
    remainder = num%2;
    if (remainder == 1)
        cout<<"this number is odd"<<endl;
    else
        cout<<"this number is even"<<endl;

    return 0;
}