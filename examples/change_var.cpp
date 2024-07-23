#include <iostream>
using namespace std;

int main()
{
    int a = 5,b=10,temp;

    cout<<"before exchange"<<endl<<"a = "<<a<<"; b = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"after exchange"<<endl<<"a = "<<a<<"; b = "<<b<<endl;
    return 0;
}