#include <iostream>

using namespace std;

int main()
{


    /*
    //强调下if的大括号
    int a = 5,b = 10;
    if(a > b)
    if(a++ > b--)
    a += b;

    cout << a << '\t' << b << endl;

    /*
    //switch 结构
    int choice = 1;
    switch(choice)
    {
    default:
        cout << 998 <<endl;
    case 1:
        cout << 1 <<endl;
        //break;
    case 2:
        cout << 2 <<endl;
        break;
    case 3:
        cout << 3 <<endl;
        break;
    case 4:
        cout << 4 <<endl;
        break;
    }

    /*
    //败家mm的购物车
    double price_louis = 35000.0;
    double price_hemes = 11044.5;
    double price_chanel = 1535.0;
    double total = 0; //总价
    double zhekou = 0; //折扣
    total = price_louis + price_hemes + price_louis;
    //如果购买的三种商品有一种商品单价大于1000
    //或者三种商品总金额大于5000，折扣率为30%
    //否则没有折扣
    if(price_chanel > 1000 || price_hemes > 1000 || price_louis > 1000 || total > 5000)
    {
        //zhekou = 0.3;
    }
    //如果总价大于5w就打7折，否者打9折
    if(total > 50000)
    {
        //total *= 0.7;
        zhekou = 0.7;
    }
    else
    {
        //total *= 0.9;
        zhekou = 0.9;
    }
    total *= zhekou;
    cout << "最终付款：" << total <<endl;

    /*
    //使用程序判断用户输入的字符是否是合法的银盘盘符
    char pan = '\0'; //默认值设置为空字符
    cout << "请输入一个字符，我来判断是否为合法：";
    cin >> pan;
    // 'A' ~ 'Z'
    //if(pan >= 'A' && pan <= 'Z')
    if(pan >= 'A' && pan <= 'Z')
    {
        cout << "是合法盘符！" << endl;
    }
    else
    {
        cout << "不是合法盘符！" << endl;
    }

    //cout << (2 << 3) << endl;

    //cout << sizeof(" ") << endl;
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
