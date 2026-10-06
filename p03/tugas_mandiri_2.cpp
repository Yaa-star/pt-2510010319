#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int hasil_bagi;
    int sisa;

    cout << "Bilangan pertama: ";
    cin >> a;

    cout << "Bilangan kedua: ";
    cin >> b;

    hasil_bagi = a / b;
    sisa = a % b;

    cout << a << " dibagi " << b
         << " adalah " << hasil_bagi
         << " sisa " << sisa << "\n";

    return 0;
}