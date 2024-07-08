#include <iostream>

//#define using_namespace_std

#ifdef using_namespace_std
using namespace std;
#endif


/*
std 是 C++ 标准库的命名空间。C++ 标准库中的所有函数、对象和类型（如 std::cout、std::cin、std::string 等）
都在 std 命名空间中声明。使用 std 命名空间的主要目的是避免与用户自定义的同名标识符冲突。

当你在代码中写 using namespace std; 时，你告诉编译器你要使用 std 命名空间中的所有标识符，这样你就不需要在每次使用
标准库元素时都加上 std:: 前缀。例如：
*/


int main() {
    #ifdef using_namespace_std
    // <<endl is to add a LINE BREAK
    cout << "Using namespace std: Hello, World!" << endl;
    #else
    std::cout << "Not using namespace std: Hello, World!" << std::endl;
    #endif
    return 0;
}







// This is a comment
#if 0 
    This is a block comment
#endif
/* This is a multi-line comment 
This 

is 

a        

multi-line 

comment

*/