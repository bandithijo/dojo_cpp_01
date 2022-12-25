#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *S = (char*) "contoh membesarkan huruf";

    // menampilkan string S menjadi huruf besar
    for (int i = 0; i < strlen(S); i++) {
        cout << (char) toupper((char) S[i]);
    }
    cout << endl;

    return 0;
}
