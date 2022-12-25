#include <iostream>

using namespace std;

int main() {
    // mendeklarasikan variabel y dengan tipe data bool
    bool benar;

    // meminta input dari user
    int a, b;
    cout << "Masukkan nilai a: "; cin >> a;
    cout << "Masukkan nilai b: "; cin >> b;

    // melakukan assignment terhadap variabel benar
    benar = a > b;

    if (benar == true) { // bisa ditulis: if (benar) {...}
        cout << "a lebih besar dari b" << endl;
    } else {
        cout << "a lebih kecil dari atau sama dengan b" << endl;
    }

    return 0;
}
