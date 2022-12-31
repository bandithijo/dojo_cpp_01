#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[] = "Ini adalah contoh string";
    char str2[] = "AaEeIiOoUu";
    char *pch;
    int counter = 0;

    cout << "Huruf vokal dalam str1: ";
    pch = strpbrk(str1, str2);
    while (pch != NULL) {
        cout << *pch << " ";
        pch = strpbrk(pch+1, str2);
        counter++;
    }
    cout << endl;
    cout << "Jumlah huruf vokal: " << counter << endl;

    return 0;
}
