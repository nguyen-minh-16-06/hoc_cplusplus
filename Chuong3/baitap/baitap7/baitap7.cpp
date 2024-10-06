#include <iostream>

using namespace std;

int main()
{
    // 1.
    int x1 = 2;
    float y1 = x1 - 0.5;
    cout << ((int)y1 == x1) << "\n";

    // 2.
    int x2 = 0;
    bool y2 = (x2++ == 1);
    cout << y2 << "\n";

    // 3.
    int x3 = -1;
    int y3 = x3 * x3 + abs(x3) * 2;
    cout << y3 % 2 << "\n";

    // 4.
    int x4 = 1;
    int y4 = 2;
    int z4 = 3;
    int t4 = 3 * (z4 + (x4 + y4) * (y4 + z4));
    cout << 1 - 2 * t4 << "\n";

    // 5.
    int x5 = 1;
    int y5 = 2;
    int z5 = 3;
    bool t5 = (x5 < y5) || (x5 > z5) && ((y5 < z5) || (x5 < z5));
    cout << t5 << "\n";

    // 6.
    int x6 = 1;
    int y6 = x6++ + 1;
    int z6 = ++x6;
    cout << z6 << "\n";

    // 7.
    float x7 = 1.5;
    int y7 = x7;
    float z7 = y7;
    cout << z7 << "\n";

    // 8.
    int x8 = 1.5;
    float y8 = x8;
    cout << (bool)y8 << "\n";

    // 9.
    char x9 = 'A';
    float y9 = x9;
    cout << (int)(char)y9 << "\n";

    // 10.
    char x10 = 'b';
    bool y10 = (x10 < 'c') || !(x10 > 'a') && (x10 != 'b') && (x10 + 1 >= 'd');
    cout << y10;
}