#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    bool a = true;                   // Tôi chén Ngọc Trinh
    bool b = true;                   // Tôi chén Maria Ozawa
    bool c = a && b;                 // Tôi chén cả Ngọc Trinh và Maria Ozawa rồi
    bool d = a || b;                 // Tôi chén ít nhất 1 trong 2 người là Ngọc Trinh hoặc Maria Ozawa
    bool e = a && !b;                // Tôi chỉ chén Ngọc Trinh
    bool f = (a && !b) || (!a && b); // Tôi chén duy nhất 1 người trong 2 người hoặc là Ngọc Trinh hoặc là Maria Ozawa

    cout << "Toi chen ca Ngoc Trinh va Maria Ozawa roi: " << c << "\n";
    cout << "Toi chen it nhat 1 trong 2 nguoi la Ngoc Trinh hoac Maria Ozawa: " << d << "\n";
    cout << "Toi chi chen Ngoc Trinh: " << e << "\n";
    cout << "Toi chen duy nhat 1 nguoi trong 2 nguoi hoac la Ngoc Trinh hoac la Maria Ozawa: " << f;
}