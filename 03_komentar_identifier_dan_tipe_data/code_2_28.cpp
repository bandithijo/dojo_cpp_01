#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *S1;
    char *S2;

    // melakukan pengisian nilai yang sama terhadap variabel S1 dan S2
    S1 = (char*) "COBA";
    S2 = (char*) "COBA";

    // menampilkan hasi perbandingan string dari variabel S1 dan S2
    cout << "S1: " << S1 << ", ";
    cout << "S2: " << S2 << endl;
    cout << "Hasil strcmp(S1,S2): "
         << strcmp(S1, S2) << endl << endl;

    // melakukan perubahan nilai terhadap variabel S1
    S1 = (char*) "Coba";

    // menampilkan kembali hasil perbandingan string dari variabel S1 dan S2
    cout << "S1: " << S1 << ", ";
    cout << "S2: " << S2 << endl;
    cout << "Hasil strcmp(S1,S2): "
         << strcmp(S1, S2) << endl << endl;

    // melakukan perubahan nilai terhadap variabel S2
    S2 = (char*) "coba";

    // menampilkan kembali hasil perbandingan string dari variabel S1 dan S2
    cout << "S1: " << S1 << ", ";
    cout << "S2: " << S2 << endl;
    cout << "Hasil strcmp(S1,S2): "
         << strcmp(S1, S2) << endl << endl;

    return 0;
}
