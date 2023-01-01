#include <iostream>

using namespace std;

int main() {
    // mendeklarasikan variabel X (diisi nilai 10) dan Y (diisi nilai 3)
    int X = 10, Y = 3;

    int Z; // mendeklarasikan variabel Z sebagai penampung nilai hasil operasi

    // melakukan operasi pembagian dan menyimpan sisa baginya ke dalam Z
    Z = X % Y;

    // menampilkan sisa bagi dari operasi pembagian X / Y;
    cout << X << " % " << Y << " = " << Z << endl;

    return 0;
}
