#include <iostream>
#include <vector>
using namespace std;

float maximum(const vector<float>& num)
{
    if(num.empty())
    {
        return 0;
    }
    float max_var = num[0];
    for(float n : num)
    {
        max_var = (n>=max_var)?n:max_var;
    }

    return max_var;
}

int main()
{
    int amount;
    int i,j;

    cout<<"how many numbers do u want to check"<<endl;
    cin>>amount;

    while (true) 
    {
        cin >> amount;

        // 检查输入是否成功并且是正整数
        if (cin.fail() || amount <= 0) {
            cin.clear(); // 清除错误标志
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略输入缓冲区中的无效输入
            cout << "Invalid input. Please enter a positive integer: ";
        } else if (cin.peek() != '\n') { // 检查是否有多余的字符输入（例如小数点）
            cin.clear(); // 清除错误标志
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略输入缓冲区中的无效输入
            cout << "Invalid input. Please enter a positive integer: ";
        } else {
            break; // 输入有效，退出循环
        }
    }
    

    vector<float> num(amount);

    cout<<"enter all numbers"<<endl;
    for(i = 0;i<amount;i++)
    {
        cout<<"the "<<(i+1)<<". number is:"<<endl;
        cin>>num[i];
    }

    cout<<"check the number that u enter"<<endl;
    for(j = 0;j<amount;j++)
    {
        cout<<num[j]<<" ";
    }

    cout<<"the maximum is "<<maximum(num)<<endl;


    return 0;
}