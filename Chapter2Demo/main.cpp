#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //��ӡint���͵����ֵ
    //cout << INT_MAX << endl;
    //typechar ������

    /*
    typedef char wode_char;
    wode_char name = 'a';
    cout << name << endl;
    */

    //��֪Բ����İ뾶�͸ߣ���Բ��������
    const float PI = 3.14f;  //������һ��float���͵ĳ���
    //PI = 3.15;
    float redius = 4.5f;  //float����ʹ��ʱ������ĩβ����һ��f
    float height = 90.0f;
    double volume = PI * pow(redius,2) * height;
    cout << volume << endl;

    //����cout��ʾ����
    //1.ǿ����С���ĳ�����ʾ��ʽ
    cout << fixed;
    //2.������ʾ�ľ���
    cout << setprecision(2);
    //���double��������
    double doubleNum = 10.0 / 3.0;

    cout << doubleNum << endl
    return 0;

}
