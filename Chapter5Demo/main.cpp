#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{



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
