#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{



    int n=0;
    while(n++<=2);
    cout << n;

    /*
    //ʹ��ѭ��ʵ������������������˳�����
    string password;
    int i = 0;
    while(i < 3)
    {
        cout << "���������룺" <<endl;
        cin >> password;
        cout << "������������ǣ�" << password <<endl;
        i++;
        //�ж��û������Ƿ���ȷ
        if(password != "12345678")
        {
            if(i ==3)
            {
                cout << "3�������������ϵͳ�Զ��˳���" <<endl;
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
