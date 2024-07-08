//extern 关键字用于在多文件程序中共享变量或函数。

#include <iostream>

using namespace std;


//variable declearation
extern int a;
extern int b,c;
extern float f;

//gloabl variable initialization
 int a = 30;

class myclass {

    public:
        static int class_var;    
};

int myclass::class_var = 100;

int main() {

    cout << "gloabl variable a = " << a << endl;

    //variable definition
    int a;
    int b,c;
    float f;

    //partial variable initialization

    a = 10;
    b = 20;
    c = a + b;
    f = 40.5;

    cout << "outside a = " << a << "\t" << "outside b = " << b << "\t" << "c = " << c << "\t" << "f/5 = " << (f/5) << endl;

    {
        b = 40;
        cout << "b inside block = " << b << endl;
    }

    cout << "class_var = " << myclass::class_var << endl;

    return 0;
}

