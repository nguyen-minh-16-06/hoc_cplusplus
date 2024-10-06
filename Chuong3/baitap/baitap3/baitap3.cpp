#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, p, dientich;

    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;

    p = (a + b + c) / 2;

    dientich = sqrt(p * ((p - a) * (p - b) * (p - c)));

    cout << "Dien tich tam giac la: " << dientich;
}