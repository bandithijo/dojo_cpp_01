#include <iostream>

int a;

// mendeklarasikan fungsi eksternal
extern void tulisNilai();

int main() {
    a = 99;
    tulisNilai();

    return 0;
}
