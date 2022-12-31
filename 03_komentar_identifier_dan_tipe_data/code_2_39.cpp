#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *pch;
    char str[] = "Contoh string";

    // melakukan pencarian karakter 'r'
    pch = (char*) memchr(str, 'r', strlen(str));

    cout << "str: " << str << endl;
    cout << "pch: " << pch << endl;

    if (pch != NULL) {
        cout << "'r' ditemukan pada indeks ke-"
             << pch-str << endl;
    } else {
        cout << "'r' tidak ditemukan" << endl;
    }

    return 0;
}
