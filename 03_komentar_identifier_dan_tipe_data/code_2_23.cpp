#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char S1[50];
    char *S2;

    // melakukan pengisian nilai terhadap variabel S2
    S2 = (char *) "Ini adalah contoh penyalinan string";

    // melakukan penyalinan string dari variabel S2 ke variabel S1
    strcpy(S1, S2);

    // menampilkan nilai dari variabel S1
    cout << S1 << endl;

    return 0;
}
