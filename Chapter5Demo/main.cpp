#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{


    /*
    //����ѭ����ӡ1997��7�µ�������1997��7��1���ܶ�����ۻع�ٹ�ͬ��
    //1.�������
    int day = 31;
    int dayOfWeek = 2;  //7��1���ܶ�
    cout << "\tһ\t��\t��\t��\t��\t��\t��" << endl;
    //��ӡ\t  �ܼ�-1��
    for(int i = 0;i < dayOfWeek - 1; i++){
        cout << '\t';
    }
    //��ӡ����
    for(intt i = 1; i <= day; i++){
        cout << i;
        //������\n����\t����Ҫ����i��ֵ���ж�
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
