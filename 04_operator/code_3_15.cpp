#include <iostream>

using namespace std;

int main() {
    int X, Y;

    // menggeser 1 bit ke kanan dari bentuk biner bilangan 16
    X = 16 >> 1;

    // menggeser 2 bit ke kanan dari bentuk biner bilangan 16
    Y = 16 >> 2;

    // menampilkan hasil
    cout << "16 >> 1 = " << X << endl;
    cout << "16 >> 2 = " << Y << endl;

    return 0;
}
