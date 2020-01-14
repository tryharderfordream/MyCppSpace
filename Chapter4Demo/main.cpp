#include <iostream>

using namespace std;

int main()
{
    cout << (2 << 3) << endl;

    /*
    //c语言中，0表示假，非0表示真
    //c++中，引入了布尔类型bool
    bool flag = true; //false
    cout << boolalpha;
    cout << "15 > 88" << (15 > 88) << endl;
    cout << "16 < 88" << (16 < 88) << endl;
    */

    /*
    /sizeof可以获取数据类型所占内存空间的大小
    cout << sizeof(12) << endl;

    //运算符优先级
    cout << !((18+45%3*5)>16) << endl;
    /*
    int num  =1024;
    //演示符合运算符
    num += 90;
    num -= 90;
    num *= 90'
    num /= 90;
    num %= 90;
    */

    return 0;
}
