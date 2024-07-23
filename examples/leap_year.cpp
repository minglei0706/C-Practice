#include<iostream>
using namespace std;

int main()
{
    int year;
    bool leap_year;
    cout<<"please enter the year"<<endl;
    cin>>year;
    leap_year = (year%100==0)? ((year%400==0)? true : false) : ((year%4==0)? ((year%100==0)?false:true) : false);

    if(leap_year)
        cout<<"year "<<year<<" is leap year."<<endl;
    else
        cout<<"year "<<year<<" is commen year."<<endl;

    return 0;
    
}