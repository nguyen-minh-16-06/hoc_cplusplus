#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Nhap x: ";
    cin >> x;

    bool k1 = (x >= 0);
    cout << "x thuoc khoang [a;duong vo cung]: " << k1 << "\n";

    bool k2 = (((x >= -1) && (x <= 2)) || ((x >= 4) && (x <= 6)));
    cout << "x thuoc khoang [-1;2] hoac [4;6]: " << k2 << "\n";

    bool k3 = (((x > -2) && (x < 2)) || (x == 5));
    cout << "x bang 5 hoac khong thuoc khoang [-2;2], nguoc lai: " << k3 << "\n";

    bool k4 = (((x > -4) && (x <= 0)) || (x > 4));
    cout << "x thuoc khoang (-4;0] hoac (4;duong vo cung): " << k4;
}