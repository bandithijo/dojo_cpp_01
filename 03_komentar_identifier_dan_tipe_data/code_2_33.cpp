#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *S = (char*) "CONTOH MENGECILKAN HURUF";

    // menampilkan string S menjadi huruf kecil
    for (int i = 0; i < strlen(S); i++) {
        cout << (char) tolower((char) S[i]);
    }
    cout << endl;

    return 0;
}
