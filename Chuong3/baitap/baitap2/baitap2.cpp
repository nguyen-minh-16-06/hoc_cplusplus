#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    float r;
    const float p = 3.14;

    cout << "Nhap ban kinh: ";
    cin >> r;

    float chuvi = (2 * p) * r;
    float dientich = p * pow(r, 2);

    cout << "Chu vi hinh tron la: " << chuvi << "\n";
    cout << "Dien tich hinh tron la: " << dientich;
}