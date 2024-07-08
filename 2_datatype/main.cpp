#include <iostream>
#include <limits>

using namespace std;


template <typename DATATYPE>
void datatype_size() {

    cout << typeid(DATATYPE).name()<<": \t\t\t" 
        << "byte count:" << sizeof(DATATYPE)<<"\t\t\t"
        << "Maximum value: \t" << numeric_limits<DATATYPE>::max()<< "\t\t"
        << "Minimum value: \t" << numeric_limits<DATATYPE>::min() << endl;

}

int main() {

    cout << "Type: \t\t\t" << "****************  size ***************" << endl;

    datatype_size<bool>();
    datatype_size<int>();
    datatype_size<float>();
    datatype_size<double>();
    datatype_size<char>();
    datatype_size<wchar_t>();
    datatype_size<short>();
    datatype_size<long>();

    typedef bool my_bool;
    cout << "my_bool: \t\t";
    datatype_size<my_bool>();

    enum color {red, green=5, blue};
    color c;
    c = blue;
    cout << "c is equal to \t" << c << endl;



    return 0;
}



