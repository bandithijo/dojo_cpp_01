#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *S1;
    char *S2;
    int panjang_S1, panjang_S2;

    // melakukan pengisian nilai terhadap variabel S1 dan panjang_s2
    S1 = (char*) "Budi";
    S2 = (char*) "Raharjo";

    panjang_S1 = strlen(S1);
    panjang_S2 = strlen(S2);

    // menampilkan nilai dari variabel panjang_S1 dan panjang_s2
    cout << "Panjang S1 : " << panjang_S1 << endl;
    cout << "Panjang S2 : " << panjang_S2 << endl;

    return 0;
}
