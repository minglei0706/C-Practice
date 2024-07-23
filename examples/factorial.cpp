#include<iostream>
using namespace std;

int main ()
{
    long long factorial=1;
    int n;
    int i;

    cout<<"calculat n!, please enter n!"<<endl;
    cin>>n;
    if(n == 0)
        factorial = 1;
    else
        for(i=1;i<=n;i++)
            factorial *= i;

    cout<<n<<"! = "<<factorial<<endl;

    return 0;

}