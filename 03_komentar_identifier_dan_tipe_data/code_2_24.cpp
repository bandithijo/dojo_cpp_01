#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char S1[50] = "CONTOH";
    char *S2 = (char *) "salin string";

    // melakukan penyalinan string dari variabel S2 ke variabel S1
    strncpy(S1, S2, 4);

    // menampilkan nilai dari variabel S1
    cout << S1 << endl;

    return 0;
}
