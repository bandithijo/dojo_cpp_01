#include <iostream>
#include <cstring>
#include <cerrno>  // errno
#include <cstdlib> // exit()
#include <cstdio>  // fopen(), fclose()

using namespace std;

int main() {
    FILE *fp;

    // membuka file untuk dibaca
    fp = fopen("coba.txt", "r");

    if (fp == NULL) {
        cout << "Kode error: " << errno << endl;
        cout << "Pesan error: " << strerror(errno) << endl;
        exit(EXIT_FAILURE);
    }

    // membaca is file
    char c;
    while ((c = getc(fp)) != EOF) {
        cout << c;
    }

    // menutup file
    fclose(fp);

    return 0;
}
