#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{


    /*
    //请用循环打印1997年7月的日历，1997年7月1日周二，香港回归举国同庆
    //1.定义变量
    int day = 31;
    int dayOfWeek = 2;  //7月1日周二
    cout << "\t一\t二\t三\t四\t五\t六\t七" << endl;
    //打印\t  周几-1个
    for(int i = 0;i < dayOfWeek - 1; i++){
        cout << '\t';
    }
    //打印日子
    for(intt i = 1; i <= day; i++){
        cout << i;
        //到底是\n还是\t，需要根据i的值来判断
        if((i + dayOfWeek -1) % 7 == 0){
            cout << '\n';
        }else{
            cout << '\t';
        }
    }
    cout << endl;
    /*
    int n=0;
    while(n++<=2);
    cout << n;

    /*
    //使用循环实现三次密码输入错误退出程序
    string password;
    int i = 0;
    while(i < 3)
    {
        cout << "请输入密码：" <<endl;
        cin >> password;
        cout << "您输入的密码是：" << password <<endl;
        i++;
        //判断用户输入是否正确
        if(password != "12345678")
        {
            if(i ==3)
            {
                cout << "3次输入密码错误，系统自动退出！" <<endl;
                exit(123456);
            }
        }
    }

    /*
    int i = 1;
    while(i <= 10){
        cout << i << endl;
        i++;
    }
    */
    return 0;
}
