#include <iostream>

using namespace std;

// membuat fungsi dengan nama contoh
int contoh() {
    static int A = 0; // mendeklarasikan variabel statis
    A = A + 10;
    return A;
}

int main() {
    int x, y, z; // mendeklarasikan variabel x, y, dan z
    x = contoh(); // memanggil fungsi contoh() untuk yang pertama kali
    y = contoh(); // memanggil fungsi contoh() untuk yang kedua kali
    z = contoh(); // memanggil fungsi contoh() untuk yang ketiga kali

    // menampilkan nilai yang telah diproses di dalam fungsi
    cout << "Nilai pada pemangilan pertama : " << x << endl;
    cout << "Nilai pada pemangilan kedua   : " << y << endl;
    cout << "Nilai pada pemangilan ketiga  : " << z << endl;

    return 0;
}
