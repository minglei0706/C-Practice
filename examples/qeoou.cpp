//quadratic equation of one unknown

#include <iostream>
using namespace std;

int main()
{
    float root1,root2;
    float a,b,c;

    cout<<"for the equation ax2+bx+c=0, please enter the parameters a,b,c"<<endl;
    cin>>a>>b>>c;

    float determine;

    determine = b*b - 4*a*c;

    if (determine>0){
        root1 = (-b + sqrt(determine))/(2*a);
        root2 = (-b - sqrt(determine))/(2*a);
        cout<<"root1 = "<<root1<<endl<<"root2 = "<<root2<<endl;
    }
    else if(determine == 0){
        root1 = -b/(2*a);
        root2 = -b/(2*a);
        cout<<"root1 = "<<root1<<endl<<"root2 = "<<root2<<endl;
    }
    else {
        cout<<"root1 = "<<(-b/(2*a))<<"+"<<"i"<<(sqrt(-determine))<<endl;
        cout<<"root2 = "<<(-b/(2*a))<<"-"<<"i"<<(sqrt(-determine))<<endl;
    }
    return 0;
        
}