#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char S1[50];
    char *S2;

    // melakukan pengisian nilai terhadap variable S1 dan S2
    strcpy(S1, "Nama saya adalah ");
    S2 = (char*) "Budi Raharjo";

    // menggabungkan 4 karakter dari variabel S2 ke variabel S1
    strncat(S1, S2, 4);

    // menampilkan nilai dari variabel S1 setelah dilakukan penggabungan
    cout << S1 << endl;

    return 0;
}
