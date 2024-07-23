#include <iostream>
using namespace std;

bool is_vowels (char mychar)
{
    mychar = tolower(mychar);
    
    if(mychar == 'a'||mychar =='o'||mychar == 'i'||mychar == 'e'||mychar == 'u')
        return true;
    else
        return false;
}

int main()
{
    char mychar;
    cout << "enter the letter"<<endl;
    cin>>mychar;

    if(is_vowels(mychar))
        cout<<"this letter is vowel"<<endl;
    else
        cout<<"this letter is consonant"<<endl;

}
