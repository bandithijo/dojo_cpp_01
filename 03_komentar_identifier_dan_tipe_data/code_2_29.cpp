#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *S = (char*) "Master C++";

    // melakukan penulisan string mulai dari posisi akhir variabel S
    for (int i = strlen(S) - 1; i >= 0; i--) {
        // menampilkan karakter S[i]
        cout << S[i];
    }
    cout << endl;

    return 0;
}
