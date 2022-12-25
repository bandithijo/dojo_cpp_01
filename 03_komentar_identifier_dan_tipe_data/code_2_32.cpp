#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *S = (char*) "Ini adalah contoh string";
    char *substring = (char*) "contoh";
    char *PStr;

    // melakukan pencarian substring "contoh" di dalam variabel S
    PStr = strstr(S, substring);

    // menampilkan nilai dari variabel PStr
    cout << "S: " << S << endl;
    cout << "PStr: " << PStr << endl;
    cout << "Substring \"" << substring
         << "\" ditemukan pada indeks ke-"
         << PStr-S << endl;

    return 0;
}
