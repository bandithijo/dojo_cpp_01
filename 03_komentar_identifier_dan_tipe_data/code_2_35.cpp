#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *S = (char*) "master c++";
    char S1[11];

    // mengubah string S menjadi huruf besar, dan hasilnya ditampung ke variabel S1
    for (int i = 0; i < strlen(S); i++) {
        S1[i] = (char) toupper((char) S[i]);
    }

    // memasukkan karakter null di bagian akhir string
    S1[strlen(S1) + 1] = '\0';

    cout << S1 << endl;

    return 0;
}
