#include <iostream>

using namespace std;

int main() {
    int X;

    // menampilkan teks untuk informasi
    cout << "Masukkan bilangan bulat: ";

    // membaca nilai dair keyboard dan menyimpannya ke dalam variabel X
    cin >> X;

    // menampilkan nilai yang telah dimasukkan
    cout << "Bilangan yang dimasukkan adalah " << X << endl;

    return 0;
}

// (Linux) compile with:
// $ g++ code_1_2.cpp -o code_1_2
