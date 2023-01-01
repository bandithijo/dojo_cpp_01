#include <iostream>

using namespace std;

int main() {
    // deklarasi vairabel
    int i;
    double d;
    char c;
    char *s;

    // mengisi nilai ke dalam variabel
    i = 88;
    d = 4.675;
    c = 'C';
    s = (char*) "Contoh string";

    // menampilkan nilai variabel
    cout << "Nilai i: " << i << endl;
    cout << "Nilai d: " << d << endl;
    cout << "Nilai c: " << c << endl;
    cout << "Nilai s: " << s << endl;

    return 0;
}
