#include <iostream>//�ޥΨt�μg���禡�w
#include <string>
using namespace std;//�ϥμзǨ禡 �Υi�b�n�ϥήɪ��C��}�Y��std::�n�Ϊ��зǨ禡

int main(){
    string s_Msg = "asd";//�i��"" �N��0�r�� �]�i��NULL �N��Ŷ��X �r��(string)���ȥ�""  �r��(char)���ȥ�''
    // str�n����r����\�᭱�b�[�n���檺�F��
    int i_Num=3 ;//int �O���  �t�ΰt�m�O����b���|�Ϭq���W��i_Num���ܼ� =�������Ω�m
    cout << i_Num << endl;// &�ܼƦW�r �i��ܥX�b�Y�O���骺��l
    cout << sizeof(int) <<" " <<sizeof(i_Num);//sizeof(���A)�i��ܥX���A�Ҧ����Ŷ� " "�Ť@��
    return 0;
}
