#include <iostream>

using namespace std;

int main()
{


    /*
    //ǿ����if�Ĵ�����
    int a = 5,b = 10;
    if(a > b)
    if(a++ > b--)
    a += b;

    cout << a << '\t' << b << endl;

    /*
    //switch �ṹ
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
    //�ܼ�mm�Ĺ��ﳵ
    double price_louis = 35000.0;
    double price_hemes = 11044.5;
    double price_chanel = 1535.0;
    double total = 0; //�ܼ�
    double zhekou = 0; //�ۿ�
    total = price_louis + price_hemes + price_louis;
    //��������������Ʒ��һ����Ʒ���۴���1000
    //����������Ʒ�ܽ�����5000���ۿ���Ϊ30%
    //����û���ۿ�
    if(price_chanel > 1000 || price_hemes > 1000 || price_louis > 1000 || total > 5000)
    {
        //zhekou = 0.3;
    }
    //����ܼ۴���5w�ʹ�7�ۣ����ߴ�9��
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
    cout << "���ո��" << total <<endl;

    /*
    //ʹ�ó����ж��û�������ַ��Ƿ��ǺϷ��������̷�
    char pan = '\0'; //Ĭ��ֵ����Ϊ���ַ�
    cout << "������һ���ַ��������ж��Ƿ�Ϊ�Ϸ���";
    cin >> pan;
    // 'A' ~ 'Z'
    //if(pan >= 'A' && pan <= 'Z')
    if(pan >= 'A' && pan <= 'Z')
    {
        cout << "�ǺϷ��̷���" << endl;
    }
    else
    {
        cout << "���ǺϷ��̷���" << endl;
    }

    //cout << (2 << 3) << endl;

    //cout << sizeof(" ") << endl;
    /*
    //c�����У�0��ʾ�٣���0��ʾ��
    //c++�У������˲�������bool
    bool flag = true; //false
    cout << boolalpha;
    cout << "15 > 88" << (15 > 88) << endl;
    cout << "16 < 88" << (16 < 88) << endl;
    */

    /*
    /sizeof���Ի�ȡ����������ռ�ڴ�ռ�Ĵ�С
    cout << sizeof(12) << endl;

    //��������ȼ�
    cout << !((18+45%3*5)>16) << endl;
    /*
    int num  =1024;
    //��ʾ���������
    num += 90;
    num -= 90;
    num *= 90'
    num /= 90;
    num %= 90;
    */

    return 0;
}
