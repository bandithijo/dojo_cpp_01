#include <iostream>

using namespace std;

int main() {
    int X;

    cout << "Masukkan nilai X : "; cin >> X;

    // melakukan pemeriksaan terhadap nilai X
    if (X < 0) {
        X = -X;
    }

    // menampilkan nilai X setelah proses pemeriksaan
    cout << "| X | = " << X << endl;

    return 0;
}
