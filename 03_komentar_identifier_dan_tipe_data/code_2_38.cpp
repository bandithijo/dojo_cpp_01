#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // mendeklarasikan string gaya C++
    string S;

    cout << "Masukkan nama Anda: ";

    // meminta input dari user
    getline(cin, S);

    // menampilkan nama yang telah dimasukkan
    cout << "Hai " << S << ", apa kabarmu?" << endl;

    return 0;
}
