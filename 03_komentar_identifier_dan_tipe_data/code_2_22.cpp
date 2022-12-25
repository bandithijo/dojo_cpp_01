#include <iostream>
#include <cstring>

using namespace std;

int main() {

    // mendeklarasikan variabel NAMA dengan tipe chard dan lebar 5 karakter
    char NAMA[5];

    // mengisikan nilai ke dalam variabel NAMA
    strcpy(NAMA, "BIMO");

    cout << "Karakter ke-0: " << NAMA[0] << endl;
    cout << "Karakter ke-1: " << NAMA[1] << endl;
    cout << "Karakter ke-2: " << NAMA[2] << endl;
    cout << "Karakter ke-3: " << NAMA[3] << endl;
    cout << "Karakter ke-4: " << NAMA[4] << endl;

    // saya sederhanakan dengan for loop
    for (int i = 0; i <= strlen(NAMA); i++) {
        cout << "Karakter ke-" << i << ": " << NAMA[i] << endl;
    }
}
