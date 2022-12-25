#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[] = "Ini adalah contoh string";
    char *pch;

    cout << "Mencari karakter 'a' dalam \""
         << str << "\"..." << endl;

    pch = strchr(str, 'a');

    while (pch!=NULL) {
        cout << "ditemukan pada indeks ke-"
             << pch-str << endl;

        pch = strchr(pch + 1, 'a');
    }

    return 0;
}
