#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char S[20];

    cout << "Masukkan nama Anda: ";

    // meminta input dari user
    cin.getline(S, sizeof(S) - 1);

    // menampilkan nama yang telah dimasukkan
    cout << "Hai " << S << ", apa kabarmu?" << endl;

    return 0;
}
