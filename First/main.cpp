#include <iostream>//引用系統寫的函式庫
#include <string>
using namespace std;//使用標準函式 或可在要使用時的每行開頭打std::要用的標準函式

int main(){
    string s_Msg = "asd";//可打"" 代表0字串 也可打NULL 代表空集合 字串(string)給值用""  字元(char)給值用''
    // str要跳脫字元打\後面在加要跳脫的東西
    int i_Num=3 ;//int 是整數  系統配置記憶體在堆疊區段給名為i_Num的變數 =念指派或放置
    cout << i_Num << endl;// &變數名字 可顯示出在某記憶體的位子
    cout << sizeof(int) <<" " <<sizeof(i_Num);//sizeof(型態)可顯示出型態所佔的空間 " "空一個
    return 0;
}
