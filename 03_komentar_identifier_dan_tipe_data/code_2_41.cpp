#include <iostream>
#include <cstring>

using namespace std;

struct SISWA {
    char nama[25];
    int usia;
};

int main() {
    SISWA siswa, salinan_siswa;

    // menggunakan memcpy() untuk menyalin string
    memcpy(siswa.nama, "Bayu Nugroho", 13);
    siswa.usia = 19;

    // menggunakan memcpy() untuk menyalin struktur
    memcpy(&salinan_siswa, &siswa, sizeof(siswa));

    // menampilkan data salinan_siswa
    cout << "SALINAN DATA SISWA" << endl;
    cout << "Nama: " << salinan_siswa.nama << endl;
    cout << "Usia: " << salinan_siswa.usia << endl;

    return 0;
}
