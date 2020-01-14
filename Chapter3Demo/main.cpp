#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
#include <iomanip>
using namespace std;  //命名空间

int main()
{
    //
    int num1 = -5,num2 = 2;
    //cout <<num1 / num2 << endl;
    //cout << num1 % num2 <<endl;
    //取模场景
    //获取某个数字的个位   5 % 10

    //num1 = (num2++) - (--num2);
    //cout << num1 << "\t" << num2 << endl;
    double num3 = num1 /num2;
    cout << num3 << endl;
    /*
     double attack1 = 275;
     double attack2 = 250;
     double attack3 = 240;

     cout << left;
     cout << setfill('_');
     cout << setw(8) << attack1 <<
             setw(8) << attack2 <<
             setw(8) << attack3 <<endl;
    /*
    int num;
    char ch1,ch2,ch3;
    cout << "请输入一个数字：";
    cin >> num;
    cin  >> ch1 >>ch2 >>ch3;
    cout << num << "\t" << ch1 << "\t" << ch2 << "\t" << ch3 << endl;
    //cout << (char)('A' + ' ') << endl;

    //cout << CHAR_MIN << '\t' << CHAR_MAX <endl;
    //cout << UCHAR_MAX << endl;
    //打印德玛西亚之力
    //SetConsoleTitle("示例：打印德玛西亚之力的详细信息");
    //**伤害*/
    //double value_attack = 57.88;
    //**伤害成长值*/
    //double value_attack_growth = 4.5;
    //**攻击距离*/
    //double value_attack_distance = 172;
    //**护甲值*/
    //double value_defence = 27.54;
    //**护甲成长值*/
    //double value_defence_growth = 3.0;

    //cout << "名称：德玛西亚之力" << endl;
    //cout << "伤害：" << value_attack << "(+" << value_attack_growth << ")\t"
     //    << "攻击距离：" << value_attack_distance << endl;


    /*
    //演示单精度浮点型和双精度浮点型精度问题
    float numFloat = 10 / 3.0;
    double numDouble = 10 / 3.0;
    cout << fixed;  //让浮点型固定以数字的方式显示
    cout << setprecision(2); //控制显示的小数位数 print("%.2lf",xxx);
    cout << "numFloat=" << numFloat * 10000000<< endl;
    cout << "numDouble" << numDouble * 10000000 << endl;
    /*
    //sizeof 用来测试数据类型的长度
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
    cout << sizeof(3.14f) << endl;
    return 0;
    */
}
