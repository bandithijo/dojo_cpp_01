#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char S[20];

    cout << "Masukkan nama Anda: ";

    // meminta input dari user dan menyimpan nilainya ke dalam variabel S
    cin >> S;

    // menampilkan kembali nama yang telah dimasukkan
    cout << "Hai " << S << ", apa kabarmu?" << endl;

    return 0;
}
