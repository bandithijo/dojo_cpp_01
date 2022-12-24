#include <stdio.h>

int main(void) {
    int X;

    // menampilkan teks untuk informasi
    printf("Masukkan bilangan bulat: ");

    // membaca nilai dari keyboard dan menyimpannya ke dalam variabel X
    scanf("%d", &X);

    // menampilkan nilai yang telah dimasukkan
    printf("Bilangan yang dimasukkan adalah %d\n", X);

    return 0;
}

// (Linux) compile with:
// $ gcc code_1_1.cpp -o code_1_1
