#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tuoi = 30;         // 4byte
    float can_nang = 60.5; // 4byte
    char xep_loai = 'A';   // ASCII 1byte
    string ho_ten = "Le Nguyen Minh";
    bool chua_ket_hon = true; // 1byte
    const float pi = 3.14;

    cout << "Toi nam nay " << tuoi << " tuoi\n";
    cout << "Toi duoc xep loai " << xep_loai;
    cout << "\nToi co ten la " << ho_ten;
    cout << "\nToi chua co vo: " << chua_ket_hon;
}