#include <iostream>

using namespace std;

int main() {
    // mendeklarasikan variabel X, Y, dan Z
    int X = 10, Y = 3;
    int Z;

    // mendeklarasikan variabel A, B, dan C
    float A = 10.0, B = 3.0;
    float C;

    // melakukan operasi pembagian pada bilangan bulat
    Z = X / Y;

    // melakukan operasi pembagian pada bilangan riil (floating-point)
    C = A / B;

    // menampilkan hasil pembagian
    cout << X << " / " << Y << " = " << Z << endl;
    cout << A << " / " << B << " = " << C << endl;

    return 0;
}
