#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //打印int类型的最大值
    //cout << INT_MAX << endl;
    //typechar ：别名

    /*
    typedef char wode_char;
    wode_char name = 'a';
    cout << name << endl;
    */

    //已知圆柱体的半径和高，求圆柱体的体积
    const float PI = 3.14f;  //定义了一个float类型的常量
    //PI = 3.15;
    float redius = 4.5f;  //float变量使用时建议在末尾加上一个f
    float height = 90.0f;
    double volume = PI * pow(redius,2) * height;
    cout << volume << endl;

    //控制cout显示精度
    //1.强制以小数的出现显示方式
    cout << fixed;
    //2.控制显示的精度
    cout << setprecision(2);
    //输出double类型数据
    double doubleNum = 10.0 / 3.0;

    cout << doubleNum << endl
    return 0;

}
