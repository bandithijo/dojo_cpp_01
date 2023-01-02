#include <iostream>

using namespace std;

int main() {
    int X, Y;

    // menggeser 1 bit ke kiri dari bentuk biner bilangan 1
    X = 1 << 1;

    // menggeser 2 bit ke kiri dari bentuk biner bilangan 1
    Y = 1 << 2;

    // menampilkan hasil
    cout << "1 << 1 = " << X << endl;
    cout << "1 << 2 = " << Y << endl;

    return 0;
}
