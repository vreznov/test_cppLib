#include <iostream>

using namespace std;

#include "../cpplib1/cpplib1.h"

struct KHmiStc_opera
{
    bool autorun = false;
    bool stoprun = false;
    quint16 select_face = 2;
    quint16 paint_mode = 3;

    char progName[12] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c'};  //要执行的运动程序文本

    // 机械手操作
};

int main()
{
    KHmiStc_opera ho;
    constexpr int sz = sizeof (KHmiStc_opera);

    quint8 v1 = ((quint8*)&ho)[1];
    quint8 v2 = ((quint8*)&ho)[4];
    quint8 v3[sz];
    memcpy(&v3, ((quint8*)&ho), sz);

    cout << "Hello World!" << endl;

    Cpplib1 cpl;
    cpl.value();

    return 0;
}
