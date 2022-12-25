#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char S1[50];
    char *S2;
    char *spasi = (char*) " ";

    // melakukan pengisian nilai terhadap variabel S1 dan S2
    strcpy(S1, "Teks");
    S2 = (char*) "Gabungan";

    // menambahkan karakter spasi (' ') ke dalam variabel S1
    strcat(S1, spasi);

    // melakukan penggabungan string yang terdapat pada variabel S1 dan S2
    strcat(S1, S2);

    // menampilkan nilai dari variabel S2 setelah proses penggabungan
    cout << S1 << endl;

    return 0;
}
