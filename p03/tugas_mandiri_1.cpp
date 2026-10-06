#include <iostream>
using namespace std;

int main() {
    int total_detik;
    int jam;
    int menit;
    int detik;
    int sisa;

    cout << "Masukkan jumlah detik: ";
    cin >> total_detik;

    jam = total_detik / 3600;
    sisa = total_detik % 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    cout << "Jam    : " << jam << "\n";
    cout << "Menit  : " << menit << "\n";
    cout << "Detik  : " << detik << "\n";

    return 0;
}