#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char namadepan[15]; // mendefinisikan variabel string yang berupa array
    char *namabelakang; // mendefinisikan variabel string yang berupa pointer

    strcpy(namadepan, "Bimo"); // menginputkan variabel string yang berupa array
    namabelakang = (char *) "Haryo Hanggoro"; // menginputkan variabel string yang berupa pointer

    cout << "Nama lengkap: " << namadepan
        << " "
        << namabelakang
        << endl;

    return 0;
}
