//sum of natural numbers

#include <iostream>
using namespace std;

int main()
{
    int i;
    int sum=0;
    int n;

    cout<<"the purpose of this function is to calculate 1+2+3+.....+n"<<endl<<"please enter n!"<<endl;
    cin>>n;

    for(i=0;i<=n;i++)
    {
        sum +=i;
    }

    cout<<"sum = 1+2+3+....+"<<n<<" = "<<sum<<endl;
    return 0;
}