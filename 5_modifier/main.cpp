/*
修饰符 signed、unsigned、long 和 short 可应用于整型，signed 和 unsigned 可应用于字符型，long 可应用于双精度型。
这些修饰符也可以组合使用，修饰符 signed 和 unsigned 也可以作为 long 或 short 修饰符的前缀。例如：unsigned long int。
C++ 允许使用速记符号来声明无符号短整数或无符号长整数。您可以不写 int，只写单词 unsigned、short 或 long，int 是隐含的。
*/

#include <iostream>

using namespace std;

int main() {
    short int i;
    short unsigned int j;

    j = 50000;
    i = j;

    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "j="<<j<<endl;
    cout << "Size of short unsigned int: " << sizeof(short unsigned int) << " bytes" << endl;
    cout << "i="<<i<<endl;

class Example {
public:
    int get_value() const {
        return value_; // const 关键字表示该成员函数不会修改对象中的数据成员
    }
    void set_value(int value) const {
        value_ = value; // mutable 关键字允许在 const 成员函数中修改成员变量
    }
private:
    mutable int value_;
};

/*
	•	volatile确保每次访问变量时都从内存中读取，而不是使用缓存。
	•	主要用于硬件寄存器访问、中断服务程序和简单的多线程变量共享。
	•	volatil
*/

volatile int g_count = 0; // 全局变量 g_count 声明为 volatile

    return 0;
 
}

void example_function1() {
    static int count = 0; // static 关键字使变量 count 存储在程序生命周期内都存在
    count++;
}

void example_function2(register int num) {
    // register 关键字建议编译器将变量 num 存储在寄存器中
    // 以提高程序执行速度
    // 但是实际上是否会存储在寄存器中由编译器决定
}